//时间：2019年6月12日21:52:46
//假设vi是一个保存int的容器，其中有偶数值也有奇数值，分析下面循环的行为.cpp

/*
iter = vi.begin();
while (iter != vi.end())
    if (*iter % 2)
       iter = vi.insert(iter, *iter)  //如果第一个元素为偶数,bool表达式不会执行，死循环，如果为奇数，iter一直指向新首元素，死循环
++iter;                               //忘记使用花括号，除非程序为空，否则程序陷入死循环
*/

#include <iostream>
#include <vector>
/*
//死循环
int main()
{
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    std::string tmp;
    while (iter != vi.end())
    {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        for (auto begin =vi.begin(); begin != vi.end(); begin++)
            std::cout << *begin << " ";
        std::cout << std::endl;
        std::cin >> tmp;
    }
    ++iter;

    return 0;
}
*/

int main()
{
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    std::string tmp;
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++iter;                     //如果不加iter使其指向原有元素，仅把外部iter移进循环体，还是会进入死循环，除非容器为空或者全是偶数
        }
        ++iter;
        for (auto begin =vi.begin(); begin != vi.end(); begin++)
            std::cout << *begin << " ";
        std::cout << std::endl;
        std::cin >> tmp;
    }
    ++iter;

    return 0;
}
