#include "header.h"

unsigned short thatNum = 8;
bool printMe = true;

unsigned long returnFactorial(unsigned short num)
{
    unsigned long sum = 1;                         //�ں����ﶨ��ı���ֻ�����ڸú������ڲ�������û���κ�����

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
