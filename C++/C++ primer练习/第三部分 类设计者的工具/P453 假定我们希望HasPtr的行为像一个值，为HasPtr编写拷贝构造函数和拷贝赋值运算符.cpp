//时间：2019年6月29日16:55:26
//假定我们希望HasPtr的行为像一个值，为HasPtr编写拷贝构造函数和拷贝赋值运算符

#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &h) {ps = new std::string(*h.ps); i = h.i;}   //拷贝构造函数
    HasPtr& operator=(const HasPtr&);         //拷贝赋值运算符,如果等号右边是类
    HasPtr& operator=(const std::string&);     //拷贝赋值运算符,如果等号右边是string,赋予新string
    std::string& operator*();      //解引用类获取string
    ~HasPtr() {delete ps;}   //释放string内存

private:
    std::string *ps;
    int i;
};

inline HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto newps = new std::string(*rhs.ps);   //拷贝指针指向的对象
    delete ps;      //销毁原string
    ps = newps;     //指向新string
    i = rhs.i;       //使用内置的int赋值

    return *this;   //返回一个此对象的引用
}

HasPtr& HasPtr::operator=(const std::string &rhs)
{
    *ps = rhs;
    return *this;
}

std::string& HasPtr::operator*()
{
    return *ps;
}

int main()
{
    HasPtr h("hi mom!");
    HasPtr h2(h);      //行为类值，h2,h3和h指向不同的string
    HasPtr h3 = h;
    h2 = "hi dad!";
    h3 = "hi son!";

    std::cout << "h: " << *h << std::endl;
    std::cout << "h2: " << *h2 << std::endl;
    std::cout << "h3: " << *h3 << std::endl;

    return 0;
}
