//时间：2019年5月11日11:32:19
//decltype指定类型和auto指定类型的区别

#include <iostream>
#include <typeinfo>

int main()
{
    int a = 3;                   //a是非常量整数
    auto c1 = a;                 //c1是整数
    decltype(a) c2 = a;          //c2是整数
    decltype((a)) c3 = a;        //额外加了一对括号,所以c3是a的引用

    const int d = 5;             //d是常量整数
    auto f1 = d;                 //auto自动忽略顶层const,所以f1是整数
    decltype(d) f2 = d;          //decltype保留顶层const，所以f2是整数常量

    std::cout << typeid(c1).name() << std::endl;
    std::cout << typeid(c2).name() << std::endl;
    std::cout << typeid(c3).name() << std::endl;
    std::cout << typeid(f1).name() << std::endl;
    std::cout << typeid(f2).name() << std::endl;

    c1++;
    c2++;
    c3++;
    f1++;
    //f2++;        //常量整数无法自增

    std::cout << a << " " << c1 << " " << c2 << " " << c3 << " " << f1 << " " << f2 << std::endl;

    return 0;
}
