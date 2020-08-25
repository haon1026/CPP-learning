//ʱ�䣺2019��6��15��15:03:54
//��д����ʹ��fill_n��һ�������е�intֵ������Ϊ0

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "�������ļ�ʧ�ܣ�" << std::endl;
        exit(-1);
    }

    std::vector<int> iv;
    int val;
    while (in >> val)
    {
        iv.push_back(val);
        std::cout << val << " ";
    }
    std::cout << std::endl;

    fill_n(iv.begin(), iv.size(), 0);
    for (auto i : iv)
        std::cout << i << " ";
    std::cout << std::endl;

    std::list<int> il;
    std::copy(iv.begin(), iv.end(), back_inserter(il));

    std::cout << std::equal(iv.begin(), iv.end(), il.begin()) << std::endl;
    for (auto i : il)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
