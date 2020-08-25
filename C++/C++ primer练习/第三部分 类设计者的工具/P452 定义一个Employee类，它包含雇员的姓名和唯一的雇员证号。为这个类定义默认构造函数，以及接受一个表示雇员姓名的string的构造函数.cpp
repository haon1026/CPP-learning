//ʱ�䣺2019��6��29��15:53:39
//����һ��Employee�࣬��������Ա��������Ψһ�Ĺ�Ա֤�š�Ϊ����ඨ��Ĭ�Ϲ��캯�����Լ�����һ����ʾ��Ա������string�Ĺ��캯��.
//ÿ�����캯��Ӧ��ͨ������һ��static���ݳ�Ա������һ��Ψһ��֤��

#include <iostream>
#include <string>

class Employee
{
public:
    Employee() {std::cout << "����Ĭ�Ϲ��캯��" << std::endl; number = st++;}
    Employee(const std::string &s) {std::cout << "���ù��캯��" << std::endl; name = s; number = st++;}
    //Ϊ13.19����Ŀ������캯���Ϳ�����ֵ�����
    Employee(const Employee& emp) {std::cout << "���ÿ������캯��" << std::endl; name = emp.name; number = st++;}
    Employee& operator=(const Employee &rhs) {std::cout << "���ÿ�����ֵ�����" << std::endl; name = rhs.name;  return *this;}

    const std::string &get_name() {return name;}
    int get_number() {return number;}

private:
    static int st;
    std::string name;
    int number;
};

int Employee::st = 0;

void f(Employee &s)
{
    std::cout << s.get_name() << ":" << s.get_number() << std::endl;
}

int main()
{
    Employee a("��"), b = a, c;    //����ʱ�ĸ�ֵ�ǵ��õĿ������캯��
    f(c);
    c = b;        //�Ƕ���ʱ�ĸ�ֵ���õ�ʱ������ֵ�����
    f(a);
    f(b);
    f(c);
}
