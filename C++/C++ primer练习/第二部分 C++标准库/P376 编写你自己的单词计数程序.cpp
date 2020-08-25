//时间：2019年6月18日18:05:07
//编写你自己的单词计数程序，扩展程序，忽略大小写和标点，例如example.,example和Example应该递增相同的计数器

#include <iostream>
#include <map>
#include <set>
#include <string>

std::string &trans(std::string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] > 'A' && s[p] < 'Z')       //对每个字符首先检查是否使大写
            s[p] -= ('A' - 'a');            //如果是，将其转化为小写
        else if (s[p] == ',' || s[p]== '.') //检查是否带标点
            s.erase(p, 1);                  //如果使，将其删除
    }

    return s;
}

int main()
{
    std::map<std::string, size_t> word_count;       //string到size_t的映射
    std::set<std::string> exclude = {"The", "But", "And", "Or", "the", "but", "or", "and"};
    std::string word;

    while (std::cin >> word)          //提取word的计数器并将其加1
    {
        if (exclude.find(word) == exclude.end())   //只统计不在exclude中的单词
        ++word_count[trans(word)];
    }

    for (const auto &w : word_count)   //对map中的每个元素打印结果
    {
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;
    }

    return 0;
}
