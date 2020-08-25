//时间：2019年5月23日11:15:53
//编写一个函数，使用指针形参交换两个整数的值

#include <iostream>

//在函数体内部通过解引用操作改变指针的内容
void mySwap(int *p, int *q)
{
    int t;
    t = *q;
    *q = *p;
    *p = t;

    return;
}

int main()
{
    int a, b;
    std::cout << "请输入要交换的两个整数a和b的值：" << std::endl;
    std::cin >> a >> b;
    std::cout << "交换前：a = " << a << ", b = " << b << std::endl;
    mySwap(&a, &b);

    std::cout << "交换后：a = " << a << ", b = " << b << std::endl;

    return 0;
}
