//时间：2019年6月18日20:21:43
//具有唯一关键字的容器与允许重复关键字的容器之间的区别

#include <iostream>
#include <vector>
#include <map>
#include <set>

int main()
{
    //定义一个有20个元素的vector,保存0到9每个整数的两个拷贝
    std::vector<int> ivec;
    for (std::vector<int>::size_type i = 0; i != 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i);     //每个数重复保存一次
    }

    //iset包含来自ivec的不重复的元素，miset包含所有的20个元素
    std::set<int> iset(ivec.cbegin(), ivec.cend());
    std::multiset<int> miset(ivec.begin(), ivec.end());
    std::cout << ivec.size() << std::endl;
    std::cout << iset.size() << std::endl;
    std::cout << miset.size() << std::endl;

    return 0;
}
