//时间：2019年6月22日13:32:42
//编写函数，返回一个动态分配的int的vector。将此vector传递给另一个函数，这个函数读取标准输入，将读入的值保存在vector元素中，再将vector传递给另一个函数，打印读入的值

#include <iostream>
#include <vector>
#include <new>

std::vector<int> *new_vector(void)
{
    return new (std::nothrow) std::vector<int>;
}

void read_ints(std::vector<int> *pv)
{
    int i;
    while (std::cin >> i)
        pv->push_back(i);
}

void print_ints(std::vector<int> *pv)
{
    for (const auto &c : *pv)
        std::cout << c << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> *pv = new_vector();
    if (!pv)
    {
        std::cout << "内存不足！" << std::endl;
        return -1;
    }
    read_ints(pv);
    print_ints(pv);
    delete pv;
    pv = nullptr;

    return 0;
}
