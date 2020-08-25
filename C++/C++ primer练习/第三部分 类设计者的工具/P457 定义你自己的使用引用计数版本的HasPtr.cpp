//ʱ�䣺2019��6��30��12:42:51
//�������Լ���ʹ�����ü����汾��HasPtr

#include <iostream>
#include <string>

class HasPtr
{
public:
    //���캯�������µ�string���µļ�����������������Ϊ1
    HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
    //�������캯�����������������ݳ�Ա��������������
    HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use) {++*p.use;}
    HasPtr& operator=(const HasPtr&);      //������ֵ�����
    HasPtr& operator=(const std::string&);  //������string
    std::string operator*();     //������
    ~HasPtr();

private:
    std::string *ps;
    int i;
    std::size_t *use;    //������¼�ж��ٸ�������*ps�ĳ�Ա
};

HasPtr::~HasPtr()
{
    if (--*use == 0)   //������ü�����Ϊ0
    {
        delete ps;    //�ͷ�string�ڴ�
        delete use;   //�ͷż������ڴ�
    }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
    ++*rhs.use;   //�����Ҳ������������ü���
    if (--*use == 0)    //Ȼ��ݼ�����������ü���
    {
        delete ps;    //���û�������û�
        delete use;   //�ͷű�����ķ���ĳ�Ա
    }
    ps = rhs.ps;     //�����ݴ�rhs������������
    i = rhs.i;
    use = rhs.use;

    return *this;  //���ر�����
}

HasPtr& HasPtr::operator=(const std::string &rhs)
{
    *ps = rhs;
    return *this;
}

std::string HasPtr::operator*()
{
    return *ps;
}

int main()
{
    HasPtr h("hi mom!");
    HasPtr h2 = h;    //Ϊ������string,h2��hָ����ͬ��string
    h = "hi dad!";    //h��psָ��string�ı���,*h2Ҳ��Ӧ�ı���
    std::cout << "h: " << *h << std::endl;
    std::cout << "h2: " << *h2 << std::endl;

    return 0;
}
