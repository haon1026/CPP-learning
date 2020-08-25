//ʱ�䣺2019��6��15��19:42:19
//P345 2��д��ΪcompareIsbn�ĺ������Ƚ�����Sales_data�����isbn()��Ա��
//ʹ�������������һ������Sales_data�����vector

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
        std::cout << "�������ļ�ʧ��" << std::endl;
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

