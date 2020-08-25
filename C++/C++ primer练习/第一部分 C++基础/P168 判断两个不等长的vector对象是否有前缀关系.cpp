//时间：2019年5月19日21:04:27
//判断两个不等长的vector对象是否有前缀关系

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {0, 1, 1, 2};
    std::vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    std::vector<int> v3 = {3, 5, 8};
    std::vector<int> v4 = {3, 5, 0, 9, 2, 7};

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();
    auto it3 = v3.cbegin();
    auto it4 = v4.cbegin();
    //设定循环条件：v1和v2都尚未检查完
    while (it1 != v1.cend() && it2 != v2.cend())
    {
        //如果当前位置的两个元素不相等，则肯定没有前缀关系，退出循环
        if (*it1 != *it2)
        {
            std::cout << "v1和v2之间不存在前缀关系" << std::endl;
            break;
        }
        ++it1;          //迭代器移动到下一个元素
        ++it2;          //迭代器移动到下一个元素
    }
    if (it1 == v1.cend())                          //如果v1较短
        std::cout << "v1是v2的前缀" << std::endl;
    if (it2 == v2.cend())                          //如果v2较短
        std::cout << "v2是v1的前缀" << std::endl;


    return 0;
}
