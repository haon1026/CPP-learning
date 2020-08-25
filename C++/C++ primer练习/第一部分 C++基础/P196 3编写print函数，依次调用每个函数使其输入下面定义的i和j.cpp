//ʱ�䣺2019��5��25��19:59:45
//��дprint���������ε���ÿ������ʹ���������涨���i��j

#include <iostream>

//�����ǳ�������ָ��
void print1(const int *p)
{
    std::cout << *p << std::endl;
}

//�������������ֱ��ǳ�������ָ������������
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

