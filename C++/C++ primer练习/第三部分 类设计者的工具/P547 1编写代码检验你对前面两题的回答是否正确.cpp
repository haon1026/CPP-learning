//时间：2019年7月9日19:41:53
//编写代码检验你对前面两题的回答是否正确

#include <iostream>

using namespace std;

class Base
{
public:
    void pub_mem();
protected:
    int prot_mem;
private:
    char priv_mem;
};

struct Pub_Derv : public Base    //struct成员访问说明符默认是public
{
    int f() {return prot_mem;}
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Pub_Derv" << endl;
    }
};

struct Priv_Derv : private Base
{
    int f1() const {return prot_mem;}
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Priv_Derv" << endl;
    }
};

struct Prot_Derv : protected Base
{
    int f2() {return prot_mem;}
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Prot_derv" << endl;
    }
};

struct Derived_from_Public : public Pub_Derv
{
    int use_base() {return prot_mem;}
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Derived_from_Public" << endl;
    }
};

struct Derived_from_Protected : protected Prot_Derv
{
    int use_base() {return prot_mem;}
    void memfcn(Base &b)
    {
        b = *this;
        cout << "Derived_from_Protected" << endl;
    }
};

int main()
{

    Pub_Derv d1;
    Priv_Derv d2;
    Prot_Derv d3;
    Derived_from_Public dd1;
    //Derived_from_Private dd2;
    Derived_from_Protected dd3;
    Base base;
    Base *p = new Base;
    //只有当派生类公有继承基类时，用户代码才能使用派生类到基类的转换
    p = &d1;
    //p = &d2;
    //p = &d3;
    p = &dd1;
    //p = &dd2;
    //p = &dd3;

    //对于某个节点来说，如果基类的公有成员是可访问的，则派生类向基类的类型转换也是可访问的
    d1.memfcn(base);
    d2.memfcn(base);
    d3.memfcn(base);
    dd1.memfcn(base);
    //dd2.memfcn(base);
    dd3.memfcn(base);

    return 0;
}
