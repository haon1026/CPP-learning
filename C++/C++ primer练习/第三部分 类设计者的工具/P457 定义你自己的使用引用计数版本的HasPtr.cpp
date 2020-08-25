//时间：2019年6月30日12:42:51
//定义你自己的使用引用计数版本的HasPtr

#include <iostream>
#include <string>

class HasPtr
{
public:
    //构造函数分配新的string和新的计数器，将计数器置为1
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
    //拷贝构造函数拷贝所有三个数据成员，并递增计数器
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {++*p.use;}
    HasPtr& operator=(const HasPtr&);      //拷贝赋值运算符
    HasPtr& operator=(const std::string&);  //赋予新string
    std::string operator*();     //解引用
    ~HasPtr();

private:
    std::string *ps;
    int i;
    std::size_t *use;    //用来记录有多少个对象共享*ps的成员
};

HasPtr::~HasPtr()
{
    if (--*use == 0)   //如果引用计数变为0
    {
        delete ps;    //释放string内存
        delete use;   //释放计数器内存
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;   //递增右侧运算对象的引用计数
    if (--*use == 0)    //然后递减本对象的引用计数
    {
        delete ps;    //如果没有其他用户
        delete use;   //释放本对象的分配的成员
    }
    ps = rhs.ps;     //将数据从rhs拷贝到被对象
    i = rhs.i;
    use = rhs.use;

    return *this;  //返回本对象
}

HasPtr& HasPtr::operator=(const std::string &rhs)
{
    *ps = rhs;
    return *this;
}

std::string HasPtr::operator*()
{
    return *ps;
}

int main()
{
    HasPtr h("hi mom!");
    HasPtr h2 = h;    //为分配新string,h2和h指向相同的string
    h = "hi dad!";    //h中ps指向string改变了,*h2也相应改变了
    std::cout << "h: " << *h << std::endl;
    std::cout << "h2: " << *h2 << std::endl;

    return 0;
}
