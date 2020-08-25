//ʱ�䣺2019��6��18��22:42:14
//����һ��map,��������һ���кŵ�list������list�б�����ǵ��������ֵ��к�

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
        std::cout << "�������ļ�ʧ�ܣ�" << std::endl;
        exit(1);
    }

    std::map<std::string, std::list<int>> word_lineno;   //���ʵ��кŵ�ӳ��
    std::string line;
    std::string word;
    int lineno = 0;
    while (getline(in, line))   //��ȡһ��
    {
        lineno++;       //�кŵ���
        std::istringstream l_in(line);    //�����ַ���������ȡ����
        while (l_in >> word)
        {
            trans(word);
            word_lineno[word].push_back(lineno);  //����к�
        }
    }

    for (const auto &w : word_lineno)    //��ӡ�����к�
    {
        std::cout << w.first << "�����У�";
        for (const auto &i : w.second)
            std::cout << i << " ";
        std::cout << std::endl;
    }

    return 0;
}
