//时间：2019年5月25日19:59:45
//编写print函数，依次调用每个函数使其输入下面定义的i和j

#include <iostream>

//参数是常量整型指针
void print1(const int *p)
{
    std::cout << *p << std::endl;
}

//参数有两个，分别是常量整型指针和数组的容量
void print2(const int *p, const int sz)
{
    int i = 0;
    while (i != sz)
    {
        std::cout << *p++ << std::endl;
        ++i;
    }
}

//
void print3(const int *b, const int *e)
{
    for (auto q = b; q != e; ++q)
        std::cout << *q << std::endl;
}

int main()
{
    int i = 0, j[2] = {0, 1};
    print1(&i);
    std::cout << "**********" << std::endl;

    print1(j);
    std::cout << "**********" << std::endl;

    print2(&i, 1);
    std::cout << "**********" << std::endl;

    print2(j, sizeof(j) / sizeof(*j));
    std::cout << "**********" << std::endl;

    auto b = std::begin(j);
    auto e = std::end(j);
    print3(b, e);

    return 0;
}

