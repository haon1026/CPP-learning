//时间：2019年6月15日19:42:19
//P345 2编写名为compareIsbn的函数，比较两个Sales_data对象的isbn()成员。
//使用这个函数排序一个保存Sales_data对象的vector

#include <iostream>
#include <Sales_data.h>
#include <vector>
#include <algorithm>
#include <fstream>

inline bool compareISBN(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "打开输入文件失败" << std::endl;
        exit(1);
    }

    std::vector<Sales_data> sdv;
    Sales_data sd;
    while(in >> sd)
        sdv.push_back(sd);

    sort(sdv.begin(), sdv.end(), compareISBN);

    for (const auto &s : sdv)
    {
        print(std::cout, s);
        std::cout << std::endl;
    }


    return 0;
}

