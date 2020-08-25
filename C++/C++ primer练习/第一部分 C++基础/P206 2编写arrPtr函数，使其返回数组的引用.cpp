//时间：2019年5月29日11:58:25
//编写arrPtr函数，使其返回数组的引用

#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
                                            //如果要返回指向含有5个整数的数组的指针函数名前的&改*，return odd和even加取地址符&
decltype(odd) &arrPtr(int i)       //返回一个引用，该引用所引的对象是一个含有5个整数的数组
{
    return (i % 2) ? odd : even;   //返回数组的引用
}

int main()
{
    for (auto c : arrPtr(10))
        std::cout << c << " ";
    std::cout << std::endl;
    return 0;
}


