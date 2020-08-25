//时间：2019年5月11日18:31:17
//使用下标执行随机访问

#include <iostream>
#include <string>

int main()
{
    //0到15之间的十进制数转换成对应的十六进制数
    const std::string hexdigits = "0123456789ABCDEF";     //所有可能的十六进制数
    std::cout << "Enter a series of number between 0 and 15 separated by space：" << std::endl;

    std::string result;                                   //用于保存十六进制的字符串
    std::string::size_type n;                             //用于保存从输入流读取的数

    while (std::cin >> n)
        if (n <= hexdigits.size())                        //忽略无效输入
            result += hexdigits[n];

    std::cout << "Your hex number is:" << result << std::endl;

    return 0;
}
