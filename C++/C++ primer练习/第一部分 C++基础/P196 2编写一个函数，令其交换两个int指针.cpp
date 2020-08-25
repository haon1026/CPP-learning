//时间：2019年5月25日19:28:36
//编写一个函数，令其交换两个int指针

#include <iostream>

//执行后的结果：该函数既不交换指针，也不交换指针所指的内容
void SwapPointer1(int * p, int * q)
{
    int *temp = p;
    p = q;
    q = temp;
}

//执行后的结果：该函数交换指针所指的内容
void SwapPointer2(int * p, int * q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

//执行后的结果：该函数交换指针本身的值，即交换指针所指的内存地址
void SwapPointer3(int *&p, int *&q)
{
    int *temp = p;
    p = q;
    q = temp;
}

int main()
{
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    std::cout << "交换前：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    SwapPointer1(p, q);
    std::cout << "交换后：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    std::cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << std::endl;

    a = 5, b = 10;
    p = &a, q = &b;
    std::cout << "交换前：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    std::cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << std::endl;
    SwapPointer2(p, q);
    std::cout << "交换后：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    std::cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << std::endl;

    a = 5, b = 10;
    p = &a, q = &b;
    std::cout << "交换前：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    std::cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << std::endl;
    SwapPointer3(p, q);
    std::cout << "交换后：" << std::endl;
    std::cout << "p的值是：" << p << ",q的值是：" << q << std::endl;
    std::cout << "p所指的值是：" << *p << ",q所指的值是：" << *q << std::endl;

    return 0;
}
