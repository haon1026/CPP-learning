//时间：2019年6月15日17:14:59
//测试你自己的elimDups，测试你的程序,分别在读取输入后，调用unique后以及调用erase后打印vector的内容
//编写程序，使用stable_sort和isShorter将传递给你的elimDups版本的vector排序。打印vector的内容，验证程序正确性
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>

inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

inline void output(std::vector<std::string> &svec)
{
    for (auto s : svec)
        std::cout << s << " ";
    std::cout << std::endl;
}

void elimDups(std::vector<std::string> &svec)
{
    std::sort(svec.begin(), svec.end());    //排序
    output(svec);

    auto end_unique = unique(svec.begin(), svec.end());   //重新排vector,不重复的部分出现在vector的开始部分
    output(svec);

    svec.erase(end_unique, svec.end());   //删除重复的元素
    output(svec);

    std::stable_sort(svec.begin(), svec.end(), isShorter);    //重新排序，长度 - 字典序
    output(svec);
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "打开输入文件失败" << std::endl;
        exit(-1);
    }
    std::vector<std::string> svec;
    std::string word;
    while(in >> word)
    {    svec.push_back(word);
         std::cout << word << " ";
    }
    std::cout << std::endl;

    elimDups(svec);



    return 0;
}
