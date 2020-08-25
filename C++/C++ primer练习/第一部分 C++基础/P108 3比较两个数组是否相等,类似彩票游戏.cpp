//时间：2019年5月15日11:50:45
//比较两个数组是否相等,彩票游戏

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    const int sz = 5;
    int a[sz], b[sz], i;
    srand( (unsigned)time(NULL) );       //生成随机数种子
    for (i = 0; i < sz; i++)
        a[i] = rand() %10;               //每次循环生成一个10以内的随机数并添加到a中

    std::cout << "系统数据已经生成，请输入您猜测的5个数字（0-9）,可以重复:" << std::endl;
    int uVal;
    //通过for循环为数组元素赋值
    for (i = 0; i < sz; i++)
        if (std::cin >> uVal)
           b[i] = uVal;

    std::cout << "系统生成的数据是：";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;
    std::cout << "您猜测的数据是：";
    for (auto val : b)
        std::cout << val << " ";
    std::cout << std::endl;

    int *p = std::begin(a), *q = std::begin(b);     //令p和q分别指向数组a和b的首元素
    while (p != std::end(a) && q != std::end(b))
    {
        if (*p != *q)
        {
            std::cout << "您的猜测有误，两个数组不相等" << std::endl;
            return -1;
        }
        p++;
        q++;
    }
    std::cout << "恭喜您全都猜对了！" << std::endl;

    return 0;
}
