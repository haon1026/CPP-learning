//时间：2019年6月13日13:37:52
//编写一个函数，接受三个string参数s,oldVal和newVal，使用迭代器及insert和erase函数将s中所有oldVal替换为newVal。
//测试你的程序，用它替换通用的简写形式，如，将“tho”替换为“though”，将”thru“替换为”through“

#include <iostream>
#include <string>

void func(std::string &s, const std::string &oldVal, const std::string &newVal)
{
    auto l = oldVal.size();
    if (!l)                     //要查找的字符串为空
        return;

    auto iter = s.begin();
    while (iter <= s.end()-1)    //末尾少于oldVal长度的部分无须检查
    {
        auto iter1 = iter;
        auto iter2 = oldVal.begin();
        //s中iter开始的子串必须每个字符都与oldVal相同
        while (iter2 != oldVal.end() && *iter1 == *iter2)
        {
            iter1++;
            iter2++;
        }
        if (iter2 == oldVal.end())     //oldVal耗尽---字符串相等
        {
            iter = s.erase(iter, iter1);  //删除s中与oldVal相等部分
            if (newVal.size())         //替换子串是否为空
            {
                iter2 = newVal.end();  //由后至前逐个插入newVal中的字符
                do
                {
                    iter2--;
                    iter = s.insert(iter, *iter2);
                }while (iter2 > newVal.begin());
            }
            iter += newVal.size();      //迭代器移动到新插入内容之后
        }
        else
            iter++;
    }
}

int main()
{
    std::string s = {"tho thru tho！"};
    func(s, "thru", "through");
    std::cout << s << std::endl;

    func(s, "tho", "though");
    std::cout << s << std::endl;

    func(s, "through", "");
    std::cout << s << std::endl;

    return 0;
}
