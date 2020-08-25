//时间：2019年6月1日14:54:37
//P233编写一个名为person的类，使其表示人员的姓名和住址,使用string对象存放这些元素
//P235添加读取和打印person对象的操作
//P266确定Person类是否有一些构造函数应该是explicit

#include <iostream>
#include <string>

class Person
{
private:
    std::string strName;        //姓名
    std::string strAddress;     //地址
public:
    Person() = default;             //构造函数的三种形式
    Person(const std::string &name, const std::string &add)
    {
        strName = name;
        strAddress = add;
    }
     explicit Person(std::istream &is) {read(is, *this);}

/*
    printf(const Person &per)  //const Person &per         //举例，如果不加explicit,可能的隐式类类型转换
    {
        std::cout << per.strName << " " << per.strAddress << std::endl;
    }
*/

    std::string getName() const { return strName; }         //返回姓名
    std::string getAddress() const { return strAddress; }   //返回地址

    friend std::istream &read(std::istream &is, Person &per);        //类的非成员函数声明成友元函数才可访问类的私有成员
    friend std::ostream &print(std::ostream &os, const Person &per);
};

std::istream &read(std::istream &is, Person &per)          //读入姓名地址
{
    is >> per.strName >> per.strAddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &per)   //输出姓名地址
{
    os << per.getName() << " " << per.getAddress();
    return os;
}

int main()
{
    Person per1;
    Person per2("张三", "中国");
    Person per3(std::cin);

    print(std::cout, per1) << std::endl;
    print(std::cout, per2) << std::endl;
    print(std::cout, per3) << std::endl;

/*
    std::cout << std::endl;     //如果不加explicit,可能的隐式类类型转换
    per1.printf(std::cin);
*/

    return 0;
}


