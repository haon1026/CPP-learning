//时间：2019年6月12日20:40:13
//第316页中删除偶数值元素并复制奇数值元素的程序不能用于list或forward_list,，为什么？修改程序，使之也能用于这些类型
//liet和forward_list与其他容器的一个不同是，迭代器不支持加减运算，究其原因，链表中元素并非在内存中连续存储，因此无法通过
//地址的加减在元素间远距离移动。因此，应多次调用++来实现与迭代器加法相同的效果

#include <iostream>
#include <list>
#include <forward_list>

//list
/*
int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = ilist.begin();

    while (iter != ilist.end())
    {
        if (*iter % 2)          //奇数
        {
            iter = ilist.insert(iter, *iter);   //插入到当前元素之前
            ++iter;         //移动到下一元素
            ++iter;
        }
        else
            iter = ilist.erase(iter);      //删除，指向下一元素
    }

    for (auto iter = ilist.begin(); iter != ilist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
*/
//forward_list
int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flist.before_begin();   //前驱节点
    auto curr = flist.begin();          //首节点

    while (curr != flist.end())
    {
        if (*curr % 2)
        {
            curr = flist.insert_after(curr, *curr);       //插入到当前元素之后
            prev = curr;                                  //prev移动到新插入元素
            curr++;                                       //curr移动到下一元素
            //curr = flist.insert_after(prev, *curr);     //插入到当前元素之前
            //++curr;                                     //curr移动到原有元素
            //prev = curr;                                //prev移动到原有元素
            //++curr;                                     //curr移动到下一元素
        }
        else
            curr = flist.erase_after(prev);      //删除，curr指向下一元素
    }

    for (auto curr = flist.begin(); curr != flist.end(); ++curr)
        std::cout << *curr << " ";
    std::cout << std::endl;

    return 0;
}

