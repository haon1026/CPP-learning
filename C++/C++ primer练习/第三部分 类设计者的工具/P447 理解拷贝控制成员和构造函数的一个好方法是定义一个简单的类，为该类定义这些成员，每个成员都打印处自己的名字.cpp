//ʱ�䣺2019��6��28��17:09:48
//��⿽�����Ƴ�Ա�͹��캯����һ���÷����Ƕ���һ���򵥵��࣬Ϊ���ඨ����Щ��Ա��ÿ����Ա����ӡ���Լ�������

#include <iostream>
#include <vector>

struct X
{
    X() {std::cout << "���캯�� X()" << std::endl;}
    X(const X &) {std::cout << "�������캯�� X(const X &)" << std::endl;}
    X& operator=(const X &rhs) {std::cout << "������ֵ����� =(const x&)" << std::endl; return *this;}
    ~X() {std::cout << "�������� ~X()" << std::endl;}
};

void f1(X x)
{

}

void f2(X &x)
{

}

int main()
{
    std::cout << "�ֲ�������" << std::endl;
    X x;
    std::cout << std::endl;

    std::cout << "�����ò������ݣ�" << std::endl;
    f1(x);
    std::cout << std::endl;

    std::cout << "���ò������ݣ�" << std::endl;
    f2(x);
    std::cout << std::endl;

    std::cout << "��̬���䣺" << std::endl;
    X *px = new X;   //Ĭ�ϳ�ʼ��X
    std::cout << std::endl;

    std::cout << "��ӵ������У�" << std::endl;
    std::vector<X> vx;
    vx.push_back(x);
    std::cout << std::endl;

    std::cout << "�ͷŶ�̬�������" << std::endl;
    delete px;
    std::cout << std::endl;

    std::cout << "��ӳ�ʼ���͸�ֵ��" << std::endl;
    X y = x;
    y = x;
    std::cout << std::endl;

    std::cout << "�������" << std::endl;

    return 0;
}
