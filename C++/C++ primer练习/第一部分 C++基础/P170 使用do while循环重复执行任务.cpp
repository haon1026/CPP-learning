//时间：2019年5月19日21:23:24
//使用do while循环重复执行任务：首先提示用户输入两个string对象，然后挑出较短的并输入

#include <iostream>
#include <string>

int main()
{
    do
    {
        std::cout << "请输入两个字符串：" << std::endl;
        std::string str1, str2;
        std::cin >> str1 >> str2;
        if (str1.size() > str2.size())
            std::cout << "较短的字符串是：" << str2 << std::endl;
        else if(str1.size() < str2.size())
            std::cout << "较短的字符串是：" << str1 << std::endl;
        else
            std::cout << "两个字符串等长" << std::endl;

    }while(std::cin);

    return 0;
}
