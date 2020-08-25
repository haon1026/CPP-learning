//时间：2019年6月1日22:25:46
//P233编写一个名为person的类，使其表示人员的姓名和住址,使用string对象存放这些元素


#include <iostream>
#include <string>

class Person
{
private:
    std::string strName;        //姓名
    std::string strAddress;     //地址
public:
    std::string getName() const { return strName; }         //返回姓名
    std::string getAddress() const { return strAddress; }   //返回地址
};



