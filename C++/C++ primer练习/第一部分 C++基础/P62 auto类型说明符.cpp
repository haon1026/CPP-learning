//时间：2019年5月9日15:46:30
//auto类型说明符：auto一般会忽略掉顶层const,底层const则会被保留下来

#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r;       //a是一个整数（r是i的别名，而i是一个整数）

    const int ci = i, &cr = ci;
    auto b = ci;      //b是一个整数（ci的顶层const特性被忽略掉了）
    auto c = cr;      //c是一个整数（cr是ci的别名，ci本身是一个顶层const）
    auto d = &i;      //d是一个整型指针（整数的地址就是指向整数的指针）
    auto e = &ci;     //e是指向整数常量的指针（对常量对象取地址是一种底层const）
    auto &g = ci;     //g是一个整型常量引用，绑定到ci

    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;

    a = 42;
    b = 42;
    c = 42;
    //d = 42;         //d是一个指针，赋值非法
    //e = 42;         //e是一个指针，赋值非法
    //g = 42;         //g是一个常量引用，赋值非法

    std::cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << std::endl;

    return 0;
}
