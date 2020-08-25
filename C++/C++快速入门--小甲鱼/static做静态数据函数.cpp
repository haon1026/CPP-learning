//static做静态数据函数

#include<iostream>
using namespace std;

class Myclass
{
private:
    int a , b , c;
    static int sum;  //声明静态数据成员
public:
    Myclass(int a , int b , int c);
    static void GetSum();  //声明静态成员函数
};

int Myclass::sum = 0;   //定义并初始化静态数据成员

Myclass::Myclass(int a , int b , int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
    sum += a+b+c;    //非静态成员函数可以访问静态数据成员
}
void Myclass::GetSum()    //静态成员函数的实现
{
    //cout<<a<<endl;    //错误代码，a是非静态数据成员
    cout<<"sum="<<sum<<endl;
}

int main(void)
{
    Myclass M(1 , 2 , 3);
    M.GetSum();
    Myclass N(4 , 5 , 6);
    N.GetSum();
    Myclass::GetSum();
    return 0;
}


/*
关于静态成员函数，可以总结为以下几点：

◦出现在类体外的函数定义不能指定关键字static；
◦静态成员之间可以相互访问，包括静态成员函数访问静态数据成员和访问静态成员函数；
◦非静态成员函数可以任意地访问静态成员函数和静态数据成员；
◦静态成员函数不能访问非静态成员函数和非静态数据成员；
◦由于没有this指针的额外开销，因此静态成员函数与类的全局函数相比速度上会有少许的增长；
◦调用静态成员函数，可以用成员访问操作符(.)和(->)为一个类的对象或指向类对象的指针调用静态成员函数，也可以直接使用如下格式：
＜类名＞::＜静态成员函数名＞（＜参数表＞）
调用类的静态成员函数。

*/
