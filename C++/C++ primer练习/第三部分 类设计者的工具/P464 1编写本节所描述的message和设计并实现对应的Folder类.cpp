//时间：2019年7月4日10:00:06
//编写本节所描述的message
//设计并实现对应的Folder

#include <iostream>
#include <string>
#include <set>

class Folder;

class Message
{
    friend class Folder;
    friend void swap(Message &lhs, Message &rhs);
    friend void print_m(const Message&);
public:
    //folders被隐式初始化为空集
    explicit Message(const std::string &str = "" ) : contents(str) {}
    //拷贝控制成员，用来管理指向本Message的指针
    Message(const Message&);                   //拷贝构造函数
    Message& operator=(const Message&);    //拷贝赋值运算符
    ~Message();                                 //析构函数
    //从给定Folders集合中添加/删除本Message
    void save(Folder&);
    void remove(Folder&);
    //void addFldr(Folder *f)  {folders.insert(f);}   //添加给定Folder
    //void remFldr(Folder *f)  {folders.erase(f);}   //删除给定Folder
private:
    std::string contents;                 //实际消息文本
    std::set<Folder*> folders;            //包含本Message的Folders
    //拷贝构造函数，拷贝赋值运算符和析构函数所使用的工具函数
    //将本Message添加到指向参数的Folder中
    void add_to_Folders(const Message&);
    //从Folders中的每个Folder中删除本Message
    void remove_from_Folders();
};

class Folder
{
    friend void print_f(const Folder&);
public:
    Folder() = default;
    Folder(const Folder&);
    Folder& operator=(const Folder&);
    ~Folder();
    void addMsg(Message *m) { msgs.insert(m); }
    void remMsg(Message *m) { msgs.erase(m); }
private:
    std::set<Message *> msgs;
    void add_to_Msgs(const Folder&);
    void remove_from_Msgs();
};

void Message::save(Folder &f)
{
    folders.insert(&f);     //将给定Folder添加到我们的Folder列表中
    f.addMsg(this);          //将本Message添加到f的Message集合中
}

void Message::remove(Folder &f)
{
    folders.erase(&f);     //将给定Folder从我们的Folder列表中删除
    f.remMsg(this);         //将本Message从f的Message集合中删除
}

void Folder::add_to_Msgs(const Folder &f)
{
    for (auto msg : f.msgs)
        msg->save(*this);    //将这个Folder添加到所有Message中
}

void Folder::remove_from_Msgs()
{
    //for (auto msg : f.msgs)
        //msgs.remove(*this);
        while (!msgs.empty())       //将这个Folder从它所有Message中删除
             (*msgs.begin())->remove(*this);
}

Folder::Folder(const Folder &f) : msgs(f.msgs)
{
    add_to_Msgs(f);          //将Folder添加到它所有Message的folders中
}

Folder::~Folder()
{
    remove_from_Msgs();
}

Folder& Folder::operator=(const Folder &f)
{
    remove_from_Msgs();    //从每个Message中删除此Folder
    msgs = f.msgs;         //从右侧运算对象拷贝Message集合
    add_to_Msgs(f);      //将此Folder添加到每个新Message中
    return *this;
}

//将本Message添加到指向m的Folder
void Message::add_to_Folders(const Message &m)
{
    for (auto pf : m.folders)    //对每个包含m的Folder
        pf->addMsg(this);        //向该Folder添加一个指向本Message的指针
}

//拷贝构造函数
Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);     //将本消息添加到指向m的Folder中
}

//从对应的Folder中删除本Message
void Message::remove_from_Folders()
{
    for (auto pf : folders)    //对folders中每个指针
        pf->remMsg(this);        //从该Folder中删除本Message
}

//析构函数
Message::~Message()
{
    remove_from_Folders();
}

//拷贝赋值运算符
Message& Message::operator=(const Message &rhs)
{
    //通过先删除指针再插入它们来处理自赋值情况
    remove_from_Folders();       //更新已有Folder
    contents = rhs.contents;     //从rhs拷贝消息内容
    folders = rhs.folders;       //从rhs拷贝Folder指针
    add_to_Folders(rhs);         //将本Message添加到那些Folder中
    return *this;
}

void print_m(const Message &m)
{
    std::cout << "消息内容：" << m.contents << std::endl;
    std::cout << "自身的地址：" << &m << std::endl;
    std::cout << "保存此消息的消息目录的地址：";
    for (auto pm : m.folders)
        std::cout << pm << " ";
    std::cout << '\n' << std::endl;
}

void print_f(const Folder &f)
{
    std::cout << "消息目录的地址：" << &f << std::endl;
    std::cout << "保存的消息内容的地址：";
    for (auto pf : f.msgs)
        std::cout << pf << " ";
    std::cout << '\n' << std::endl;
}

void swap(Message &lhs, Message &rhs)
{
    using std::swap;    //严格来说并不需要
    //将每个消息的指针从原来所在Folder中删除
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);
    //交换contents和Folder指针set
    swap(lhs.folders, rhs.folders);     //使用swap(set&, set&)
    swap(lhs.contents, rhs.contents);   //swap(string&, string&)
    //将每个Message的指针添加到它的（新）Folder中
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

int main()
{
    Folder f1;          //创建消息目录
    Message m1("张三");
    m1.save(f1);
    Message m2(m1);    //创建消息，通过调用拷贝构造函数和拷贝赋值运算符验证程序准确性
    Message m3;
    m3 = m1;

    print_m(m1);      //输出保存消息的消息目录的地址
    print_m(m2);
    print_m(m3);

    Folder f2(f1);     //创建消息目录，通过调用拷贝构造函数和拷贝赋值运算符验证程序准确性
    Folder f3;
    f3 = f1;
    print_f(f1);      //输出消息目录保存的消息的地址
    print_f(f2);
    print_f(f3);

    print_m(m1);     //因为消息目录进行了拷贝，消息也指向了其他的消息目录，
    print_m(m2);     //再次输出保存消息的消息目录的地址，验证是否保存了其他消息目录的地址
    print_m(m3);


    return 0;
}

