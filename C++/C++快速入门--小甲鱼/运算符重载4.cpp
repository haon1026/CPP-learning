//时间：2019年3月25日22:09:30
//重载运算符实现有理数的加减乘除

#include <iostream>
#include <string>
#include <stdlib.h>

class Rational
{
public:
    Rational(int num, int denom);   // num = 分子   denom = 分母

    Rational operator+(Rational rhs);   //right hand side
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);

    void print();

private:
    void normalize();   //负责对分数进行简化处理

    int numerator;   //分子
    int denominator;   //分母
};

Rational::Rational(int num, int denom)
{
    numerator = num;
    denominator = denom;

    normalize();
}

//1.只允许分子为负数，如果分母为负数则把负数挪到分子
//2.利用欧几里得算法（辗转求余原理）将分数简化
void Rational::normalize()
{
    //确保分母为正
    if( denominator < 0 )
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    //欧几里得算法
    int a = abs(numerator);
    int b = abs(denominator);

    while( b>0 )
    {
        int t = a % b;
        a = b;
        b = t;
    }

    numerator /= a;
    denominator /= a;
}

Rational Rational::operator+(Rational rhs)
{
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;

    int e = a*d + c*b;
    int f = b*d;

    return Rational(e, f);
}

Rational Rational::operator-(Rational rhs)
{
    rhs.numerator = -rhs.numerator;

    return operator+(rhs);
}

Rational Rational::operator*(Rational rhs)
{
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;

    int e = a*c;
    int f = b*d;

    return Rational(e, f);
}

Rational Rational::operator/(Rational rhs)
{
    int t = rhs.numerator;
    rhs.numerator = rhs.denominator;
    rhs.denominator = t;

    return operator*(rhs);
}

void Rational::print()
{
    if( numerator % denominator == 0 )
        std::cout << numerator / denominator;
    else
        std::cout << numerator << "/" << denominator;
}

int main()
{
    Rational f1(2, 16);
    Rational f2(7, 8);

    //测试有理数加法运算
    Rational res = f1 + f2;
    f1.print();
    std::cout << " + ";
    f2.print();
    std::cout << " = ";
    res.print();
    std::cout << "\n";

    //测试有理数减法运算
    res = f1 - f2;
    f1.print();
    std::cout << " - ";
    f2.print();
    std::cout << " = ";
    res.print();
    std::cout << "\n";

    //测试有理数乘法运算
    res = f1 * f2;
    f1.print();
    std::cout << " * ";
    f2.print();
    std::cout << " = ";
    res.print();
    std::cout << "\n";

    //测试有理数除法运算
    res = f1 / f2;
    f1.print();
    std::cout << " / ";
    f2.print();
    std::cout << " = ";
    res.print();
    std::cout << "\n";

    return 0;
}
