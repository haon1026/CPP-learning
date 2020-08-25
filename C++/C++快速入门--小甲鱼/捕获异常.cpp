//时间：2019年7月12日11:02:50
//捕获异常

#include <iostream>
#include <climits>

unsigned long returnFactorial(unsigned short num) throw (const char *);    //抛出的类型是char *,说明是C风格字符串

int main()
{
    unsigned short num = 0;

    std::cout << "请输入一个整数：";
    while (!(std::cin>>num) || (num<1))
    {
        std::cin.clear();       //清除状态
        std::cin.ignore(100, '\n');  //清除缓冲区
        std::cout << "请输入一个整数";
    }
    std::cin.ignore(100, '\n');

    try                    //try语句去尝试某件可能会失败的事，每条try语句至少要有一条配对的catch语句
    {
        unsigned long factorial = returnFactorial(num);    //如果发生问题抛出一个异常
        std::cout << num << "的阶乘是：" << factorial;     //如果执行过throw语句，它后面的所有语句（截至到这个try语句块末尾）将永远不会被执行
    }
    catch(const char *e)    //再安排一些代码(catch语句)去捕获这个异常并进行相应的处理
    {
        std::cout << e;   //捕获抛出的异常,此处异常是C风格字符串，然后输出
    }
    std::cout << "哈哈" << std::endl;   //测试try抛出异常后，块之后的语句会不会执行     //   采用异常处理机制的好处事把它把程序的正常功能和逻辑
    return 0;                                                                           //  与出错处理部分清晰的划分开而不是让它们混杂在一起
}

unsigned long returnFactorial(unsigned short num) throw (const char *)       //函数抛出哪种类型的异常      //如果没有使用这种语法定义函数，意味着函数可以抛出任意类型的异常
{
    unsigned long sum = 1;
    unsigned long max = ULONG_MAX;

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
        max /= i;
    }

    if (max < 1)
    {
        throw "该基数太大，无法在该计算机计算求出阶乘值。\n";
    }
    else
    {
        return sum;
    }
}
