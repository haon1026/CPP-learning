//时间：2019年5月18日16:51:23
//改编程序，使其能统计两个字符的字符序列的数量

#include <iostream>

int main()

{
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';

    std::cout << "请输入一段文本：" << std::endl;
    while (std::cin >> ch)
    {
        bool bl = true;
        if (prech == 'f')
        {
            switch (ch)
            {
                case 'f':                 //case标签必须是整形常量表达式
                    ++ffCnt;
                    bl = false;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;

            }
        }
        if (!bl)
            prech = '\0';
        else
            prech = ch;
    }
    std::cout << "字符序列ff的个数为：" << ffCnt << std::endl;
    std::cout << "字符序列fl的个数为：" << flCnt << std::endl;
    std::cout << "字符序列fi的个数为：" << fiCnt << std::endl;

    return 0;
}

/*
{
    //这种方法是否满足
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;

    std::cout << "请输入一段文本：" << std::endl;
    while (std::cin >> ch)
    {
        if (ch == 'f')
        {
            switch (ch = std::cin.get())
            {
                case 'f':                 //case标签必须是整形常量表达式
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;

            }
        }

    }
    std::cout << "字符序列ff的个数为：" << ffCnt << std::endl;
    std::cout << "字符序列fl的个数为：" << flCnt << std::endl;
    std::cout << "字符序列fi的个数为：" << fiCnt << std::endl;

    return 0;
}
*/
