//ʱ�䣺2019��5��15��12:39:37
//�Ƚ�����string����ͱȽ�����C����ַ���

#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string str1, str2;
    std::cout << "�����������ַ�����" << std::endl;
    std::cin >> str1 >> str2;

    if (str1 > str2)
        std::cout << "��һ���ַ������ڵڶ����ַ���" << std::endl;
    else if (str1 < str2)
        std::cout << "��һ���ַ���С�ڵڶ����ַ���" << std::endl;
    else
        std::cout << "�����ַ������" << std::endl;

    char str3[80], str4[80];
    std::cout << "�����������ַ�����" << std::endl;
    std::cin >> str3 >> str4;
    auto result = strcmp(str3, str4);
    switch (result)
    {
    case 1:
        std::cout << "�������ַ������ڵ��ĸ��ַ���" << std::endl;
        break;
    case 0:
        std::cout << "�������ַ������ڵ��ĸ��ַ���" << std::endl;
        break;
    case -1:
        std::cout << "�������ַ���С�ڵ��ĸ��ַ���" << std::endl;
        break;
    default:
        std::cout << "δ����Ľ��" << std::endl;
        break;
    }

    return 0;
}
