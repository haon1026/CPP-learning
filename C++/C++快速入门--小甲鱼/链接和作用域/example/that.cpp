#include "header.h"

unsigned short thatNum = 8;
bool printMe = true;

unsigned long returnFactorial(unsigned short num)
{
    unsigned long sum = 1;                         //在函数里定义的变量只存在于该函数的内部，根本没有任何链接

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
    }

    if (printMe)
    {
        return sum;
    }
    else
    {
        return 0;
    }
}
