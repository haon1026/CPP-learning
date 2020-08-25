//时间：2019年6月8日17:13:22
//重写书店程序，从一个文件中读取交易记录，将文件名作为一个参数传递给main
//编译执行生成可执行的exe文件，然后通过CMD命令行执行，可直接把文件拖过去，省略手动输入文件路径

#include <iostream>
#include <fstream>
#include "Sales_data.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "请输出文件名" << std::endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in)
    {
        std::cerr << "无法打开输入文件" << std::endl;
        return -1;
    }

    Sales_data total;
    if (read(in, total))
    {
        Sales_data trans;
        while (read(in, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
            print(std::cout, total) << std::endl;
        }
    }
    else
    {
        std::cerr << "没有数据" << std::endl;
    }

    return 0;
}
