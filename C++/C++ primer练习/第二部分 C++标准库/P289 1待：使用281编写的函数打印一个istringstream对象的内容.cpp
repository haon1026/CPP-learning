//时间：2019年6月9日18:07:31
//编写一个函数，接受一个istrean参数，返回值类型也是istream&，此函数须从给定流中读取数据，直至遇到文件结束符标识时停止
//它将读取的数据打印在标准输出上。完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态
//使用函数打印一个istringsteam对象的内容

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>

std::istream &func(std::istream &in)
{
    std::string v;
    while (in >> v, !in.eof())            //逗号表达式，直到遇到文件结束符才停止读取
    {
        if (in.bad())
            throw std::runtime_error("IO流错误");
        if (in.fail())
        {
            std::cerr << "数据错误，请重试：" << std::endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        std::cout << v << std::endl;
    }
    std::cout << "流的当前状态为：" << in.rdstate() << std::endl;
    in.clear();
    std::cout << "执行clear后流的当前状态为：" << in.rdstate() << std::endl;
    return in;
}

int main()
{
    std::ostringstream msg;
    msg << "C++ primer 第五版" << std::endl;
    std::istringstream in(msg.str());
    func(in);
/*
    std::string s = "Welcome to China daa ad fs!";    //为什么最后一个字符没有输出
    in.str(s);
    func(in);
*/
    return 0;
}
