//ʱ�䣺2019��5��25��19:28:36
//��дһ�����������佻������intָ��

#include <iostream>

//ִ�к�Ľ�����ú����Ȳ�����ָ�룬Ҳ������ָ����ָ������
void SwapPointer1(int * p, int * q)
{
    int *temp = p;
    p = q;
    q = temp;
}

//ִ�к�Ľ�����ú�������ָ����ָ������
void SwapPointer2(int * p, int * q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

//ִ�к�Ľ�����ú�������ָ�뱾���ֵ��������ָ����ָ���ڴ��ַ
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
    std::cout << "����ǰ��" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    SwapPointer1(p, q);
    std::cout << "������" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    std::cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << std::endl;

    a = 5, b = 10;
    p = &a, q = &b;
    std::cout << "����ǰ��" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    std::cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << std::endl;
    SwapPointer2(p, q);
    std::cout << "������" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    std::cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << std::endl;

    a = 5, b = 10;
    p = &a, q = &b;
    std::cout << "����ǰ��" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    std::cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << std::endl;
    SwapPointer3(p, q);
    std::cout << "������" << std::endl;
    std::cout << "p��ֵ�ǣ�" << p << ",q��ֵ�ǣ�" << q << std::endl;
    std::cout << "p��ָ��ֵ�ǣ�" << *p << ",q��ָ��ֵ�ǣ�" << *q << std::endl;

    return 0;
}
