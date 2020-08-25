//ʱ�䣺2019��3��25��21:01:48
//������ӳ��� - ��������غ󣬲�����ĳ�Ա��������Ԫ��ʹ�û��ƻ���ķ�װ�������������������Ϊ��Ա����

#include <iostream>

class Complex
{
public:
    Complex();
    Complex(double r, double i);
    friend Complex operator+(Complex &c, Complex &d);
    void print();
private:
    double real;
    double imag;
};

Complex::Complex()
{
    real = 0;
    imag = 0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex operator+(Complex &c, Complex &d)  //��Ԫ����������Complex����д::
{
    return Complex(c.real+d.real, c.imag+d.imag);
}

void Complex::print()
{
    std::cout << "(" << real << "," << imag << "i)\n";
}

int main()
{
    Complex c1(1,2), c2(2,-5), c3;
    c3 = c1 + c2;

    std::cout << "c1 = ";
    c1.print();
    std::cout << "c2 = ";
    c2.print();
    std::cout << "c1 + c2 = ";
    c3.print();

    return 0;
}
