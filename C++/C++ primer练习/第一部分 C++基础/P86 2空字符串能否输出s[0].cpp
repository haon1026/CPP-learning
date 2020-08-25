//时间：2019年5月11日21:55:40
//空字符串能否输出s[0]

#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cout << s[0] << std::endl;
    return 0;
}

//原意是输出字符串s的首字符，但程序是错误的。因为初始状态下没有给s赋任何初值
//所以字符串s的内容为空，当然也就不存在首字符，下标0是非法的。
//但在某些编译器环境中，上述语句并不会引发编译错误。
