//ʱ�䣺2019��5��22��21:22:40
//��дһ�����������ʵ�εľ���ֵ

#include <iostream>
#include <cmath>

//��һ������ͨ��if-else���������ֵ
double fabs1(double i)
{
    if (i >= 0)
        return i;
    else
        return -i;
}
//�ڶ�������ͨ��cmathͷ�ļ���abs�����������ֵ
double fabs2(double i)
{
    return std::abs(i);
}

int main()
{
    std::cout << "��������Ҫ�����ֵ������" << std::endl;
    int val;
    std::cin >> val;

    std::cout << val << "�ľ���ֵΪ��" << fabs1(val) << std::endl;
    std::cout << val << "�ľ���ֵΪ��" << fabs2(val) << std::endl;

    return 0;
}
