//ʱ��:2019��3��23��15:26:30
//�����������鷽��

#include <iostream>

class ClxBase
{
public:
    ClxBase()
    {
        std::cout << "���û��๹����\n";
    };

    virtual ~ClxBase()
    {
        std::cout << "���û���������\n";
    };

    virtual void doSomething()
    {
        std::cout << "�ڻ�����ĳ��!\n";
    }
};

class ClxDerived : public ClxBase
{
public:
    ClxDerived()
    {
        std::cout << "�������๹����\n";
    };

    ~ClxDerived()
    {
        std::cout << "��������������,Output from the destructor of class ClxDerived!\n";
    };

    void doSomething()
    {
        std::cout << "��������ĳ��\n";
    };      //�Ӳ��ӷֺŶ����ԣ�
};

int main()
{
    ClxBase * pTest = new ClxDerived;
    pTest->doSomething();

    delete pTest;

    return 0;
}
