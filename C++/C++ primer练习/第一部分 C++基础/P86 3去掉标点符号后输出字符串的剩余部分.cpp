//时间：2019年5月11日22:06:50
//去掉标点符号后输出字符串的剩余部分

#include <iostream>
#include <string>

int main()

{
    //利用范围for循环遍历字符串
    std::string s1, s2;
    std::cout << "请输入一个包含标点符号的字符串:" << std::endl;
    std::cin >> s1;

    for (auto c : s1)
        if (!ispunct(c))
            s2 += c;      //或者不创建s2，直接循环输出每一个c也行
    std::cout << s2 << std::endl;

    return 0;
}

/*
//  普通for循环遍历字符串
{
    std::string s, result;
    std::cout << "请输入一个包含标点符号的字符串:" << std::endl;
    std::cin >> s;
    for (decltype(s.size()) i = 0; i < s.size(); ++i)
    {
        if (!ispunct(s[i]))
            result += s[i];
    }
    std::cout << result << std::endl;

    return 0;
}
*/
