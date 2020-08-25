//时间：2019年5月18日11:03:53
//语句作用域

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5,6};
    //寻找第一个负值元素
    auto beg = v.cbegin();

    while (beg != v.cend() && *beg >= 0)
        ++beg;
    if (beg == v.cend())
        //此时可知v中所有的元素都大于等于0

    return 0;
}
