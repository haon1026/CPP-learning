//ʱ�䣺2019��5��11��13:06:25
//�ַ����ıȽ�

#include <iostream>
#include <string>

int main()
{
    //�Ƚ��ַ�����С
    std::string s1, s2;
    std::cout << "�����������ַ���:" << std::endl;
    std::cin >> s1 >> s2;

    if (s1 == s2)
        std::cout << "�����ַ������" << std::endl;
    else if (s1 > s2)
        std::cout << s1 << "����" << s2 << std::endl;
    else
        std::cout << s2 << "����" << s1 << std::endl;

    //�Ƚ��ַ������ȵĴ�С
    auto len1 = s1.size();
    auto len2 = s2.size();     //len��������string::size_type

    if (len1 == len2)
        std::cout << s1 << " �� " << s2 << " �ĳ��ȶ��� " << len1 << std::endl;
    else if (len1 > len2)
        std::cout << s1 << " �� " << s2 << " �ĳ��ȶ� " << len1-len2 << std::endl;
    else
        std::cout << s1 << " �� " << s2 << " �ĳ���С " << len2-len1 << std::endl;

    return 0;
}
