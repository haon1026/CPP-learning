//ʱ�䣺2019��7��10��12:05:54
//����550ҳ��D1����Ҫ�������̳ж�����fcn��������Ӧ����ζ�������޸ģ�����޸�֮��fcnƥ����Base�еĶ��壬��ýڵ���Щ����������ν���

#include <iostream>

class Base
{
public:
    virtual int fcn() {std::cout << "����Base:int fcn()" << std::endl; return 1;}
};

class D1 : public Base
{
public:
    //1.D1����Ҫ�������̳ж�����fcn����
    //int fcn() {std::cout << "����D1::int fcn()" << std::endl;}
    //2.�����˻����fcn�����fcn�����麯����D1�̳���Base::fcn()�Ķ���
    int fcn(int i) {std::cout << "����D1::int fcn(int)" << std::endl; return 1;}     //�β��б���Base�е�fcn��һ��
    virtual void f2() {std::cout << "����D1::void f2()" << std::endl;}   //��һ���µ��麯������Base�в�����
};

class D2 : public D1
{
public:
    int fcn(int) {std::cout << "����D2::int fcn(int)" << std::endl; return 1;}    //��һ�����麯����������D1::fcn(int)
    int fcn() {std::cout << "����D2::int fcn()" << std::endl; return 1;}        //������Base���麯��fcn
    void f2() {std::cout << "����D2::void f2()" << std::endl;}        //������D1���麯��f2
};

int main()
{
    Base bobj;
    D1 d1obj;
    D2 d2obj;

    Base *bp1 = &bobj, *bp2 = &d1obj, *bp3 = &d2obj;
    bp1->fcn();        //����ã���������ʱ����Base::fcn
    bp2->fcn();        //����ã���������ʱ����Base::fcn
    bp3->fcn();        //����ã���������ʱ����D2::fcn

    D1 *d1p = &d1obj;
    D2 *d2p = &d2obj;
    //bp2->f2();      //����Baseû����Ϊf2�ĳ�Ա
    d1p->f2();        //����ã���������ʱ����D1::f2()
    d2p->f2();        //����ã���������ʱ����D2::f2()

    //�Է��麯��fcn(int)�ĵ���
    Base *p1 = &d2obj;
    D1 *p2 = &d2obj;
    D2 *p3 = &d2obj;
    //p1->fcn(42);     //����Base��û�н���һ��int��fcn
    //���D1���е�fcn�����޸�Ϊ�������̳ж�����fcn������������ĵ��ý������
    p2->fcn(42);     //��̬�󶨣�����D1::fcn(int)
    p3->fcn(42);     //��̬�󶨣�����D2::fcn(int)

    return 0;
}

