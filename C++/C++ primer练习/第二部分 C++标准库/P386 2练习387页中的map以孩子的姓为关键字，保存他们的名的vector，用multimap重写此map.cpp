//ʱ�䣺2019��6��19��16:32:51
//��ϰ387ҳ�е�map�Ժ��ӵ���Ϊ�ؼ��֣��������ǵ�����vector����multimap��д��map

#include <iostream>
#include <map>
#include <string>
#include <algorithm>


void addchild(std::multimap<std::string, std::string> &families, const std::string &family, const std::string &child)
{
    families.insert({family, child});
}

int main()
{
    std::multimap<std::string, std::string> families;

    addchild(families, "��", "ǿ");
    addchild(families, "��", "��");
    addchild(families, "��", "ǿ");
    addchild(families, "��", "��");

    for (const auto &c : families)
    {
        std::cout << c.first << "�ҵĺ��ӣ�" << c.second << std::endl;
    }

    return 0;
}
