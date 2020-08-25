//时间：2019年5月11日12:47:02
//string类的输入运算符和getline函数分别是如何处理空白字符

#include <iostream>
#include <string>

int main()
{
    std::string word, line;
    std::cout << "请选择读取字符串的方式：1表示逐词读取，2表示整行读取" << std::endl;
    char ch;
    std::cin >> ch;

    //清空输入缓冲区
    std::cin.clear();
    std::cin.sync();

    if (ch == '1')
    {
        std::cout << "请输入字符串：   Welcome to C++ family!   " << std::endl;
        std::cin >> word;
        std::cout << "系统读取的有效字符是：" << std::endl;
        std::cout << word << std::endl;

        return 0;
    }

    //清空输入缓冲区
   // std::cin.clear();         //思考清空输入缓冲区的两句放在第一个if前和第二个if前的区别
   // std::cin.sync();

    if (ch == '2')
    {
        std::cout << "请输入字符串：   Welcome to C++ family!   " << std::endl;
        getline(std::cin, line);
        std::cout << "系统读取的有效字符串是：" << std::endl;
        std::cout << line << std::endl;

        return 0;
    }

    std::cout << "您的输入有误！";

    return -1;
}
