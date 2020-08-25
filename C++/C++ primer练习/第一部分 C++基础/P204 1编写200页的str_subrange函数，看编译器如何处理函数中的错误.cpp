//时间：2019年5月28日21:43:44
//编写200页的str_subrange函数，看编译器如何处理函数中的错误

#include <iostream>

bool str_subrange(const std::string &str1, const std::string &str2)
{
    //大小相同：此时用普通的相等性判断结果作为返回值
    if (str1.size() == str2.size())
        return str1 == str2;         //正确：==运算符返回布尔值
    //得到较短string对象的大小
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    //检查两个string对象的对应字符是否相等，以较短的字符串长度为限
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] == str2[i])
            return;                  //错误#1：没有返回值，编译器将报错   #2：控制流可能尚未返回任何值就结束了函数的执行，编译器可能检查不出这一错误
    }
}
