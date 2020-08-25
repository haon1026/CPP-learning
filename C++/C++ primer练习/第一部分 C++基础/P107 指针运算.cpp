//时间：2019年5月14日17:54:57
//指针运算

#include <iostream>

int main()
{
    constexpr size_t sz = 5;   //constexpr常量表达式，size_t是无符号类型

    int a[sz] = {1,2,3,4,5};

    int *ip = a;
    int *ip2 = ip + 4;
    int *p = a + sz;
    std::cout << *ip << " " << *ip2 << " " << *p << std::endl;
    std::cout << ip << " " << ip2 << " " << p << std::endl;
    std::cout << &a[0] << " " << &a[1] << " " << &a[2] << " " << &a[3] << " " << &a[4] << std::endl;

    auto n = std::end(a) - std::begin(a);   //n=5，也就是a中元素的数量，两个指针相减的结果的类型：ptrdiff_t标准库类型，差值可能为负，是带符号类型
    std::cout << n << std::endl;

    int *b = a, *e = a + sz;
    while (b < e)                 //只要两个指针指向同一个数组的元素或者指向该数组尾元素的下一位置，就能利用关系运算符进行比较
    {
        std::cout << *b << " ";
        ++b;
    }
    std::cout << std::endl;

    return 0;
}
