//ʱ�䣺2019��5��23��16:14:19
//��ֵ��ʽ�ʹ����÷�ʽ

#include <iostream>

void a(int);
void b(int&);

int main()
{
    int s = 0, t =10;
    a(s);
    std::cout << s << std::endl;
    b(t);
    std::cout << t << std::endl;

    return 0;
}

void a(int i)
{
    ++i;
    std::cout << i << std::endl;
}

void b(int& j)
{
    ++j;
    std::cout << j << std::endl;
}
