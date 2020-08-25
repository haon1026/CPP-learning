//时间：2019年5月14日16:26:57
//拷贝数组

#include <iostream>
#include <vector>

int main()

{
    int a1[10], a2[10];

    for (int j = 0; j < 10; ++j)
        a1[j] = j;
    for (int i = 0; i < 10; ++i)
    {
        a2[i] = a1[i];
        std::cout << a2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
{
     const int sz = 10;  //常量sz作为vectorz的容量
     std::vector<int> v1, v2;
     //通过for循环为vector对象的元素赋值
     for (int i = 0; i < sz; i++)
        v1.push_back(i);
     for (int j = 0; j < sz; j++)
        v2.push_back(j);
     //通过范围for循环输出vector对象的全部元素
     for (auto val : v2)
        std::cout << val << " ";
     std::cout << std::endl;

     return 0;
}
*/
