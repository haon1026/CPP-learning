//时间：2019年6月15日13:10:23
//假定v是一个vector double,那么调用accumulate(v.cbegin(), c.cend(), 0)有何错误
//accumulate的第三个参数是和的初值，它还决定了函数的返回类型，以及函数中使用哪个加法运算符

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "打开文件失败！" << std::endl;
        exit(1);
    }
    std::vector<double> dv;
    double val;
    while (in >> val)
        dv.push_back(val);

    std::cout << "序列中浮点数之和为" << accumulate(dv.cbegin(), dv.cend(), 0.0) << std::endl;   //第三个参数是int类型的话会忽略掉元素中的小数部分


    return 0;
}
