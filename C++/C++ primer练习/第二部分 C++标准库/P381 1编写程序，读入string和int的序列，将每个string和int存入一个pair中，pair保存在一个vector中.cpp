//ʱ�䣺2019��6��18��23:55:22
//��д���򣬶���string��int�����У���ÿ��string��int����һ��pair�У�pair������һ��vector��

#include <iostream>
#include <vector>
#include <fstream>
#include <utility>
#include <string>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "�����ļ���ʧ�ܣ�" << std::endl;
        exit(1);
    }

    std::vector<std::pair<std::string, int>> pvec;   //pair��vector
    std::string s;
    int v;
    while (in >> s && in >> v)      //��ȡһ���ַ�����һ������
        //pvec.push_back(std::pair<std::string, int>(s, v));
        pvec.push_back({s, v});      //�б��ʼ����ʽ
        //pvec.push_back(make_pair(s, v));   //make_pair��ʽ
    for (const auto &d : pvec)
        std::cout << d.first << " " << d.second << std::endl;

    return 0;
}
