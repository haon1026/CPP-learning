//ʱ�䣺2019��5��23��11:15:53
//��дһ��������ʹ��ָ���βν�������������ֵ

#include <iostream>

//�ں������ڲ�ͨ�������ò����ı�ָ�������
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
    std::cout << "������Ҫ��������������a��b��ֵ��" << std::endl;
    std::cin >> a >> b;
    std::cout << "����ǰ��a = " << a << ", b = " << b << std::endl;
    mySwap(&a, &b);

    std::cout << "������a = " << a << ", b = " << b << std::endl;

    return 0;
}
