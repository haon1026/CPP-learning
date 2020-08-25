//ʱ�䣺2019��6��13��22:51:15
//���һ����ĸ���쵽����֮����d��f����������ϳ�ͷ���֣����һ����ĸ���쵽����֮�£���p��g,�������³�ͷ����
//��д���򣬶���һ�������ļ��������ļȲ������ϳ�ͷ���֣�Ҳ�������³�ͷ���ֵĵ���

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
            continue;        //�����ϳ�ͷ���³�ͷ��ĸ
        std::cout << s << " ";
        if (max_length < s.size())
        {
            //�µ��ʸ���
            max_length = s.size();    //��¼���Ⱥ͵���
            longest_word = s;
        }
    }
    std::cout << std::endl << "��ַ�����" << longest_word << std::endl;
}

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);    //���ļ�
    if(!in)
    {
        std::cerr << "�����ļ��򿪴���" << std::endl;
        return -1;
    }

    find_longest_word(in);

    return 0;
}
