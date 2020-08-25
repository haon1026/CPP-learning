//时间：2019年5月17日16:17:59
//使用条件运算符从vector中找到奇数，并使这些奇数值翻倍

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    std::vector<int> v;
    srand( (unsigned) time (NULL) );

    //使用普通for循环为数组赋初值
    std::cout << "vector对象中的元素包括：" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(rand() % 100);
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //使用范围for循环把数组中的奇数翻倍
    for ( auto &c : v)
        c = (c % 2 == 1 ? 2 * c : c);

    //使用范围for循环和迭代器输出当前数组的当前值
    std::cout << "vector对象中的奇数翻倍后各元素为：" << std::endl;
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;



    return 0;
}
