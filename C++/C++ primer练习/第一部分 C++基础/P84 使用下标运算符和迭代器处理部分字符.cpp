//时间：2019年5月11日16:35:10
//使用下标运算符和迭代器处理部分字符

#include <iostream>
#include <string>

int main()
{
    std::string s("hello World");

    //字符串非空则输出首字符
    if (!s.empty())                             //任意时刻对指定字符访问，首先检查是否为空
        std::cout << s[0] << std::endl;         //下标索引[]接受的输入参数是string::size_type类型的值，如果是带符号类型的值将会自动转换左边类型的无符号类型

    //字符串非空则首字符变成大写
    if (!s.empty())
        s[0] = toupper(s[0]);                   //s[0]返回的是该位置上字符的引用，下标必须大于等于0而小于s.size()
    std::cout << s << std::endl;

    //字符串的第一个词改写成大写形式
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)     //下标必须大于等于0而小于s.size()，可设下标类型为string::size_type，变成无符号类型
        s[index] = toupper(s[index]);                                                        //可以确保小标不会小于0，只需保证下标小于size()的值就可以了
    std::cout << s << std::endl;

    return 0;
}
