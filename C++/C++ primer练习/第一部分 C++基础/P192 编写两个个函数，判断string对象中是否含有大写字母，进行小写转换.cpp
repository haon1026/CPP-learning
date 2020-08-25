//时间：2019年5月24日11:38:39
//编译一个函数，判断string对象中是否含有大写字母
//编写另一个函数，把string对象全都改成小写形式

#include <iostream>
#include <string>

bool HasUpper(const std::string &);
void ChangeToLower(std::string &);

int main()
{
    std::cout << "请输入一个字符串：" << std::endl;
    std::string str;
    std::cin >> str;
    if(HasUpper(str))
    {
        std::cout << "字符串中含有大写字母" << std::endl;
        ChangeToLower(str);
        std::cout << "把字符串进行小写转换后为:" <<  str << std::endl;
    }
    else
        std::cout << "字符串中不含有大写字母" << std::endl;

    return 0;
}

bool HasUpper(const std::string &s)
{
    for (std::string::size_type i = 0; i != s.size(); ++i)
    {
        if (isupper(s[i]))
            return true;
    }
    return false;

}

void ChangeToLower(std::string &s)
{
    for (auto &c : s)
        c = tolower(c);
}
