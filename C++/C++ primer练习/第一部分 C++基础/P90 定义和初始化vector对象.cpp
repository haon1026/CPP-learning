//时间：2019年5月12日11:45:31
//定义和初始化vector对象

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    std::cout << "v7的元素个数是：" << v7.size() <<std::endl;
    for(decltype(v7.size()) i = 0; i < v7.size(); ++i)    //v1-v7进行更改测试
    {
        std::cout << v7[i] << std::endl;
    }


    return 0;
}
