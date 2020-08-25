//时间：2019年6月13日10:49:17
//编写程序，从一个vector char初始化一个string

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<char> cvec = {'A', 'r', 'e', ' ','y', 'o', 'u', ' ', 'O', 'K'};
    std::string str;

    for (auto c : cvec)
        str += c;
    std::cout << str << std::endl;

    std::string str1(cvec.data(), cvec.size());     //vector提供了data成员函数，返回其内存空间的首地址，以此作为string构造函数的第一个参数，
    std::cout << str1 << std::endl;                 //vecor的size返回值作为第二个参数，即可获取vector<char>中的数据，将其看作一个字符数组来初始化string

    return 0;
}
