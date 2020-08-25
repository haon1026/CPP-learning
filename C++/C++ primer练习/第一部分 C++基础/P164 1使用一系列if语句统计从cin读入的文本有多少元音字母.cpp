//时间：2019年5月18日15:29:12
//使用一系列if语句统计从cin读入的文本有多少元音字母

#include <iostream>
#include <string>

int main()
{
    //std::string word;
    char ch;
    int vowelCnt = 0;
    std::cout << "请输入一段文本：" << std::endl;
    while (std::cin >> ch)       //while (std::cin >> word)， 可以一个个字符读取，也可以读取一个字符串在遍历
        //for (auto c : word)
        {
            if (ch == 'a')       //如果是读取一个字符串,则ch 改为c进行范围for循环
                ++vowelCnt;
            else if (ch == 'e')
                ++vowelCnt;
            else if (ch == 'i')
                ++vowelCnt;
            else if (ch == 'o')
                ++vowelCnt;
            else if (ch == 'u')
                ++vowelCnt;
        }

    std::cout << "您输入的文本中一共有 " << vowelCnt << " 个元音字母" << std::endl;


    return 0;
}
