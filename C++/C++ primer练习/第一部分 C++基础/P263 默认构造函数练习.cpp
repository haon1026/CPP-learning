//时间：2019年6月5日15:13:02
//默认构造函数练习：假定有一个名为Nodefault的类，它有一个接受int的构造函数，但是没有
//默认构造函数。定义C，C有一个Nodafault类型的成员，定义C的默认构造函数

//因为Nodefault仅有的一个构造函数并不是默认构造函数，所以在类C中，不能使用无参数的默认构造函数，
//那样的话，类C的Nodefault成员无法正确初始化

#include <iostream>

class Nodefault
{
public:
    Nodefault(int i) {val = i;}
    int val;
};

class C
{
public:
    Nodefault nd;
    //必须显式调用Nodefault的带参构造函数初始化nd
    C(int i = 0) : nd(i) {}      //默认实参，对象可不带参数，默认为0，也可带一个用户设置的参数
};

int main()
{
    C c1;    //使用了类型C的默认构造函数
    C c2(3);
    std::cout << c1.nd.val << " " << c2.nd.val << std::endl;
    return 0;
}
