//时间：2019年5月25日11:36:30
//编写一个函数，令其接受两个参数，一个是int型的数，另一个是int指针，函数比较int的值和指针所指的值，返回较大的那个

#include <iostream>
#include <ctime>
#include <cstdlib>

int compare(const int val, const int *p)
{
    return (val > *p) ? val : *p;
}

int main()
{
    std::cout << "请输入一个数：" << std::endl;
    int j;
    std::cin >> j;

    int a[10];
    srand( (unsigned)time(NULL));
    for (auto &c : a)
        c = rand() % 100;
    std::cout << "数组的全部元素是";
    for (auto c : a)
        std::cout << c << " ";
    std::cout << std::endl;

    std::cout << "输入的数与数组首元素中较大的是：" << compare(j, a) << std::endl;


    return 0;
}
