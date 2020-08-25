//时间：2019年6月30日16:11:11
//为你的类值版本的HasPtr编写swap函数，并测试它，为你的swap函数添加一个打印语句，指出函数什么时候执行

#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new std::string (*p.ps)), i(p.i) {}
    HasPtr& operator=(const HasPtr&);
    HasPtr& operator=(const std::string s) {*ps = s; return *this;}
    std::string& operator*() {return *ps;}
    ~HasPtr() {delete ps;}

    friend void swap(HasPtr&, HasPtr&);

private:
    std::string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    auto newps = new std::string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;

    return *this;
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    std::cout << "交换 " << *lhs.ps << "和" << *rhs.ps << std::endl;
    using std::swap;   //可不写
    swap (lhs.ps, rhs.ps);    //交换指针，而不是string数据
    swap (lhs.i, rhs.i);      //交换int成员
}


int main()
{
    HasPtr h1("张三");
    HasPtr h2(h1);     //行为类值，h2，h3和h指向不同string
    HasPtr h3 = h1;
    h2 = "李四";
    h3 = "王五";
    swap(h1, h2);
    std::cout << "h1: " << *h1 << std::endl;
    std::cout << "h2: " << *h2 << std::endl;
    std::cout << "h3: " << *h3 << std::endl;
}

//如果swap函数不写成类的friend函数，直接swap(h1,h2会报错)，因为没加类名::,
//如果定义成friend函数则可直接调用swap，相当于一个外部函数
//std::swap也可调用，不过会对string进行不必要的拷贝
