//ʱ�䣺2019��6��8��14:28:52
//��д�������Զ�ģʽ��һ���ļ����������ݶ��뵽һ��string��vector�У���ÿһ����Ϊһ��������Ԫ�ش���vector��

#include <iostream>
#include <vector>
#include <fstream>
#include <string>


int main()
{
    std::ifstream in("�ļ�������.txt");       //���ļ�
    if (!in)
    {
        std::cerr << "�޷��������ļ�" << std::endl;
        return -1;
    }

    std::vector<std::string> v;
    std::string line;
    while (getline(in, line))          //���ļ��ж�ȡһ��        ��Ϊwhile(in >> line)����ʵ��һ��������Ϊһ��������Ԫ��
    {
        v.push_back(line);             //��ӵ�vector��
    }
    in.close();                        //������ϣ��ر��ļ�

    for (auto c : v)                   //��Χforѭ���������
        std::cout << c << std::endl;

    return 0;
}
