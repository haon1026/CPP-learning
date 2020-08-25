//时间：2019年6月13日22:51:15
//如果一个字母延伸到中线之上如d或f，则称其有上出头部分，如果一个字母延伸到中线之下，如p或g,称其有下出头部分
//编写程序，读入一个单词文件，输出最长的既不包含上出头部分，也不包含下出头部分的单词

#include <iostream>
#include <string>
#include <fstream>

void find_longest_word(std::ifstream &in)
{
    std::string s, longest_word;
    int max_length = 0;

    while (in >> s)
    {
        if(s.find_first_of("bdfghjklpqty") != std::string::npos)
            continue;        //包含上出头或下出头字母
        std::cout << s << " ";
        if (max_length < s.size())
        {
            //新单词更长
            max_length = s.size();    //记录长度和单词
            longest_word = s;
        }
    }
    std::cout << std::endl << "最长字符串：" << longest_word << std::endl;
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);    //打开文件
    if(!in)
    {
        std::cerr << "输入文件打开错误！" << std::endl;
        return -1;
    }

    find_longest_word(in);

    return 0;
}
