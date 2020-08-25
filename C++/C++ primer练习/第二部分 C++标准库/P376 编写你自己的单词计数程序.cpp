//ʱ�䣺2019��6��18��18:05:07
//��д���Լ��ĵ��ʼ���������չ���򣬺��Դ�Сд�ͱ�㣬����example.,example��ExampleӦ�õ�����ͬ�ļ�����

#include <iostream>
#include <map>
#include <set>
#include <string>

std::string &trans(std::string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] > 'A' && s[p] < 'Z')       //��ÿ���ַ����ȼ���Ƿ�ʹ��д
            s[p] -= ('A' - 'a');            //����ǣ�����ת��ΪСд
        else if (s[p] == ',' || s[p]== '.') //����Ƿ�����
            s.erase(p, 1);                  //���ʹ������ɾ��
    }

    return s;
}

int main()
{
    std::map<std::string, size_t> word_count;       //string��size_t��ӳ��
    std::set<std::string> exclude = {"The", "But", "And", "Or", "the", "but", "or", "and"};
    std::string word;

    while (std::cin >> word)          //��ȡword�ļ������������1
    {
        if (exclude.find(word) == exclude.end())   //ֻͳ�Ʋ���exclude�еĵ���
        ++word_count[trans(word)];
    }

    for (const auto &w : word_count)   //��map�е�ÿ��Ԫ�ش�ӡ���
    {
        std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times" : " time") << std::endl;
    }

    return 0;
}
