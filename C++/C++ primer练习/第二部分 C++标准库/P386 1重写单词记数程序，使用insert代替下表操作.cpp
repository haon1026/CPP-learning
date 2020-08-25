//ʱ�䣺2019��6��19��13:39:02
//��д���ʼ�������ʹ��insert�����±����

//ʹ��insert�����ķ�ʽ������һ��pair(����,1),��insert�����������������һ��pair,���ݷ���pair��second��Ա�ж��Ƿ����ɹ�
//����ʧ�ܣ���ͨ�����ص�pair��first��Ա�����������������е��ʵļ�����

//ʹ���±�����ķ�ʽ������׶�

#include <iostream>
#include <map>
#include <utility>
#include <fstream>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "�����ļ���ʧ�ܣ�" << std::endl;
        exit(1);
    }

    std::map<std::string, size_t > word_count;    //string��count��ӳ��
    std::string word;
    while (in >> word)
    {
        auto ret = word_count.insert({word, 1});    //���뵥�ʣ�����Ϊ1
        //pair<map<string, int>::iterator, bool> ret = word_count.insert(make_pair(word, 1));

        if (!ret.second)    //����ʧ�ܣ������Ѵ���
        {
            ++ret.first->second;   //���е��ʵĳ��ִ�����1
        }
    }

    for (const auto &c : word_count) //��map�е�ÿ��Ԫ�ش�ӡ���
    {
        std::cout << c.first << " occurs " << c.second << (c.second > 1 ? " times" : " time") << std::endl;
    }

    return 0;
}
