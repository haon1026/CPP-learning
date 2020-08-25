//时间：2019年6月24日11:46:06
//编写程序，逐行读入一个输入文件，将内容存入一个StrBlob中，用一个StrBlobPtr打印处StrBlob中的每个元素

#include <iostream>
#include <fstream>
#include "my_StrBlob2.h"

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "输入文件打开错误！" << std::endl;
        return -1;
    }

    StrBlob b1;
    std::string s;
    while (getline(in, s))
    {
        b1.push_back(s);
    }

    for (auto iter = b1.begin(); neq(iter, b1.end()); iter.incr())
    {
        std::cout << iter.deref() << std::endl;
    }

    return 0;
}
