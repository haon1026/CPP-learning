//ʱ�䣺2019��5��11��12:47:02
//string��������������getline�����ֱ�����δ���հ��ַ�

#include <iostream>
#include <string>

int main()
{
    std::string word, line;
    std::cout << "��ѡ���ȡ�ַ����ķ�ʽ��1��ʾ��ʶ�ȡ��2��ʾ���ж�ȡ" << std::endl;
    char ch;
    std::cin >> ch;

    //������뻺����
    std::cin.clear();
    std::cin.sync();

    if (ch == '1')
    {
        std::cout << "�������ַ�����   Welcome to C++ family!   " << std::endl;
        std::cin >> word;
        std::cout << "ϵͳ��ȡ����Ч�ַ��ǣ�" << std::endl;
        std::cout << word << std::endl;

        return 0;
    }

    //������뻺����
   // std::cin.clear();         //˼��������뻺������������ڵ�һ��ifǰ�͵ڶ���ifǰ������
   // std::cin.sync();

    if (ch == '2')
    {
        std::cout << "�������ַ�����   Welcome to C++ family!   " << std::endl;
        getline(std::cin, line);
        std::cout << "ϵͳ��ȡ����Ч�ַ����ǣ�" << std::endl;
        std::cout << line << std::endl;

        return 0;
    }

    std::cout << "������������";

    return -1;
}
