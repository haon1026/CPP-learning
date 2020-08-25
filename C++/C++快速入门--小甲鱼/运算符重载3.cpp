//时间：2019年3月25日21:01:48
//复数相加程序 - 运算符重载后，不作类的成员函数，友元的使用会破坏类的封装，尽量将运算符函数作为成员函数

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

Complex operator+(Complex &c, Complex &d)  //友元函数不属于Complex，别写::
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
