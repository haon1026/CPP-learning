//ʱ�䣺2019��7��4��10:00:06
//��д������������message
//��Ʋ�ʵ�ֶ�Ӧ��Folder

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
    //folders����ʽ��ʼ��Ϊ�ռ�
    explicit Message(const std::string &str = "" ) : contents(str) {}
    //�������Ƴ�Ա����������ָ��Message��ָ��
    Message(const Message&);                   //�������캯��
    Message& operator=(const Message&);    //������ֵ�����
    ~Message();                                 //��������
    //�Ӹ���Folders���������/ɾ����Message
    void save(Folder&);
    void remove(Folder&);
    //void addFldr(Folder *f)  {folders.insert(f);}   //��Ӹ���Folder
    //void remFldr(Folder *f)  {folders.erase(f);}   //ɾ������Folder
private:
    std::string contents;                 //ʵ����Ϣ�ı�
    std::set<Folder*> folders;            //������Message��Folders
    //�������캯����������ֵ�����������������ʹ�õĹ��ߺ���
    //����Message��ӵ�ָ�������Folder��
    void add_to_Folders(const Message&);
    //��Folders�е�ÿ��Folder��ɾ����Message
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
    folders.insert(&f);     //������Folder��ӵ����ǵ�Folder�б���
    f.addMsg(this);          //����Message��ӵ�f��Message������
}

void Message::remove(Folder &f)
{
    folders.erase(&f);     //������Folder�����ǵ�Folder�б���ɾ��
    f.remMsg(this);         //����Message��f��Message������ɾ��
}

void Folder::add_to_Msgs(const Folder &f)
{
    for (auto msg : f.msgs)
        msg->save(*this);    //�����Folder��ӵ�����Message��
}

void Folder::remove_from_Msgs()
{
    //for (auto msg : f.msgs)
        //msgs.remove(*this);
        while (!msgs.empty())       //�����Folder��������Message��ɾ��
             (*msgs.begin())->remove(*this);
}

Folder::Folder(const Folder &f) : msgs(f.msgs)
{
    add_to_Msgs(f);          //��Folder��ӵ�������Message��folders��
}

Folder::~Folder()
{
    remove_from_Msgs();
}

Folder& Folder::operator=(const Folder &f)
{
    remove_from_Msgs();    //��ÿ��Message��ɾ����Folder
    msgs = f.msgs;         //���Ҳ�������󿽱�Message����
    add_to_Msgs(f);      //����Folder��ӵ�ÿ����Message��
    return *this;
}

//����Message��ӵ�ָ��m��Folder
void Message::add_to_Folders(const Message &m)
{
    for (auto pf : m.folders)    //��ÿ������m��Folder
        pf->addMsg(this);        //���Folder���һ��ָ��Message��ָ��
}

//�������캯��
Message::Message(const Message &m) : contents(m.contents), folders(m.folders)
{
    add_to_Folders(m);     //������Ϣ��ӵ�ָ��m��Folder��
}

//�Ӷ�Ӧ��Folder��ɾ����Message
void Message::remove_from_Folders()
{
    for (auto pf : folders)    //��folders��ÿ��ָ��
        pf->remMsg(this);        //�Ӹ�Folder��ɾ����Message
}

//��������
Message::~Message()
{
    remove_from_Folders();
}

//������ֵ�����
Message& Message::operator=(const Message &rhs)
{
    //ͨ����ɾ��ָ���ٲ��������������Ը�ֵ���
    remove_from_Folders();       //��������Folder
    contents = rhs.contents;     //��rhs������Ϣ����
    folders = rhs.folders;       //��rhs����Folderָ��
    add_to_Folders(rhs);         //����Message��ӵ���ЩFolder��
    return *this;
}

void print_m(const Message &m)
{
    std::cout << "��Ϣ���ݣ�" << m.contents << std::endl;
    std::cout << "����ĵ�ַ��" << &m << std::endl;
    std::cout << "�������Ϣ����ϢĿ¼�ĵ�ַ��";
    for (auto pm : m.folders)
        std::cout << pm << " ";
    std::cout << '\n' << std::endl;
}

void print_f(const Folder &f)
{
    std::cout << "��ϢĿ¼�ĵ�ַ��" << &f << std::endl;
    std::cout << "�������Ϣ���ݵĵ�ַ��";
    for (auto pf : f.msgs)
        std::cout << pf << " ";
    std::cout << '\n' << std::endl;
}

void swap(Message &lhs, Message &rhs)
{
    using std::swap;    //�ϸ���˵������Ҫ
    //��ÿ����Ϣ��ָ���ԭ������Folder��ɾ��
    for (auto f : lhs.folders)
        f->remMsg(&lhs);
    for (auto f : rhs.folders)
        f->remMsg(&rhs);
    //����contents��Folderָ��set
    swap(lhs.folders, rhs.folders);     //ʹ��swap(set&, set&)
    swap(lhs.contents, rhs.contents);   //swap(string&, string&)
    //��ÿ��Message��ָ����ӵ����ģ��£�Folder��
    for (auto f : lhs.folders)
        f->addMsg(&lhs);
    for (auto f : rhs.folders)
        f->addMsg(&rhs);
}

int main()
{
    Folder f1;          //������ϢĿ¼
    Message m1("����");
    m1.save(f1);
    Message m2(m1);    //������Ϣ��ͨ�����ÿ������캯���Ϳ�����ֵ�������֤����׼ȷ��
    Message m3;
    m3 = m1;

    print_m(m1);      //���������Ϣ����ϢĿ¼�ĵ�ַ
    print_m(m2);
    print_m(m3);

    Folder f2(f1);     //������ϢĿ¼��ͨ�����ÿ������캯���Ϳ�����ֵ�������֤����׼ȷ��
    Folder f3;
    f3 = f1;
    print_f(f1);      //�����ϢĿ¼�������Ϣ�ĵ�ַ
    print_f(f2);
    print_f(f3);

    print_m(m1);     //��Ϊ��ϢĿ¼�����˿�������ϢҲָ������������ϢĿ¼��
    print_m(m2);     //�ٴ����������Ϣ����ϢĿ¼�ĵ�ַ����֤�Ƿ񱣴���������ϢĿ¼�ĵ�ַ
    print_m(m3);


    return 0;
}

