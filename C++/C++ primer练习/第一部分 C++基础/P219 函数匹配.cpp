//ʱ�䣺2019��5��30��13:08:48
//����ƥ�䣺��ѡ���������к�����Ѱ�����ƥ��

#include <iostream>

void f()
{
    std::cout << "�ú����������" << std::endl;
}

void f(int)
{
    std::cout << "�ú�����һ�����Ͳ���" << std::endl;
}

void f(int, int)
{
    std::cout << "�ú������������Ͳ���" << std::endl;
}

void f(double a, double b = 3.14)
{
    std::cout << "�ú���������˫���ȸ����Ͳ���" << std::endl;
}

int main()
{
    //f(2.56, 42);       //�õ��þ��ж����ԣ����������ܾ�����
    f(42);
    f(42,0);
    f(2.56, 3.14);

    return 0;
}
