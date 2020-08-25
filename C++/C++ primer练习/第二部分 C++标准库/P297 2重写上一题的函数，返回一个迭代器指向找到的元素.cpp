//时间：2019年6月10日13:29:01
//编写函数，接受一对指向vector<int>的迭代器和一个int值，在两个迭代器指定的范围内查找给定的值，返回一个bool值来指出是否找到
//重写上一题的函数，返回一个迭代器指向找到的元素,注意，程序必须处理未找到给定值的情况

#include <iostream>
#include <vector>

std::vector<int>::const_iterator find_vec(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend, int val)
{
    while(cbeg != cend)
    {
        if (*cbeg == val)
        {
            std::cout << "你所查找的整数在vector对象中" << std::endl;
            return cbeg;
        }
        ++cbeg;
    }
    std::cout << "你所查找的整数不存在于vector中"  << std::endl;
    return cend;
}

int main()
{
    std::vector<int> v = {10, 20, 5, 3, 15, 12};
    std::cout << "请输入你要查找的整数:";
    int val;
    std::cin >> val;
    auto it1 = v.cbegin();
    auto it2 = v.cend();
    std::cout << find_vec(it1, it2, val) - v.cbegin() <<std::endl;     //如果存在的话，输出目标整数与所查找的整数之间的距离

    return 0;
}
