//时间：2019年5月11日13:20:45
//字符串的拼接

#include <iostream>
#include <string>

int main()
{
    char ch = 'y';
    std::string s, result;

    std::cout << "请输入第一个字符串：" << std::endl;
    while (std::cin >> s)
    {
        result += s;
/*
        //空格隔开字符串方式1
        if(!result.size())
            result += s;
        else
            result = result + " " + s;
*/
        std::cout << "是否继续（y or n）?" << std::endl;
        std::cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            //result = result + " ";        空格隔开字符串方式2
            std::cout << "请输入下一个字符串：" <<std::endl;
        }
        else
            break;
    }
    std::cout << "拼接后的字符串是：" << result << std::endl;

    return 0;
}
