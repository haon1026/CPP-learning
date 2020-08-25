//时间：2019年5月15日11:37:34
//利用指针将数组中的元素置为0

#include <iostream>

int main()
{
    const int sz = 10;
    int a[sz];

    for (int i = 0; i < sz; ++i)
        a[i] = i;
    std::cout << "初始状态下的数组的内容是：";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;

    int *p = std::begin(a);           //令p指向数组首元素
    while (p != std::end(a))
    {
        *p = 0;
        ++p;
    }
    std::cout << "修改后的数组内容是：";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;


    return 0;
}
