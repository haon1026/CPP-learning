//时间：2019年6月18日22:42:14
//定义一个map,将单词与一个行号的list关联，list中保存的是单词所出现的行号

#include <iostream>
#include <map>
#include <list>
#include <fstream>
#include <sstream>
#include <algorithm>

std::string &trans(std::string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] >= 'A' && s[p]<= 'Z')
            s[p] -= 'A' - 'a';
        else if (s[p] == ',' || s[p] == '.')
            s.erase(p, 1);
    }

    return s;
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "打开输入文件失败！" << std::endl;
        exit(1);
    }

    std::map<std::string, std::list<int>> word_lineno;   //单词到行号的映射
    std::string line;
    std::string word;
    int lineno = 0;
    while (getline(in, line))   //读取一行
    {
        lineno++;       //行号递增
        std::istringstream l_in(line);    //构造字符串流，读取单词
        while (l_in >> word)
        {
            trans(word);
            word_lineno[word].push_back(lineno);  //添加行号
        }
    }

    for (const auto &w : word_lineno)    //打印单词行号
    {
        std::cout << w.first << "所在行：";
        for (const auto &i : w.second)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    return 0;
}
