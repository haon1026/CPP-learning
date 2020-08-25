//时间：2019年7月9日12:10:37
//给定下面的类，解释每个print函数的机理

#include <iostream>

class base
{
public:
    base(std::string name) : basename(name) {}
    std::string name() {return basename;}
    virtual void print(std::ostream &os) {os << basename;}

private:
    std::string basename;
};

class derived : public base
{
public:
    derived(std::string dname, int ival) : base(dname), i(ival) {}    //继承于基类的数据成员需要通过基类的构造函数进行初始化
    void print(std::ostream &os) {base::print(os); os << " " << i;}   //每个类控制它自己的成员初始化过程
private:
    int i;
};

int main()
{
    base b("张三");
    std::cout << b.name() << std::endl;
    b.print(std::cout);
    std::cout << std::endl;

    derived d("李四", 100);
    std::cout << d.name() << std::endl;
    d.print(std::cout);

    return 0;
}
