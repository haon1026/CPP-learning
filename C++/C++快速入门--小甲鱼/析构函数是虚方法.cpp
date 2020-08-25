//时间:2019年3月23日15:26:30
//析构器都是虚方法

#include <iostream>

class ClxBase
{
public:
    ClxBase()
    {
        std::cout << "调用基类构造器\n";
    };

    virtual ~ClxBase()
    {
        std::cout << "调用基类析构器\n";
    };

    virtual void doSomething()
    {
        std::cout << "在基类做某事!\n";
    }
};

class ClxDerived : public ClxBase
{
public:
    ClxDerived()
    {
        std::cout << "调用子类构造器\n";
    };

    ~ClxDerived()
    {
        std::cout << "调用子类析构器,Output from the destructor of class ClxDerived!\n";
    };

    void doSomething()
    {
        std::cout << "在子类做某事\n";
    };      //加不加分号都可以？
};

int main()
{
    ClxBase * pTest = new ClxDerived;
    pTest->doSomething();

    delete pTest;

    return 0;
}
