//2019年6月15日10:19:37
//头文件algorithm中定义了一个名为count的函数，它类似find，接受一对迭代器和一个值作为参数。count返回给定值在序列中出现的次数
//编写程序，读取int序列存入vector中，打印有多少个元素的值等于给定值

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
    std::cout << "请输入若干个整数:" << std::endl;
    std::vector<int> iv;
    int i;
    while (std::cin >> i)
    {
        iv.push_back(i);
    }
    std::cin.clear(); //更改cin的状态标识
    std::cin.sync();  //清除缓存区的数据流
    std::cout << "请输入要搜索的整数：";
    int val;
    std::cin >> val;
    std::cout << "iv中有"<< count(iv.begin(), iv.end(), val) << "个" << val << std::endl;

/*  //如果指定要找的数，这几行是接在while循环后，需改变cin状态才能继续输入，  答案是从外文件读入
    //因为遇到结束符或者错误输入导致cin状态改变了，需更改
    std::cout << "cin.eof():" << std::cin.eof() << std::endl << "cin.fail():" << std::cin.fail() << std::endl;   //查看cin的状态标识
    std::cin.clear(); //更改cin的状态标识
    std::cin.sync();  //清除缓存区的数据流
    std::cout << "cin.eof():" << std::cin.eof() << std::endl << "cin.fail():" << std::cin.fail() << std::endl;   //查看cin的状态标识
*/
    std::cout << "请输入若干个字符串:" << std::endl;
    std::list<std::string> sl;
    std::string s;
    while (std::cin >> s)
    {
        sl.push_back(s);
    }
    std::cin.clear(); //更改cin的状态标识
    std::cin.sync();  //清除缓存区的数据流
    std::cout << "请输入要搜索的字符串：";
    std::string word;
    std::cin >> word;
    std::cout << "sl中有"<< count(sl.begin(), sl.end(), word) << "个" << word << std::endl;
    return 0;
}
