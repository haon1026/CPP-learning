//时间：2019年6月7日14:08:27
//编写一个函数，接受一个istrean参数，返回值类型也是istream&，此函数须从给定流中读取数据，直至遇到文件结束符标识时停止
//它将读取的数据打印在标准输出上。完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态

#include <iostream>
#include <stdexcept>

std::istream& func(std::istream & is)
{
    int v;
    while (is >> v, !is.eof())            //逗号表达式，直到遇到文件结束符才停止读取
    {
        if (is.bad())
            throw std::runtime_error("IO流错误");
        if (is.fail())
        {
            std::cerr << "数据错误，请重试：" << std::endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        std::cout << v << std::endl;
    }
    std::cout << "流的当前状态为：" << is.rdstate() << std::endl;
    is.clear();
    std::cout << "执行clear后流的当前状态为：" << is.rdstate() << std::endl;
    return is;
}

int main()
{
    std::cout << "请输入一些整数，按Ctrl+Z结束" << std::endl;
    func(std::cin);

    return 0;
}
