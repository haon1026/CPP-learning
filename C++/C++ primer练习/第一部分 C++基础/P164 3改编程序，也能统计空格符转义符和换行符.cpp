//时间：2019年5月18日15:52:16
//编写一段程序，同时统计元音字母的小写形式和大写形式
//修改程序，使其也能统计空格，制表符和换行符的数量      //继续扩充case标签，读入字符的语句应该使用cin.get(ch),而不能使用>>，因为后者会忽略掉所要统计的特殊符号
#include <iostream>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;

    std::cout << "请输入一段文本：" << std::endl;
    while (std::cin.get(ch))
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
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
        }
    }
    std::cout << "元音字母'a'的个数为：" << aCnt << std::endl;
    std::cout << "元音字母'e'的个数为：" << eCnt << std::endl;
    std::cout << "元音字母'i'的个数为：" << iCnt << std::endl;
    std::cout << "元音字母'o'的个数为：" << oCnt << std::endl;
    std::cout << "元音字母'u'的个数为：" << uCnt << std::endl;
    std::cout << "空格符' '的个数为：" << spaceCnt << std::endl;
    std::cout << "制表符'\\t'的个数为：" << tabCnt << std::endl;
    std::cout << "换行符'\\n'的个数为：" << newlineCnt << std::endl;  //不多加\输出不了\t\n

    return 0;
}
