//时间：2019年6月25日11:19:03
//用allocator重写第427页中的程序

#include <iostream>
#include <memory>
#include <string>

//new
int main()
{
    int n = 100;
    std::string *const p = new std::string[n];   //构造n个空string
    std::string s;
    std::string *q = p;                     //q指向第一个string
    while (std::cin >> s && q != p + n)
    {
        *q++ = s;          //赋予*q一个新值
    }
    const size_t size = q - p;           //记住读取了多少个string
    //使用数组
    for (size_t i = 0; i < size; i++)
        std::cout << p[i] << " " << std::endl;

    delete []p;   //p指向一个数组，记得用delete[]来释放

    return 0;
}
/*
//allocator
int main()
{
    std::allocator<std::string> alloc;
    //分配100个未初始化的string
    auto const p = alloc.allocate(100);
    std::string s;
    std::string *q = p;                     //q指向第一个string
    while (std::cin >> s && q != p + 100)
    {
        alloc.construct(q++, s);          //用s初始化*q
    }
    const size_t size = q - p;           //记住读取了多少个string

    for (size_t i = 0; i < size; i++)
        std::cout << p[i] << " " << std::endl;

    while (q != p)                      //使用完毕后释放已构造的string
        alloc.destroy(--q);
    alloc.deallocate(p, 100);         //释放内存

    return 0;
}
*/
