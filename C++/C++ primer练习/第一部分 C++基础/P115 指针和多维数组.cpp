//时间：2019年5月15日22:16:05
//指针和多维数组

#include <iostream>

int main()
{
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};           //大小为3的数组，每个元素是含有4个整数的数组
    //int (*p)[4] = ia;                                   //p指向含有4个整数的数组
    //p = &ia[2];                                         //p指向ia的尾元素
    //int *ip[4]                                          //整型指针的数组
    //int (*ip)[4]                                        //指向含有4个整数的数组


    //输出ia中每个元素的值，每个内层数组各占一行
    //p指向含有4个整数的数组
    for (auto p = ia; p != ia +3; ++p)
        for (auto q = *p; q != *p + 4; ++q)               //*p是一个含有4个整数的数组,像往常一样，数组名被自动地转换成指向该数组首元素的指针
            std::cout << *q << " ";
    std::cout << std::endl;


    //使用标准库函数begin和end实现同样功能
    //p指向ia的第一个数组
    for (auto p = std::begin(ia); p != std::end(ia); ++p)
        //q指向内层数组的首元素
    for (auto q = std::begin(*p); q != std::end(*p); ++q)
        std::cout << *q << " ";                //输出q所指的整数值
    std::cout << std::endl;


    //类型别名简化多维数组的指针
    using int_array = int[4];
    typedef int int_array[4];

    //输出ia中每个元素的值，每个内层数组各占一行
    for (int_array *p = ia; p != ia +3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
             std::cout << *q << " ";
    std::cout << std::endl;

    return 0;
}
