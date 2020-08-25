//时间：2019年6月12日21:29:23
//在本节最后一个例子中，如果不将insert的结果赋予begin,将会发生什么？编写程序，去掉赋值语句，验正

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = iv.begin();

    while (begin != iv.end())
    {
        if(*begin % 2)
        {
            ++begin;
            begin = iv.insert(begin, 42);   //不将insert()返回的迭代器赋予begin,会使begin失效，继续使用begin会导致程序崩溃
            ++begin;
        }
        else
            ++begin;
    }

    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
