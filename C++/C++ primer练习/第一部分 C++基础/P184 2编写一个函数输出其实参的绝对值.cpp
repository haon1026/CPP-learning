//时间：2019年5月22日21:22:40
//编写一个函数输出其实参的绝对值

#include <iostream>
#include <cmath>

//第一个函数通过if-else语句计算绝对值
double fabs1(double i)
{
    if (i >= 0)
        return i;
    else
        return -i;
}
//第二个函数通过cmath头文件的abs函数计算绝对值
double fabs2(double i)
{
    return std::abs(i);
}

int main()
{
    std::cout << "请输入需要求绝对值的数：" << std::endl;
    int val;
    std::cin >> val;

    std::cout << val << "的绝对值为：" << fabs1(val) << std::endl;
    std::cout << val << "的绝对值为：" << fabs2(val) << std::endl;

    return 0;
}
