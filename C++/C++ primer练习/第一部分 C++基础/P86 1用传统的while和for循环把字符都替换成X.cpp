//时间：2019年5月11日21:22:13
//用传统的while和for循环改写上例程序

#include <iostream>
#include <string>

int main()
{   /*
    //传统的while循环改写
    std::string s;
    std::cout << "请输入一个字符串，可以包含空格：" << std::endl;
    getline(std::cin, s);
    int i = 0;               //整型i等于0，转换成无符号型也还是0

    while (s[i] != '\0')     //'\0'是字符串结束标志，不是空格                  // 思考？输入空字符串为什么也能输出空，意味着s[0]=='\0',string字符串带结束符'\0'吗？
    {                                                                          // 结合P86下一题
        s[i] = 'X';
        ++i;
    }
    std::cout << s << std::endl;
    */

    //传统的for循环改写
    std::string s;
    std::cout << "请输入一个字符串，可以包含空格：" << std::endl;
    getline(std::cin, s);
    for (unsigned int i = 0; i < s.size(); i++)
    {
        s[i] = 'X';
    }
    std::cout << s << std::endl;

    return 0;
}
