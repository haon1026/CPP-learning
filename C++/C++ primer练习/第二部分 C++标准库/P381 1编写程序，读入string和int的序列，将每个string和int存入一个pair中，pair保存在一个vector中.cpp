//时间：2019年6月18日23:55:22
//编写程序，读入string和int的序列，将每个string和int存入一个pair中，pair保存在一个vector中

#include <iostream>
#include <vector>
#include <fstream>
#include <utility>
#include <string>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "输入文件打开失败！" << std::endl;
        exit(1);
    }

    std::vector<std::pair<std::string, int>> pvec;   //pair的vector
    std::string s;
    int v;
    while (in >> s && in >> v)      //读取一个字符串和一个整数
        //pvec.push_back(std::pair<std::string, int>(s, v));
        pvec.push_back({s, v});      //列表初始化方式
        //pvec.push_back(make_pair(s, v));   //make_pair方式
    for (const auto &d : pvec)
        std::cout << d.first << " " << d.second << std::endl;

    return 0;
}
