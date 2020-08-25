//时间：2019年5月15日20:06:12
//整型数组初始化vector对象

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


int main()
{
    const int sz = 10;
    int a[sz];
    srand( (unsigned)time(NULL) );
    std::cout << "数组的内容是：" << std::endl;

    for (auto &val : a)
    {
        val = rand() % 100;
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //利用begin和end初始化vectoe对象
    std::vector<int> v(std::begin(a), std::end(a));
    std::cout << "vector的内容是：" << std::endl;

    for (auto val : v)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
