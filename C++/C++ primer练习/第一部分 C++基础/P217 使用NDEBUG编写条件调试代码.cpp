//时间：2019年5月30日12:40:00
//使用NDEBUG编写条件调试代码

#include <iostream>
#include <vector>
//#define NDEBUG

//递归函数输出vector<int>的内容
void print(std::vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
    //设置在此处输出调试信息
    #ifndef NDEBUG
    std::cout << "vector对象的大小是：" << sz << std::endl;
    #endif      //NDEBUG
    if (!vInt.empty() && index < sz)
    {
        std::cout << vInt[index] << std::endl;
        print(vInt, index + 1);
    }
}

int main()
{
    std::vector<int> v = {1,3,5,7,9,11,13,15};
    print(v, 0);

    return 0;
}
