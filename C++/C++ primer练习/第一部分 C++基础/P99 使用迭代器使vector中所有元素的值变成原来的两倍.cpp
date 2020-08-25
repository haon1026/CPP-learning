//时间：2019年5月13日12:34:09
//程序自动生成随机水并添加到容器中,使用迭代器使vector中所有元素的值变成原来的两倍

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    std::vector<int> vInt;
    srand((unsigned)time(NULL));      //生成随机数种子
    for(int i = 0; i < 10; ++i)     //循环10次
    {
        vInt.push_back(rand() % 1000);   //每次循环生成一个1000以内的随机数添加到vInt中
    }

    std::cout << "随机生成的10个数字是：" << std::endl;
    //利用常量迭代器读取原始数据
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
        std::cout << *it << " ";         //输出当前数字
    std::cout << std::endl;

    std::cout << "翻倍后的10个数字字：" << std::endl;
    //利用非常量迭代器谢盖vInt内容并输出
    for(auto it2 = vInt.begin(); it2 != vInt.end(); ++it2)
    {
        *it2 = 2 * (*it2);
        std::cout << *it2 << " ";        //输出当前数字
    }
    std::cout << std::endl;

    return 0;
}
