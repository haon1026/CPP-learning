//时间：2019年6月23日00:22:53
//编写你自己版本的用shared_ptr管理connection的函数

#include <iostream>
#include <memory>

struct destination {};
struct connection {};

connection connect(destination *pd)
{
    std::cout << "打开连接" << std::endl;
    return connection();
}

void disconnect(connection c)
{
    std::cout << "关闭连接" << std::endl;
}

//未使用shared_ptr的版本
void f(destination &d)
{
    std::cout << "直接管理connect" << std::endl;
    connection c = connect(&d);
    //忘记调用disconnect关闭连接

    std::cout << std::endl;
}

void end_connection(connection *p) {disconnect (*p);}

//使用shared_ptr的版本
void f1(destination &d)
{
    std::cout << "用shared_ptr管理connect" << std::endl;
    connection c = connect(&d);

    std::shared_ptr<connection> p(&c, end_connection);    //在f1函数结束后，在销毁p时才调用disconnect
    //忘记调用disconnect关闭连接

    std::cout << std::endl;
}

int main()
{
    destination d;

    f(d);

    f1(d);

    return 0;
}
