//时间：2019年6月10日13:03:29
//编写函数，接受一对指向vector<int>的迭代器和一个int值，在两个迭代器指定的范围内查找给定的值，返回一个bool值来指出是否找到

#include <iostream>
#include <vector>

bool find_vec(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend, int val)
{
    while(cbeg != cend)
    {
        if (*cbeg == val)
            return true;
        ++cbeg;
    }
    return false;
}

int main()
{
    std::vector<int> v = {10, 20, 5, 3, 15, 12};
    std::cout << "请输入你要查找的整数:";
    int val;
    std::cin >> val;
    auto it1 = v.cbegin();
    auto it2 = v.cend();
    if (find_vec(it1, it2, val))
        std::cout << "你所查找的整数在vector对象中" << std::endl;
    else
        std::cout << "你所查找的整数不存在于vector中"  << std::endl;

    return 0;
}
