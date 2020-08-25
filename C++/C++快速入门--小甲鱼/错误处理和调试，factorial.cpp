//时间：2019年7月11日17:47:55
//错误处理和调试，factorial

#include <iostream>
#include <climits>    //存有算数类型的最大值最小值

class Factorial
{
public:
    Factorial(unsigned short num);
    unsigned long getFactorial();
    bool inRange();
private:
    unsigned short num;
};

Factorial::Factorial(unsigned short num)
{
    this->num = num;
}

unsigned long Factorial::getFactorial()
{
    unsigned long sum = 1;
    for (int i=1; i<=num; i++)
    {
        sum *= i;
    }
    return sum;
}

bool Factorial::inRange()
{
    unsigned long max = ULONG_MAX;

    for (int i=num; i>=1; --i)
    {
        max /= i;                    //max/(num的阶乘)
    }

    if (max < 1)
        return false;
    else
        return true;
}

int main()
{
    unsigned short num = 0;
    std::cout << "请输入一个整数:";
    std::cin >> num;

    Factorial fac(num);

    if (fac.inRange())
    {
        std::cout << num << "的阶乘值是：" << fac.getFactorial() << std::endl;
    }
    else
    {
        std::cout << "您输入的值过大" << std::endl;
    }


    return 0;
}
