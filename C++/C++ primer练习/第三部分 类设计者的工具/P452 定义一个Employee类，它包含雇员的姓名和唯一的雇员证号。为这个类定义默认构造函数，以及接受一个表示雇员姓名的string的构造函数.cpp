//时间：2019年6月29日15:53:39
//定义一个Employee类，它包含雇员的姓名和唯一的雇员证号。为这个类定义默认构造函数，以及接受一个表示雇员姓名的string的构造函数.
//每个构造函数应该通过递增一个static数据成员来生成一个唯一的证号

#include <iostream>
#include <string>

class Employee
{
public:
    Employee() {std::cout << "调用默认构造函数" << std::endl; number = st++;}
    Employee(const std::string &s) {std::cout << "调用构造函数" << std::endl; name = s; number = st++;}
    //为13.19定义的拷贝构造函数和拷贝赋值运算符
    Employee(const Employee& emp) {std::cout << "调用拷贝构造函数" << std::endl; name = emp.name; number = st++;}
    Employee& operator=(const Employee &rhs) {std::cout << "调用拷贝赋值运算符" << std::endl; name = rhs.name;  return *this;}

    const std::string &get_name() {return name;}
    int get_number() {return number;}

private:
    static int st;
    std::string name;
    int number;
};

int Employee::st = 0;

void f(Employee &s)
{
    std::cout << s.get_name() << ":" << s.get_number() << std::endl;
}

int main()
{
    Employee a("赵"), b = a, c;    //定义时的赋值是调用的拷贝构造函数
    f(c);
    c = b;        //非定义时的赋值调用的时拷贝赋值运算符
    f(a);
    f(b);
    f(c);
}
