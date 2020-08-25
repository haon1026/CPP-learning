//时间：2019年5月19日19:54:20
//从标准输入中读取若干个string对象并查找连续重复出现的单词

#include <iostream>
#include <string>

int main()
{
    std::string str, maxString, preString = "\0";         //定义三个字符串变量分别表示当前操作的字符串，当前出现次数最多的字符串，前一个字符串
    int currCnt = 1, maxCnt = 0;                          //定义两个整型变量分别表示当前连续出现的字符串数量，当前出现次数最多的字符串数量
    std::cout << "请输入若干个字符串：" << std::endl;

    while (std::cin >> str)
    {
        //如果当前字符串与前一个字符串一致，更新状态
        if (str == preString)
        {
                ++currCnt;
                if (currCnt > maxCnt)
                {
                    maxCnt = currCnt;
                    maxString = preString;
                }
        }
        //如果当前字符串与前一个字符串不一致，重置currCnt
        else
        {

            currCnt = 1;
        }
        //更新preString以便于下一次循环使用
        preString = str;
    }

    if (maxCnt > 1)
        std::cout << "连续重复次数最多的字符串是：" << maxString << ",次数是：" << maxCnt << std::endl;
    else
        std::cout << "每个字符串只出现了一次" << std::endl;

    return 0;
}
