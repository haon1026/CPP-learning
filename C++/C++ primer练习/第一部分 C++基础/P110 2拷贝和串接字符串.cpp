//时间：2019年5月15日12:53:05
//拷贝和拼接字符串

#include <iostream>
#include <cstring>

int main()
{
    char str1[] = "Welcome";
    char str2[] = "to China";
    char str3[50] = {0};
    strcat(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    std::cout << str3 << std::endl;


    char result[strlen(str1) + strlen(str2) -1];   //利用strlen函数计算两个字符串的长度，并求得结果字符串的长度
    strcpy(result, str1);             //拷贝
    strcat(result, " ");
    strcat(result, str2);             //拼接

    std::cout << "第一个字符串是：" << str1 << std::endl;
    std::cout << "第二个字符串是：" << str2 << std::endl;
    std::cout << "拼接后的字符串是：" << result << std::endl;
    return 0;
}
