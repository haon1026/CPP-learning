//时间：2019年5月28日13:32:54
//编写一个函数，参数为initializer_list int类型的对象，函数功能为计算列表中所有元素的和

#include <iostream>

int mySum(std::initializer_list<int> li)
{
    int sum = 0;
    for (auto beg = li.begin(); beg != li.end(); ++beg)
        sum += *beg;

    return sum;
}

int main()
{
    std::cout << "2,1,3,4,5的和是：" << mySum({2,1,3,4,5}) << std::endl;
    std::cout << "7,6,3的和是：" << mySum({7,6,3}) << std::endl;
    std::cout << "1,2,9,10的和是：" << mySum({1,2,9,10}) << std::endl;

    return 0;
}
