//ʱ�䣺2019��5��11��11:32:19
//decltypeָ�����ͺ�autoָ�����͵�����

#include <iostream>
#include <typeinfo>

int main()
{
    int a = 3;                   //a�Ƿǳ�������
    auto c1 = a;                 //c1������
    decltype(a) c2 = a;          //c2������
    decltype((a)) c3 = a;        //�������һ������,����c3��a������

    const int d = 5;             //d�ǳ�������
    auto f1 = d;                 //auto�Զ����Զ���const,����f1������
    decltype(d) f2 = d;          //decltype��������const������f2����������

    std::cout << typeid(c1).name() << std::endl;
    std::cout << typeid(c2).name() << std::endl;
    std::cout << typeid(c3).name() << std::endl;
    std::cout << typeid(f1).name() << std::endl;
    std::cout << typeid(f2).name() << std::endl;

    c1++;
    c2++;
    c3++;
    f1++;
    //f2++;        //���������޷�����

    std::cout << a << " " << c1 << " " << c2 << " " << c3 << " " << f1 << " " << f2 << std::endl;

    return 0;
}
