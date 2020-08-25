//时间：2019年5月29日11:27:53
//编写一个函数的声明，使其返回数组的引用并且该数组包含10个string对象

#include <iostream>
#include <string>

std::string (&fun(std::string (&arry)[10]))[10]       //1.直接编写返回数组引用的函数 string (&fun())[10];
{                                                     //2.使用类型别名 typedef string arr[10];  arr& fun();
    return arry;                                      //3.使用尾置返回类型 auto fun() -> string(&)[10]
}                                                     //4.使用decltype关键字 string str[10]; decltype(str) &func();

int main()
{
    std::string a[10] = {"0","1","2","3","4","5","6","7","8","9"};
    for(auto c : fun(a))
        std::cout << c << std::endl;
    return 0;
}
