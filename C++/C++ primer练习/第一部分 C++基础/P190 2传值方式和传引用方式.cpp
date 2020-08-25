//时间：2019年5月23日16:14:19
//传值方式和传引用方式

#include <iostream>

void a(int);
void b(int&);

int main()
{
    int s = 0, t =10;
    a(s);
    std::cout << s << std::endl;
    b(t);
    std::cout << t << std::endl;

    return 0;
}

void a(int i)
{
    ++i;
    std::cout << i << std::endl;
}

void b(int& j)
{
    ++j;
    std::cout << j << std::endl;
}
