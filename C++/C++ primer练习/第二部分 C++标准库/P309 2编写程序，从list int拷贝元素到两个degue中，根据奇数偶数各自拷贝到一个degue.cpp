//时间：2019年6月11日00:19:11
//编写程序，从一个list<int>拷贝元素到两个degue中。值为偶数的所有元素都拷贝到一个degue中，而
//奇数值都拷贝到另一个degue中

#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::deque<int> ideque1;
    std::deque<int> ideque2;

    for (auto i : ilist)
    {
        if (i % 2 == 0)     //  使用位于操作也可行 i & 1,不过对两个deque的添加元素顺序需要相应改变
            ideque1.push_back(i);
        else
            ideque2.push_back(i);
    }

    std::cout << "偶数值有：";
    for (auto i : ideque1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "奇数值有：";
    for (auto i : ideque2)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
