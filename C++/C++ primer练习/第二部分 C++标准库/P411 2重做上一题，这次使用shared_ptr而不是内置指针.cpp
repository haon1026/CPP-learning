//时间：2019年6月22日15:53:11
//编写函数，返回一个动态分配的int的vector。将此vector传递给另一个函数，这个函数读取标准输入，将读入的值保存在vector元素中，再将vector传递给另一个函数，打印读入的值
//重做上一题，这次使用shared_ptr而不是内置指针

#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> new_vector(void)
{
    return std::make_shared<std::vector<int>>();
}

void read_ints(std::shared_ptr<std::vector<int>> pv)
{
    int i;
    while (std::cin >> i)
        pv->push_back(i);
}

void print_ints(std::shared_ptr<std::vector<int>> pv)
{
    for (const auto &c : *pv)
        std::cout << c << " ";
    std::cout << std::endl;
}

int main()
{
    std::shared_ptr<std::vector<int>> pv = new_vector();
    read_ints(pv);
    print_ints(pv);

    return 0;
}
