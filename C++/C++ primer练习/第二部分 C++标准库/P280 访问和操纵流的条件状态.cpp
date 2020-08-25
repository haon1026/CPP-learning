//时间：2019年6月7日09:43:53
//访问和操纵流的条件状态

#include <iostream>

int main()
{
    //测试初始状态下各个条件状态位bit及函数的值
    std::cin.clear();             //将流中所有条件状态为复位，将流的状态设置为有效。返回void
    std::cout << std::istream::badbit << std::endl;      //strm::badbit用来指出流已崩溃
    std::cout << std::istream::failbit << std::endl;     //strm::failbit用来指出一个IO操作失败了
    std::cout << std::istream::eofbit << std::endl;      //strm::eofbit用来指出流到达了文件结束
    std::cout << std::istream::goodbit << std::endl;     //strm::goodbit用来指出流未处于错误状态

    std::cout << "cin.eof()的默认状态为：" << std::cin.eof() << std::endl;           //若流的eof置位，则返回true
    std::cout << "cin.fail()的默认状态为：" << std::cin.fail() << std::endl;         //若流的failbit置位或badbit置位，则返回true
    std::cout << "cin.bad()的默认状态为：" << std::cin.bad() << std::endl;           //若流的badbit置位，则返回true
    std::cout << "cin.good()的默认状态为：" <<std::cin.good() << std::endl;          //若流处于有效状态，则返回true
    std::cout << "cin.rdstate()的默认状态为：" <<std::cin.rdstate() << std::endl;    //返回s的当前状态条件，返回值类型为strm::iostate
    std::cout << std::endl;

    //测试cin在不同情况下各个bit和函数的值， 到文件末尾？输入有误？
    int i;
    std::cin >> i;

    std::cout << "cin.eof()的当前状态为：" << std::cin.eof() << std::endl;
    std::cout << "cin.fail()的当前状态为：" << std::cin.fail() << std::endl;
    std::cout << "cin.bad()的当前状态为：" << std::cin.bad() << std::endl;
    std::cout << "cin.good()的当前状态为：" <<std::cin.good() << std::endl;
    std::cout << "cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    //cin.clear(flags)会覆盖原有的流状态，将流状态变更为flags所表示的状态， fail:4, eof:2, bad:1
    std::cin.clear(std::istream::badbit);
    std::cout << "将badbit复位后cin.bad()的当前状态为：" << std::cin.bad() << std::endl;
    std::cout << "将badbit复位后cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::istream::eofbit);
    std::cout << "将eofbit复位后cin.eof()的当前状态为：" << std::cin.eof() << std::endl;
    std::cout << "将eofbit复位后cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::istream::failbit);
    std::cout << "将badbit复位后cin.fail()的当前状态为：" << std::cin.fail() << std::endl;
    std::cout << "将badbit复位后cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    //setstate将括号内所代表的的状态叠加到在流的原状态上
    std::cin.setstate(std::istream::eofbit);
    std::cout << "将eofbit置位后cin.eof()的当前状态为：" << std::cin.eof() << std::endl;
    std::cout << "将eofbit置位后cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    std::cin.clear(std::cin.rdstate() & ~std::cin.failbit & ~std::cin.badbit);        //类::failbit, 对象.failbit     6 -5 -3 ？
    std::cout << "将badbit复位后cin.fail()的当前状态为：" << std::cin.fail() << std::endl;
    std::cout << "将badbit复位后cin.rdstate()的当前状态为：" <<std::cin.rdstate() << std::endl;
    std::cout << std::endl;

    return 0;
}
