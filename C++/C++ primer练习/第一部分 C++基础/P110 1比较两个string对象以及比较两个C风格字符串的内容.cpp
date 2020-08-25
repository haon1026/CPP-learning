//时间：2019年5月15日12:39:37
//比较两个string对象和比较两个C风格字符串

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string str1, str2;
    std::cout << "请输入两个字符串：" << std::endl;
    std::cin >> str1 >> str2;

    if (str1 > str2)
        std::cout << "第一个字符串大于第二个字符串" << std::endl;
    else if (str1 < str2)
        std::cout << "第一个字符串小于第二个字符串" << std::endl;
    else
        std::cout << "两个字符串相等" << std::endl;

    char str3[80], str4[80];
    std::cout << "请输入两个字符串：" << std::endl;
    std::cin >> str3 >> str4;
    auto result = strcmp(str3, str4);
    switch (result)
    {
    case 1:
        std::cout << "第三个字符串大于第四个字符串" << std::endl;
        break;
    case 0:
        std::cout << "第三个字符串等于第四个字符串" << std::endl;
        break;
    case -1:
        std::cout << "第三个字符串小于第四个字符串" << std::endl;
        break;
    default:
        std::cout << "未定义的结果" << std::endl;
        break;
    }

    return 0;
}
