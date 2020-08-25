//ʱ�䣺2019��6��19��12:10:45
//����һ��map,�ؼ����Ǽ�ͥ���գ�ֵ��һ��vector,������к����ǵ�������д���룬ʵ������µļ�ͥ�Լ������м�ͥ������µĺ���
//��չ378��ϰ�б�д���ĺ����յ�����map,���һ��pair��vector�����溢�ӵ���������

#include <iostream>
#include <vector>
#include <map>
#include <utility>

void add_family(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &families, const std::string &family)
{
        families[family];  //���û�������ͥ������һ���յ�vector<string>����ʾ�����ͥ�ĺ��������б�
}

void add_child(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &families, const std::string &family, const std::string &child, const std::string &birthday)
{
    families[family].push_back({child, birthday});    //families[family]ȡ���ü�ͥ��vectorȻ�����
}

int main()
{
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> families;

    add_family(families, "��");
    add_child(families, "��", "��", "1970-1-1");
    add_child(families, "��", "ǿ", "1980-1-1");
    add_child(families, "��", "΢", "1990-1-1");
    add_family(families, "��");



    for (const auto &f : families)
    {
        std::cout << f.first << "�ҵĺ��ӣ�";
        for (const auto &c : f.second)
        {
            std::cout << c.first << "������"<< c.second << "), ";
        }
        std::cout << std::endl;
    }

    return 0;
}

