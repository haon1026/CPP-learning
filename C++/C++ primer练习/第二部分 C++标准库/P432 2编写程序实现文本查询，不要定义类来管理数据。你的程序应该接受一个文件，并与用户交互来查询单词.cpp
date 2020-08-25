//时间：2019年6月25日05:34:02
//编写程序实现文本查询，不要定义类来管理数据。你的程序应该接受一个文件，并与用户交互来查询单词，
//使用vector,map,set容器来保存来自文件的数据并生成查询结果

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <string>

#include <cstdlib>  //要使用EXIT_FAILURE

using namespace std;

using line_no = vector<string>::size_type;

vector<string> file;             //文件每行内容
map<string, set<line_no>> wm;    //单词到行号set的映射

string cleanup_str(const string &word)
{
    string ret;
    for (auto it = word.begin(); it != word.end(); ++it)    //遍历单词中的每个字符
    {
        if (!ispunct(*it))            //如果为标点符号就跳过
            ret += tolower(*it);     //把非标点符号外的字符都变成小写字母
    }
    return ret;
}

void input_text(ifstream &is)
{
    string text;
    while (getline(is, text))    //对文件中每一行
    {
        file.push_back(text);    //保存此行文本
        int n = file.size() - 1;  //当前行号
        istringstream line(text);   //将行文本分解为单词
        string word;
        while (line >> word)    //d对行中每个单词
        {
            //将当前行号插入到其行号set中
            //如果单词不在wm中，以之为下标在wm中添加一项
            wm[cleanup_str(word)].insert(n);
        }
    }
}

ostream &query_and_print(const string &sought, ostream &os)
{
    //使用find而不是下标运算符来查找单词，避免将单词添加到wm中
    auto loc = wm.find(sought);
    if (loc == wm.end())         //未找到
    {
        os << sought << "出现了0次" << endl;
    }
    else
    {
        auto lines = loc->second;     //行号set
        os << sought << "出现了" << lines.size() << "次" << endl;
        for (auto num : lines)
        {
            os << "\t(第" << num + 1 << "行) " << *(file.begin() + num) << endl;
        }
    }

    return os;
}

void runQueries(ifstream &infile)
{
    //infile是一个ifstream,指向我们要查询的文件
    input_text(infile);      //读入文本并建立查询map
    //与用户交互：提示用户输入要查询的单词，完成查询并打印结果
    while (true)
    {
        cout << "enter word to look for, or q to quit:";
        string s;
        //若遇到文件尾或用户输入了q时循环终止
        if (!(cin >> s) || s == "q")
            break;
        //指向查询并打印结果
        query_and_print(s, cout) << endl;
    }
}

//本程序接受唯一的命令行参数，表示文本文件名
int main(int argc, char **argv)
{
    //打开要查询的文件
    ifstream infile;
    //打开文件失败，程序异常退出
    if (argc < 2 || !(infile.open(argv[1]), infile))
    {
        cerr << "No input file!" << endl;
        return EXIT_FAILURE;
    }
    runQueries(infile);
    return 0;
}
