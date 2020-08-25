//时间：2019年5月30日13:08:48
//函数匹配：候选函数，可行函数，寻找最佳匹配

#include <iostream>

void f()
{
    std::cout << "该函数无须参数" << std::endl;
}

void f(int)
{
    std::cout << "该函数有一个整型参数" << std::endl;
}

void f(int, int)
{
    std::cout << "该函数有两个整型参数" << std::endl;
}

void f(double a, double b = 3.14)
{
    std::cout << "该函数有两个双精度浮点型参数" << std::endl;
}

int main()
{
    //f(2.56, 42);       //该调用具有二义性，编译器将拒绝请求
    f(42);
    f(42,0);
    f(2.56, 3.14);

    return 0;
}
