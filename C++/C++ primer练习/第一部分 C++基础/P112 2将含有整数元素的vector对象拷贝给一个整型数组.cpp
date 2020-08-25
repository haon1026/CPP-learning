//时间：2019年5月15日20:37:13
//将含有整型数组的vector对象拷贝给一个整型数组

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    const int sz = 10;
    std::vector<int> v;
    srand( (unsigned) time (NULL));

    std::cout << "vector对象的内容是：" << std::endl;
    for (int i = 0; i != sz; ++i)
    {
        v.push_back(rand() % 100);
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    auto it = v.cbegin();
    int a[v.size()];
    std::cout << "数组的内容是：" << std::endl;

    for (auto &c : a)
    {
        c = *it;
        std::cout << c << " ";
        it++;
    }
    std::cout << std::endl;


    return 0;
}
