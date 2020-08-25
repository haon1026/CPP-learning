//时间：2019年5月13日23:34:09
//使用迭代器输出一组整数中首尾整数和，以此类推。。。

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    std::cout << "请输入一组整数:" << std::endl;
    int n;
    while (std::cin >> n)
        v.push_back(n);

    if(v.begin() == v.end())
    {
        std::cout << "没有任何元素" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "这组整数分别是:" << std::endl;
        for (auto c : v)
            std::cout << c << " ";
        std::cout << std::endl;
        std::cout << "首尾整数相加以及和分别是：" << std::endl;

        auto end = v.end();
        auto beg = v.begin();
        auto mid = beg + (end - beg) / 2;
        if (v.size() % 2 == 0)
            for (auto it = beg; it != mid; it++)
            {
                std::cout << *it << " + " << *(beg + (end - 1 - it)) << " = " << *it + *(beg + (end - 1 - it)) << std::endl;    //解引用记得加上beg
            }
        else
        {
            for (auto it = v.begin();it != mid; it++)
                std::cout << *it << " + " << *(beg + (end - 1 - it)) << " = " << *it + *(beg + (end - 1 - it)) << std::endl;
            std::cout << *mid << std::endl;      //单独处理最后一个元素
        }
    }

        return 0;
}
