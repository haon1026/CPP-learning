//时间：2019年6月24日13:19:28
//编写一个程序，连接两个字符串字面常量，将结果保存在一个动态分配char数组中。重写这个程序，连接两个标准库string对象

#include <iostream>
#include <cstring>

int main()
{
    const char *c1 = "welcome to China";
    const char *c2 = "nice to meet you";

    //字符串所需空间等于字符数+1
    char *r = new char[strlen(c1) + strlen(c2) + 1];
    strcpy(r, c1);    //拷贝第一个字符串常量
    strcat(r, c2);    //连接第二个字符串常量
    std::cout << r << std::endl;

    std::string s1 = "hello ";
    std::string s2 = "world";
    strcpy(r, (s1 + s2).c_str());   //拷贝连接结果
    std::cout << r << std::endl;

    //释放动态数组
    delete [] r;

    return 0;
}
