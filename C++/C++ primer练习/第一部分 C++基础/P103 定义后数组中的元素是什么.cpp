//时间：2019年5月14日15:58:33
//数组中的元素的值是什么

#include <iostream>
#include <string>

//定义在全局作用域中的数组
std::string sa[10];      //空串
int ia[10];              //10个0

int main()
{
    //定义在局部作用域中的数组
    std::string sa2[10];       //空串
    int ia2[10];               //10个未知数

    for (auto c : sa)
        std::cout << c << " ";
    std::cout << std::endl;

    for (auto c : ia)
        std::cout << c << " ";
    std::cout << std::endl;

    for (auto c : sa2)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
