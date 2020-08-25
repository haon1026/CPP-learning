//时间：2019年6月15日22:10:10
//标准库定义了名为patition的算法，它接受一个谓词，对容器内容进行划分，使得谓词为true的值会排在容器的前半部分，而使谓词为false的值
//会排在后半部分。算法返回一个迭代器，指向最后一个使谓词为true的元素之后的位置
//编写函数，接受一个string,返回一个bool值，指出string是否有5个或更多字符。使用此函数划分words。打印出长度大于等于5的元素

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

inline void output(std::vector<std::string>::iterator beg, std::vector<std::string>::iterator end)
{
    for (auto iter = beg; iter != end; ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;
}

inline bool five_or_more(const std::string &s)
{
    if (s.size() >= 5)
        return true;
    else
        return false;
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "文件打开失败" << std::endl;
        exit(1);
    }

    std::vector<std::string> words;
    std::string word;
    while (in >> word)
    {
        words.push_back(word);
    }

    output(words.begin(), words.end());
    auto iter = std::partition(words.begin(), words.end(), five_or_more);
    output(words.begin(), words.end());
    output(words.begin(), iter);              //不删除长度小于5的元素



}
