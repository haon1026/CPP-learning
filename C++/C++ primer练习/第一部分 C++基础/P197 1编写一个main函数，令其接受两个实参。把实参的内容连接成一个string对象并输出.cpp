//时间：2019年5月28日12:03:54
//编写一个main函数，令其接受两个实参，把实参的内容连接成一个string对象并输出

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;
    for (int i = 0; i != argc; ++i)
        str += argv[i];
    std::cout << str << std::endl;

    return 0;
}
