//时间：2019年6月11日00:46:32
//使用insert的返回值在vector容器中一个特定位置反复插入元素

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> svec;
    auto iter = svec.begin();
    std::string word;
    while (std::cin >> word)
    {
        iter = svec.insert(iter, word);           //插入元素后，会使指向容器的迭代器失效，所以需要重新赋值
    }

    for (auto beg = svec.cbegin(); beg != svec.cend(); ++beg)    //迭代器遍历
        std::cout << *beg << " ";
    std::cout << std::endl;

    return 0;
}
