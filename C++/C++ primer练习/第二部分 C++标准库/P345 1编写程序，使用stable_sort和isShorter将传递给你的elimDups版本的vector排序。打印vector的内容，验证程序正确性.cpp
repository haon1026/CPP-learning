//ʱ�䣺2019��6��15��17:14:59
//�������Լ���elimDups��������ĳ���,�ֱ��ڶ�ȡ����󣬵���unique���Լ�����erase���ӡvector������
//��д����ʹ��stable_sort��isShorter�����ݸ����elimDups�汾��vector���򡣴�ӡvector�����ݣ���֤������ȷ��
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
    std::sort(svec.begin(), svec.end());    //����
    output(svec);

    auto end_unique = unique(svec.begin(), svec.end());   //������vector,���ظ��Ĳ��ֳ�����vector�Ŀ�ʼ����
    output(svec);

    svec.erase(end_unique, svec.end());   //ɾ���ظ���Ԫ��
    output(svec);

    std::stable_sort(svec.begin(), svec.end(), isShorter);    //�������򣬳��� - �ֵ���
    output(svec);
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "�������ļ�ʧ��" << std::endl;
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
