//时间：2019年5月15日12:20:18
//比较两个vector是否相等,彩票游戏

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

int main()
{
    const int sz = 5;
    std::vector<int> a, b;
    int i;
    srand( (unsigned)time(NULL) );       //生成随机数种子
    for (i = 0; i < sz; i++)
        a.push_back(rand() %10);               //每次循环生成一个10以内的随机数并添加到a中

    std::cout << "系统数据已经生成，请输入您猜测的5个数字（0-9）,可以重复:" << std::endl;
    int uVal;
    //通过for循环为数组元素赋值
    for (i = 0; i < sz; i++)
        if (std::cin >> uVal)
           b.push_back(uVal);

    std::cout << "系统生成的数据是：";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;
    std::cout << "您猜测的数据是：";
    for (auto val : b)
        std::cout << val << " ";
    std::cout << std::endl;

    auto it1 = begin(a), it2 = std::begin(b);     //令it1和t2分别指向vector对象a和b的首元素
    while (it1 != end(a) && it2 != end(b))
    {
        if (*it1 != *it2)
        {
            std::cout << "您的猜测有误，两个数组不相等" << std::endl;
            return -1;
        }
        it1++;
        it2++;
    }
    std::cout << "恭喜您全都猜对了！" << std::endl;

    return 0;
}
