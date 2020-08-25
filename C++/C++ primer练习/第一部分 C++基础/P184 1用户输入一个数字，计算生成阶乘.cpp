//时间：2019年5月22日21:13:37
//用户输入一个数字，计算生成阶乘

#include <iostream>

int fact(int val)
{
    int ret = 1;

    if (val < 0)
        return -1;

    while (val > 0)
    {
        ret *= val;
        --val;
    }
    return ret;
}

int main()
{
    std::cout << "请输入需要求阶乘的数：" << std::endl;
    int n;
    std::cin >> n;
    std::cout << n << "的阶乘为：" << fact(n) << std::endl;

    return 0;
}
