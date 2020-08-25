//时间：2019年5月13日17:12:44
//使用迭代器实现二分搜索

#include <iostream>
#include <vector>

int main()
{
    std::vector<int>  v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             //二分搜索是从有序序列中寻找

    auto beg = v.begin(), end = v.end();
    auto mid = v.begin() + (end - beg) / 2;             //初始状态下的中间点
    std::cout << "请输入你要查找的数:";
    int n;
    std::cin >> n;                                     //想要查找的数

    //当还有元素尚未检查并且还没有找到n时执行循环        在范围不为空的情况下（第一次执行时两者mid!=end），如果一直没有找到n，最后mid会等于n
    while (mid != end && *mid != n)                    //1.搜索范围为空   2.搜索范围不为空，判断*mid，   3.*mid！=n则循环    4.循环终止时mid或者等于end或者指向要找的元素，此时mid=end说明没有要找的元素
    {
        if (*mid > n)                                  //要找的部分在前半部分？
            end = mid;                                 //如果是，调整搜索范围使得忽略后半部分
        else                                           //在后半部分
            beg = mid + 1;                             //在mid之后寻找,因为mid不是我们要找的n
        mid = beg + (end - beg) / 2;                   //新的中间点
    }
    std::cout << *mid << std::endl;

    return 0;
}
