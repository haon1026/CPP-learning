//时间：2019年6月19日13:39:02
//重写单词记数程序，使用insert代替下表操作

//使用insert操作的方式：构造一个pair(单词,1),用insert将其插入容器，返回一个pair,根据返回pair的second成员判断是否插入成功
//插入失败，需通过返回的pair的first成员（迭代器）递增已有单词的计数器

//使用下标操作的方式更简洁易读

#include <iostream>
#include <map>
#include <utility>
#include <fstream>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "输入文件打开失败！" << std::endl;
        exit(1);
    }

    std::map<std::string, size_t > word_count;    //string到count的映射
    std::string word;
    while (in >> word)
    {
        auto ret = word_count.insert({word, 1});    //插入单词，次数为1
        //pair<map<string, int>::iterator, bool> ret = word_count.insert(make_pair(word, 1));

        if (!ret.second)    //插入失败，单词已存在
        {
            ++ret.first->second;   //已有单词的出现次数加1
        }
    }

    for (const auto &c : word_count) //对map中的每个元素打印结果
    {
        std::cout << c.first << " occurs " << c.second << (c.second > 1 ? " times" : " time") << std::endl;
    }

    return 0;
}
