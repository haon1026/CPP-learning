//时间：2019年5月30日15:09:37
//函数指针：编写函数声明，令其接受两个int形参返回类型int，声明vector对象，令其元素是指向该函数的指针
//编写四个函数，分别对两个int值执行加，减，乘，除运算，vector对象中保存这些函数的指针
//输出vector对象中每个元素并输出其结果
#include <iostream>
#include <vector>

int func1(int a, int b)
{
    return a + b;
}

int func2(int a, int b)
{
    return a - b;
}

int func3(int a, int b)
{
    return a * b;
}

int func4(int a, int b)
{
    return a / b;
}
//
void Compute(int a, int b, int(*p)(int, int))
{
    std::cout << p(a, b) << std::endl;
}

int main()
{
    int i = 5, j = 10;
    int (*p1)(int, int) = func1;
    int (*p2)(int, int) = func2;
    int (*p3)(int, int) = func3;
    int (*p4)(int, int) = func4;
    //decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;

    std::vector<decltype(func1) *> v = {p1, p2, p3, p4};    //遍历vector中的每个元素，一次调用四则运算函数
    for(auto p : v)
        Compute(i, j, p);      //p是函数指针，但各个函数还需要有输入
        //std::cout << p(i, j) << std::endl; //直接输出也行
    return 0;
}
