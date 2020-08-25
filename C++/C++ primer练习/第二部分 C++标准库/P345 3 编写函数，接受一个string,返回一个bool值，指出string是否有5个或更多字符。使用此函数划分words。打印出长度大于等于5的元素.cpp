//ʱ�䣺2019��6��15��22:10:10
//��׼�ⶨ������Ϊpatition���㷨��������һ��ν�ʣ����������ݽ��л��֣�ʹ��ν��Ϊtrue��ֵ������������ǰ�벿�֣���ʹν��Ϊfalse��ֵ
//�����ں�벿�֡��㷨����һ����������ָ�����һ��ʹν��Ϊtrue��Ԫ��֮���λ��
//��д����������һ��string,����һ��boolֵ��ָ��string�Ƿ���5��������ַ���ʹ�ô˺�������words����ӡ�����ȴ��ڵ���5��Ԫ��

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
        std::cout << "�ļ���ʧ��" << std::endl;
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
    output(words.begin(), iter);              //��ɾ������С��5��Ԫ��



}
