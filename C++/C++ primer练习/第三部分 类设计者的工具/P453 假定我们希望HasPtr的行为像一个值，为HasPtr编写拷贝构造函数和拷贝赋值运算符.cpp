//ʱ�䣺2019��6��29��16:55:26
//�ٶ�����ϣ��HasPtr����Ϊ��һ��ֵ��ΪHasPtr��д�������캯���Ϳ�����ֵ�����

#include <iostream>
#include <string>

class HasPtr
{
public:
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) {}
    HasPtr(const HasPtr &h) {ps = new std::string(*h.ps); i = h.i;}   //�������캯��
    HasPtr& operator=(const HasPtr&);         //������ֵ�����,����Ⱥ��ұ�����
    HasPtr& operator=(const std::string&);     //������ֵ�����,����Ⱥ��ұ���string,������string
    std::string& operator*();      //���������ȡstring
    ~HasPtr() {delete ps;}   //�ͷ�string�ڴ�

private:
    std::string *ps;
    int i;
};

inline HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    auto newps = new std::string(*rhs.ps);   //����ָ��ָ��Ķ���
    delete ps;      //����ԭstring
    ps = newps;     //ָ����string
    i = rhs.i;       //ʹ�����õ�int��ֵ

    return *this;   //����һ���˶��������
}

HasPtr& HasPtr::operator=(const std::string &rhs)
{
    *ps = rhs;
    return *this;
}

std::string& HasPtr::operator*()
{
    return *ps;
}

int main()
{
    HasPtr h("hi mom!");
    HasPtr h2(h);      //��Ϊ��ֵ��h2,h3��hָ��ͬ��string
    HasPtr h3 = h;
    h2 = "hi dad!";
    h3 = "hi son!";

    std::cout << "h: " << *h << std::endl;
    std::cout << "h2: " << *h2 << std::endl;
    std::cout << "h3: " << *h3 << std::endl;

    return 0;
}
