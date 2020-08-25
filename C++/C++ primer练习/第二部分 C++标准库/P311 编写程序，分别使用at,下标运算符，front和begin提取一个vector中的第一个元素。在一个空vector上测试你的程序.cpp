//时间：2019年6月12日09:48:25
//编写程序，分别使用at,下标运算符，front和begin提取一个vector中的第一个元素。在一个空vector上测试你的程序

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;

    std::cout << vec.at(0) << std::endl;           //执行这条语句会抛出一个out_of_range异常，而此程序未捕获异常，因此会因异常退出    //正确的编程方式是捕获可能的out_of_range异常进行相应的处理
    //std::cout << vec[0] << std::endl;            //以下三种获取容器首元素的方法，当容器为空时不会抛出异常，而是导致程序直接退出    //正确的编程方式是先检查下标的合法性，容器是否为空，然后再获取元素
    //std::cout << vec.front() << std::endl;
    //std::cout << *vec.begin() << std::endl;

    return 0;
}
