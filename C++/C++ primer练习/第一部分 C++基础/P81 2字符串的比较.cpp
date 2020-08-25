//时间：2019年5月11日13:06:25
//字符串的比较

#include <iostream>
#include <string>

int main()
{
    //比较字符串大小
    std::string s1, s2;
    std::cout << "请输入两个字符串:" << std::endl;
    std::cin >> s1 >> s2;

    if (s1 == s2)
        std::cout << "两个字符串相等" << std::endl;
    else if (s1 > s2)
        std::cout << s1 << "大于" << s2 << std::endl;
    else
        std::cout << s2 << "大于" << s1 << std::endl;

    //比较字符串长度的大小
    auto len1 = s1.size();
    auto len2 = s2.size();     //len的类型是string::size_type

    if (len1 == len2)
        std::cout << s1 << " 和 " << s2 << " 的长度都是 " << len1 << std::endl;
    else if (len1 > len2)
        std::cout << s1 << " 比 " << s2 << " 的长度多 " << len1-len2 << std::endl;
    else
        std::cout << s1 << " 比 " << s2 << " 的长度小 " << len2-len1 << std::endl;

    return 0;
}
