//时间：2019年7月10日12:05:54
//假设550页的D1类需要覆盖它继承而来的fcn函数，你应该如何对其进行修改？如果修改之后fcn匹配了Base中的定义，则该节的那些调用语句该如何解析

#include <iostream>

class Base
{
public:
    virtual int fcn() {std::cout << "调用Base:int fcn()" << std::endl; return 1;}
};

class D1 : public Base
{
public:
    //1.D1类需要覆盖它继承而来的fcn函数
    //int fcn() {std::cout << "调用D1::int fcn()" << std::endl;}
    //2.隐藏了基类的fcn，这个fcn不是虚函数，D1继承了Base::fcn()的定义
    int fcn(int i) {std::cout << "调用D1::int fcn(int)" << std::endl; return 1;}     //形参列表与Base中的fcn不一致
    virtual void f2() {std::cout << "调用D1::void f2()" << std::endl;}   //是一个新的虚函数，在Base中不存在
};

class D2 : public D1
{
public:
    int fcn(int) {std::cout << "调用D2::int fcn(int)" << std::endl; return 1;}    //是一个非虚函数，隐藏了D1::fcn(int)
    int fcn() {std::cout << "调用D2::int fcn()" << std::endl; return 1;}        //覆盖了Base的虚函数fcn
    void f2() {std::cout << "调用D2::void f2()" << std::endl;}        //覆盖了D1的虚函数f2
};

int main()
{
    Base bobj;
    D1 d1obj;
    D2 d2obj;

    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
    bp1->fcn();        //虚调用，将在运行时调用Base::fcn
    bp2->fcn();        //虚调用，将在运行时调用Base::fcn
    bp3->fcn();        //虚调用，将在运行时调用D2::fcn

    D1 *d1p = &d1obj;
    D2 *d2p = &d2obj;
    //bp2->f2();      //错误：Base没有名为f2的成员
    d1p->f2();        //虚调用，将在运行时调用D1::f2()
    d2p->f2();        //虚调用，将在运行时调用D2::f2()

    //对非虚函数fcn(int)的调用
    Base *p1 = &d2obj;
    D1 *p2 = &d2obj;
    D2 *p3 = &d2obj;
    //p1->fcn(42);     //错误：Base中没有接受一个int的fcn
    //如果D1类中的fcn函数修改为覆盖它继承而来的fcn函数，则下面的调用将会出错
    p2->fcn(42);     //静态绑定，调用D1::fcn(int)
    p3->fcn(42);     //静态绑定，调用D2::fcn(int)

    return 0;
}

