//时间：2019年6月25日13:10:27
//编写TextQuery类和QueryResult类

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <memory>

using namespace std;

class QueryResult;  //为了定义函数query的返回类型，这个定义是必须的
class TextQuery
{
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> file;    //输入文件
    map<string, shared_ptr<set<line_no>>> wm;
};

//读取输入文件并建立单词到行号的映射
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text))   //对文件中的每一行
    {
        file->push_back(text);   //保存此行文本
    }
    int n = file->size() - 1;    //当前行号
    istringstream line(text);    //将文本分解为单词
    string word;
    while (line >> word)   //对行中的每个单词，如果单词不在wm中，以之为下标在wm中添加一项
    {
        auto &lines = wm[word];   //lines是一个shared_ptr
        if (!lines)     //在我们第一次遇到这个单词时，此指针为空
            lines.reset(new set<line_no>);   //分配一个新的set
        lines->insert(n);   //将此行号插入set中
    }
}

class QueryResult
{
    using line_no = vector<string>::size_type;
    friend ostream &print(ostream &, const QueryResult&);
public:
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f) : sought(s), lines(p), file(f) {}

private:
    string sought;    //查询单词
    shared_ptr<set<line_no>> lines;   //出现的行号
    shared_ptr<vector<string>> file;  //输入文件
};

QueryResult TextQuery::query(const string &sought) const
{
    //如果没找到sought，我们将返回一个指向此set的指针
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    //使用find而不是下标运算符来查找单词，避免将单词添加到wm中
    auto loc = wm.find(sought);
    if (loc == wm.end())
    {
        return QueryResult(sought, nodata, file);
    }
    else
        return QueryResult(sought, loc->second, file);
}

string make_plural(size_t ctr, const string &word, const string &ending)
{
    return (ctr > 1) ? word + ending : word;
}

ostream &print(ostream &os, const QueryResult &qr)
{
    //如果找到了单词，打印出现次数和所有出现的位置
    os << qr.sought << " occurs " << qr.lines->size() << " " << make_plural(qr.lines->size(), "time", "s") << std::endl;
    //打印单词出现的每一行
    for (auto num : *qr.lines)   //对set中每个单词
         os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
    return os;
}
