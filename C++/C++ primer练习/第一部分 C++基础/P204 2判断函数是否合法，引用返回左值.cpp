//时间：2019年5月28日22:10:43
//判断函数是否合法，引用返回左值

#include <iostream>

int &get(int *arry, int index)    //引用的对象是arry数组的某个元素
{
    return arry[index];
}

int main()
{
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia,i) = i;               //每次循环使用get函数得到数组ia中第i个元素的引用，为该引用赋值i

    //书本例子分界线
    for (auto c : ia)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
