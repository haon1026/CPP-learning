//ʱ�䣺2019��6��30��16:11:11
//Ϊ�����ֵ�汾��HasPtr��дswap����������������Ϊ���swap�������һ����ӡ��䣬ָ������ʲôʱ��ִ��

#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &p) : ps(new std::string (*p.ps)), i(p.i) {}
    HasPtr& operator=(const HasPtr&);
    HasPtr& operator=(const std::string s) {*ps = s; return *this;}
    std::string& operator*() {return *ps;}
    ~HasPtr() {delete ps;}

    friend void swap(HasPtr&, HasPtr&);

private:
    std::string *ps;
    int i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
    auto newps = new std::string(*rhs.ps);
    delete ps;
    ps = newps;
    i = rhs.i;

    return *this;
}

inline void swap(HasPtr &lhs, HasPtr &rhs)
{
    std::cout << "���� " << *lhs.ps << "��" << *rhs.ps << std::endl;
    using std::swap;   //�ɲ�д
    swap (lhs.ps, rhs.ps);    //����ָ�룬������string����
    swap (lhs.i, rhs.i);      //����int��Ա
}


int main()
{
    HasPtr h1("����");
    HasPtr h2(h1);     //��Ϊ��ֵ��h2��h3��hָ��ͬstring
    HasPtr h3 = h1;
    h2 = "����";
    h3 = "����";
    swap(h1, h2);
    std::cout << "h1: " << *h1 << std::endl;
    std::cout << "h2: " << *h2 << std::endl;
    std::cout << "h3: " << *h3 << std::endl;
}

//���swap������д�����friend������ֱ��swap(h1,h2�ᱨ��)����Ϊû������::,
//��������friend�������ֱ�ӵ���swap���൱��һ���ⲿ����
//std::swapҲ�ɵ��ã��������string���в���Ҫ�Ŀ���
