//时间：2019年6月12日13:07:47
//编写程序，查找并删除forwardlist<int>中的奇数元素

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto prev = flist.before_begin();   //前驱元素
    auto curr = flist.begin();          //当前元素

    while (curr != flist.end())
    {
        if (*curr % 2)                //奇数
            curr = flist.erase_after(prev);   //删除。移动到下一元素
        else
        {
            prev = curr;
            ++curr;
        }
    }

    std::cout << "forward_list的奇数原数有：";
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
