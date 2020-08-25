//时间：2019年5月19日22:23:57
//读取string对象的序列直到连续出现两个相同的单词或者所有单词都读完为止

#include <iostream>
#include <string>

int main()
{
    std::string currString, preString = "";
    bool bl = true;
    std::cout << "请输入一组字符串" << std::endl;
    while (std::cin >> currString)
    {
        if(currString == preString)
        {
            std::cout << "连续重复出现的单词是" << currString << std::endl;
            bl = false;
            break;
        }
        preString = currString;

    }
    if(bl)
    {
        std::cout << "没有任何一个单词是连续重复出现的" << std::endl;
    }


    return 0;
}
