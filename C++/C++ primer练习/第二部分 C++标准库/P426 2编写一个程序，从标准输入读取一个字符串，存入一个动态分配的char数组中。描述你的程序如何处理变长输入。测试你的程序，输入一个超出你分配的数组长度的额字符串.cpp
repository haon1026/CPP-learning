//时间：2019年6月24日13:46:35
//编写一个程序，从标准输入读取一个字符串，存入一个动态分配的char数组中，描述你的程序如何处理变长输入。
//测试你的程序，输入一个超出你分配的数组长度的额字符串

#include <iostream>
#include <cstring>

int main()
{
    char c;
    char *r = new char[20];
    int i = 0;

    while (std::cin.get(c))
    {
        if (isspace(c))    //空格符，制表符等空白符  包括回车符
            break;
        r[i++] = c;        //存入动态数组
        if (i == 20)       //已读入19个字符
        {
            std::cout << "达到数组容量上限" << std::endl;
            break;
        }
    }

    r[i] = 0;
    std::cout << r << std::endl;

    //释放动态数组
    delete [] r;

    return 0;
}
