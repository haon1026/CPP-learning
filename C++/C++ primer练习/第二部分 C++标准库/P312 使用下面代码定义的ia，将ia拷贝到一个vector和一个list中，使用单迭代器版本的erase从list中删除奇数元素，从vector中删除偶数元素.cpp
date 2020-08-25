//时间：2019年6月12日11:45:08
//使用下面代码定义的ia，将ia拷贝到一个vector和一个list中，使用单迭代器版本的erase从list中删除奇数元素，从vector中删除偶数元素
// int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

#include <iostream>
#include <vector>
#include <list>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> ivec;
    std::list<int> ilist;

    for (auto ele : ia)             //ivec.assign(ia, ia + 11);   //将数据拷贝到vector
    {                               //ilist.assign(ia, ia + 11);  //将数据源拷贝到list
        ivec.push_back(ele);
        ilist.push_back(ele);
    }
    std::cout << "vector的元素有：";
    for (auto ele : ivec)
        std::cout << ele << " ";
    std::cout << std::endl;

    std::cout << "list的元素有：";
    for (auto ele : ilist)
        std::cout << ele << " ";
    std::cout << std::endl;

    //使用while(iter != ivec,end()))
    for (auto iter = ivec.begin(); iter != ivec.end();)
    {
        if (*iter % 2 == 0)  //if(!(*iter & 1))   //偶数元素
            iter = ivec.erase(iter);              //删除偶数元素，返回下一位置迭代器
        else
            ++iter;                               //推进都下一位置
    }


    for (auto iter1 = ilist.begin(); iter1 != ilist.end();)
    {
        if (*iter1 % 2 == 1)                      //奇数
            iter1 = ilist.erase(iter1);           //删除奇数元素，返回下一位置迭代器
        else
            ++iter1;                              //推进都下一位置
    }
    std::cout << "vector的奇数元素有：";
    for (auto ele : ivec)
        std::cout << ele << " ";
    std::cout << std::endl;

    std::cout << "list的偶数元素有：";
    for (auto ele : ilist)
        std::cout << ele << " ";
    std::cout << std::endl;

    return 0;
}
