//ʱ�䣺2019��6��9��21:38:37
//��д���򣬽�����һ���ļ��е��б�����һ��vector�У�Ȼ��ʹ��istringstream���ж�ȡ���ݣ�ÿ�ζ�ȡһ������

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream in("��꽻�׼�¼.txt");
    if (!in)
    {
        std::cerr << "�ļ��򿪴���" << std::endl;
        return -1;
    }

    std::string line;
    std::vector<std::string> v;
    while (getline(in, line))            //���ļ��ж�ȡһ��
    {
        v.push_back(line);               //��ӵ�vector��
    }

    in.close();            //������ϣ��ļ���رգ�����

    std::istringstream is;      //����is�������ⲿ���ڲ�whileѭ����һ��ִ�к���״̬λ�ı��ˣ����������³�ʼ��
    for (auto c : v)            //���is�������ڲ�ִ��һ����ѭ���ڲ�is�����¶��壬�Ͳ��ῼ���쳣
    {
        is.str(c);
        std::string word;
        while (is >> word)
            std::cout << word << " ";
        std::cout << std::endl;
        std::cout << is.rdstate() << std::endl;
        is.clear();                           //�˳�ѭ����,is��������ĩβ,eof��λ�����ʼ��״̬�����������
        std::cout << is.rdstate() << std::endl;
    }

/*
    //��
    std::vector<std::string>::const_iterator it = v.begin();   //������
    while (it != v.end())
    {
        std::istringstream line_str(*it);
        std::string word;
        while (line_str >> word)            //ͨ��istringstream��vector�ж�ȡ����
            std::cout << word << " ";
        std::cout << std::endl;
        ++it;
    }
*/
    return 0;
}

