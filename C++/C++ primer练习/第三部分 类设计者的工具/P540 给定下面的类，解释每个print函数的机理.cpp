//ʱ�䣺2019��7��9��12:10:37
//����������࣬����ÿ��print�����Ļ���

#include <iostream>

class base
{
public:
    base(std::string name) : basename(name) {}
    std::string name() {return basename;}
    virtual void print(std::ostream &os) {os << basename;}

private:
    std::string basename;
};

class derived : public base
{
public:
    derived(std::string dname, int ival) : base(dname), i(ival) {}    //�̳��ڻ�������ݳ�Ա��Ҫͨ������Ĺ��캯�����г�ʼ��
    void print(std::ostream &os) {base::print(os); os << " " << i;}   //ÿ����������Լ��ĳ�Ա��ʼ������
private:
    int i;
};

int main()
{
    base b("����");
    std::cout << b.name() << std::endl;
    b.print(std::cout);
    std::cout << std::endl;

    derived d("����", 100);
    std::cout << d.name() << std::endl;
    d.print(std::cout);

    return 0;
}
