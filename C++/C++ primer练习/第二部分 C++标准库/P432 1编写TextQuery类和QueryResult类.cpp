//ʱ�䣺2019��6��25��13:10:27
//��дTextQuery���QueryResult��

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <memory>

using namespace std;

class QueryResult;  //Ϊ�˶��庯��query�ķ������ͣ���������Ǳ����
class TextQuery
{
public:
    using line_no = vector<string>::size_type;
    TextQuery(ifstream &);
    QueryResult query(const string &) const;

private:
    shared_ptr<vector<string>> file;    //�����ļ�
    map<string, shared_ptr<set<line_no>>> wm;
};

//��ȡ�����ļ����������ʵ��кŵ�ӳ��
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
    string text;
    while (getline(is, text))   //���ļ��е�ÿһ��
    {
        file->push_back(text);   //��������ı�
    }
    int n = file->size() - 1;    //��ǰ�к�
    istringstream line(text);    //���ı��ֽ�Ϊ����
    string word;
    while (line >> word)   //�����е�ÿ�����ʣ�������ʲ���wm�У���֮Ϊ�±���wm�����һ��
    {
        auto &lines = wm[word];   //lines��һ��shared_ptr
        if (!lines)     //�����ǵ�һ�������������ʱ����ָ��Ϊ��
            lines.reset(new set<line_no>);   //����һ���µ�set
        lines->insert(n);   //�����кŲ���set��
    }
}

class QueryResult
{
    using line_no = vector<string>::size_type;
    friend ostream &print(ostream &, const QueryResult&);
public:
    QueryResult(string s, shared_ptr<set<line_no>> p, shared_ptr<vector<string>> f) : sought(s), lines(p), file(f) {}

private:
    string sought;    //��ѯ����
    shared_ptr<set<line_no>> lines;   //���ֵ��к�
    shared_ptr<vector<string>> file;  //�����ļ�
};

QueryResult TextQuery::query(const string &sought) const
{
    //���û�ҵ�sought�����ǽ�����һ��ָ���set��ָ��
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    //ʹ��find�������±�����������ҵ��ʣ����⽫������ӵ�wm��
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
    //����ҵ��˵��ʣ���ӡ���ִ��������г��ֵ�λ��
    os << qr.sought << " occurs " << qr.lines->size() << " " << make_plural(qr.lines->size(), "time", "s") << std::endl;
    //��ӡ���ʳ��ֵ�ÿһ��
    for (auto num : *qr.lines)   //��set��ÿ������
         os << "\t(line " << num + 1 << ") " << *(qr.file->begin() + num) << endl;
    return os;
}
