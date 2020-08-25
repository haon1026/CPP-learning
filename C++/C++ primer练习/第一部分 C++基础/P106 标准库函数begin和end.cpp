//时间：2019年5月14日17:41:08
//标准库函数begin和end

#include <iostream>
#include <iterator>

int main()
{
    int ia[] = {0,1,2,3,-4,5,6,7,8,9};
    int *beg = std::begin(ia);            //指向ia首元素的指针
    int *last = std::end(ia);             //指向arr尾元素的下一位置的指针

    while (beg != last && *beg >= 0)      //寻找第一个负值元素，如果已经检查完全部元素则结束循环
        ++beg;
    std::cout << *beg << std::endl;

    return 0;
}
