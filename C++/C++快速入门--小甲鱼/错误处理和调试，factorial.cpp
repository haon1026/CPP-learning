//ʱ�䣺2019��7��11��17:47:55
//������͵��ԣ�factorial

#include <iostream>
#include <climits>    //�����������͵����ֵ��Сֵ

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
        max /= i;                    //max/(num�Ľ׳�)
    }

    if (max < 1)
        return false;
    else
        return true;
}

int main()
{
    unsigned short num = 0;
    std::cout << "������һ������:";
    std::cin >> num;

    Factorial fac(num);

    if (fac.inRange())
    {
        std::cout << num << "�Ľ׳�ֵ�ǣ�" << fac.getFactorial() << std::endl;
    }
    else
    {
        std::cout << "�������ֵ����" << std::endl;
    }


    return 0;
}
