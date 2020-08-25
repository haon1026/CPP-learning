//时间：2019年6月9日15:02:11
//修改上面的书店程序，将结果保存到一个文件中，将输出文件名作为第二个参数传递给main函数
//编译执行生成可执行的exe文件，然后通过CMD命令行执行，可直接把文件拖过去，省略手动输入文件路径

#include <iostream>
#include <fstream>
#include "Sales_data.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "请给出输入和输出文件名" << std::endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in)
    {
        std::cerr << "无法打开输入文件" << std::endl;
        return -1;
    }

    ofstream out(argv[2]);            //如果需要追加到给定文件的末尾，只需加上文件模式app
    if(!out)
    {
        std::cerr << "无法打开输出文件" << std::endl;
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
                print(out, total) << std::endl;
                total = trans;
            }
            print(out, total) << std::endl;
        }
    }
    else
    {
        std::cerr << "没有数据" << std::endl;
    }

    return 0;
}
