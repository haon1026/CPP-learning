//ʱ�䣺2019��6��23��00:22:53
//��д���Լ��汾����shared_ptr����connection�ĺ���

#include <iostream>
#include <memory>

struct destination {};
struct connection {};

connection connect(destination *pd)
{
    std::cout << "������" << std::endl;
    return connection();
}

void disconnect(connection c)
{
    std::cout << "�ر�����" << std::endl;
}

//δʹ��shared_ptr�İ汾
void f(destination &d)
{
    std::cout << "ֱ�ӹ���connect" << std::endl;
    connection c = connect(&d);
    //���ǵ���disconnect�ر�����

    std::cout << std::endl;
}

void end_connection(connection *p) {disconnect (*p);}

//ʹ��shared_ptr�İ汾
void f1(destination &d)
{
    std::cout << "��shared_ptr����connect" << std::endl;
    connection c = connect(&d);

    std::shared_ptr<connection> p(&c, end_connection);    //��f1����������������pʱ�ŵ���disconnect
    //���ǵ���disconnect�ر�����

    std::cout << std::endl;
}

int main()
{
    destination d;

    f(d);

    f1(d);

    return 0;
}
