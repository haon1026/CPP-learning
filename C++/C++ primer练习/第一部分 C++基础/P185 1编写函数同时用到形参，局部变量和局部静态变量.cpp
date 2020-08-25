//时间：2019年5月22日21:50:01
//编写函数同时用到形参，局部变量和局部静态变量

#include <iostream>

double myADD(double val1, double val2)        //val1和val2是形参
{
    double result = val1 + val2;             //result是普通局部变量
    static unsigned iCnt = 0;                //iCnt是静态局部变量
    ++iCnt;
    std::cout << "该函数已经累计执行了" << iCnt << "次" << std::endl;
    return result;
}

int main()
{
    double num1, num2;
    std::cout << "请输入两个数：";
    while (std::cin >> num1 >> num2)
    {
        std::cout << num1 << "与" << num2 << "的求和结果是：" << myADD(num1,num2) << std::endl;
    }

    return 0;
}
