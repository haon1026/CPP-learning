//时间：2019年5月11日12:01:15
//定义和初始化string对象

#include <iostream>
#include <string>

int main()
{
    std::string s1;                //默认初始化
    std::string s2(s1);            //s2是s1的副本，                属于直接初始化
    std::string s3 = s1;           //等价于s3(s1),s3是s1的副本，   属于拷贝初始化
    std::string s4("Value");       //s4是字面值“Value”的副本，除了字面值最后的那个空字符外
    std::string s5 = "Value";      //等价于s5(Value)，s5是字面值“Value”的副本
    std::string s6(10, 'c');       //把s6初始化为由10个字符c组成的串，也可以写成 string s6 = string(10, 'c')


    std::cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << std::endl;

    return 0;
}
