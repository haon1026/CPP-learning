//时间：2019年6月10日17:29:54
//重写上一题的程序，比较一个list<int>中的元素和一个vector<int>中的元素

#include <iostream>
#include <list>
#include <vector>

bool l_v_equal(std::vector<int> &ivec, std::list<int> &ilist)
{
    if (ivec.size() != ilist.size())    //比较list和vector元素个数
        return false;

    auto lb = ilist.begin();        //list首元素
    auto le = ilist.end();          //list尾后元素
    auto vb = ivec.begin();         //vector首元素

    for (; lb != le; ++lb, ++vb)
        if(*lb != *vb)
              return false;        //元素不等，容器不等
    return true;          //容器相等
}

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::list<int> ilist1 = {1, 2, 3, 4, 5};
    std::list<int> ilist2 = {1, 2, 3, 4, 5, 6, 8};
    std::list<int> ilist3 = {1, 2, 3, 4, 5, 7, 6};

    std::cout << l_v_equal(ivec, ilist) << std::endl;
    std::cout << l_v_equal(ivec, ilist1) << std::endl;
    std::cout << l_v_equal(ivec, ilist2) << std::endl;
    std::cout << l_v_equal(ivec, ilist3) << std::endl;

    return 0;
}

//其他解题思路：通过范围初始化创建一个与list<int>内容相同的vector<int>，然后用==运算符比较
//优点：直接利用标准库的功能实现，比较简单，且不必尾不同容器类型实现不同的版本，但创建容器的临时拷贝会
//占用额外的内存，且需要额外时间拷贝数据
