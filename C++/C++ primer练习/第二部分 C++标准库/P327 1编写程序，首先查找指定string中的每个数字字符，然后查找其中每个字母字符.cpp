//时间：2019年6月13日17:29:08
//编写程序，首先查找string"ab2c3d7R4E6"中的每个数字字符，然后查找其中每个字母字符
//编写两个版本的程序，第一个要使用find_first_of,第二个要使用find_first_not_of

#include <iostream>
#include <string>

/*//find_first_of
int main()
{
    std::string s1 = {"ab2c3d7R4E6"};
    std::string s2 = {"1234567890"};
    std::string s3 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string::size_type pos = 0;
    while ((pos = s1.find_first_of(s2, pos)) != std::string::npos)
    {
        std::cout << "找到数字字符，在位置" << pos
                  << "数字是" << s1[pos] << std::endl;
        ++pos;
    }
    pos = 0;
    while ((pos = s1.find_first_of(s3, pos)) != std::string::npos)
    {
        std::cout << "找到数字字符，在位置" << pos
                  << "数字是" << s1[pos] << std::endl;
        ++pos;
    }

    return 0;
}
*/
/*
void find_char(std::string &s, const std::string &chars)
{
    std::cout << "在" << s << "中查找" << chars << "中字符" << std::endl;
    std::string::size_type pos = 0;
    while ((pos = s.find_first_of(chars, pos)) != std::string::npos)
    {
        //找到字符
        std::cout << "pos:" << pos << ", char:" << s[pos] << std::endl;
        pos++;    //移动到下一字符
    }
}

int main()
{
    std::string s = "ab2c3d7R4E6";
    std::cout << "查找所有数字：" << std::endl;
    find_char(s, "0123456789");
    std::cout << std::endl << "查找所有字母" << std::endl;
    find_char(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
}
*/
//find_first_not_of
void find_not_char(std::string &s, const std::string &chars)
{
    std::cout << "在" << s << "中查找不在" << chars << "中字符" << std::endl;
    std::string::size_type pos = 0;
    while ((pos = s.find_first_not_of(chars, pos)) != std::string::npos)
    {
        //找到字符
        std::cout << "pos:" << pos << ", char:" << s[pos] << std::endl;
        pos++;    //移动到下一字符
    }
}

int main()
{
    std::string s = "ab2c3d7R4E6";
    std::cout << "查找所有数字：" << std::endl;
    find_not_char(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::cout << std::endl << "查找所有字母" << std::endl;
    find_not_char(s, "0123456789");
}
