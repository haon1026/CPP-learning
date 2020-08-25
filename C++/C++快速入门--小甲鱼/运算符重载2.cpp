//ʱ�䣺2019��3��24��23:45:57
//������ӳ��� - ��������غ���Ϊ��ĳ�Ա����

#include <iostream>

class Complex
{
public:
    Complex();
    Complex(double r, double i);
    Complex operator+(Complex &d);
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

Complex Complex::operator+(Complex &d)
{
    Complex c;
    c.real = real + d.real;
    c.imag = imag + d.imag;
    return C;                    //���Ը������д��return Complex(real+d.real, imag+d.imag);  //return Complex(this->real+d.real,this->imag+d.imag) //return Complex(c1.real+d.real, c1.imag+d.imag)
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
