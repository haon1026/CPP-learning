//时间：2019年5月28日13:27:07
//编写一个程序，使其接受本节所示的选项，输出传递给main函数的实参的内容

#include <iostream>

int main(int argc, char **argv)
{
    for (int i = 0; i != argc; ++i)
        std::cout << "argc[" << i << "]:" << argv[i] << std::endl;

    return 0;
}
