//时间：2019年5月18日15:52:16
//编写一段程序，同时统计元音字母的小写形式和大写形式

#include <iostream>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    std::cout << "请输入一段文本：" << std::endl;
    while (std::cin >> ch)
    {
        switch (ch)
        {
            case 'a':                 //case标签必须是整形常量表达式
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        }
    }
    std::cout << "元音字母'a'的个数为：" << aCnt << std::endl;
    std::cout << "元音字母'e'的个数为：" << eCnt << std::endl;
    std::cout << "元音字母'i'的个数为：" << iCnt << std::endl;
    std::cout << "元音字母'o'的个数为：" << oCnt << std::endl;
    std::cout << "元音字母'u'的个数为：" << uCnt << std::endl;

    return 0;
}
