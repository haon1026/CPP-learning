//ʱ�䣺2019��5��11��21:22:13
//�ô�ͳ��while��forѭ����д��������

#include <iostream>
#include <string>

int main()
{   /*
    //��ͳ��whileѭ����д
    std::string s;
    std::cout << "������һ���ַ��������԰����ո�" << std::endl;
    getline(std::cin, s);
    int i = 0;               //����i����0��ת�����޷�����Ҳ����0

    while (s[i] != '\0')     //'\0'���ַ���������־�����ǿո�                  // ˼����������ַ���ΪʲôҲ������գ���ζ��s[0]=='\0',string�ַ�����������'\0'��
    {                                                                          // ���P86��һ��
        s[i] = 'X';
        ++i;
    }
    std::cout << s << std::endl;
    */

    //��ͳ��forѭ����д
    std::string s;
    std::cout << "������һ���ַ��������԰����ո�" << std::endl;
    getline(std::cin, s);
    for (unsigned int i = 0; i < s.size(); i++)
    {
        s[i] = 'X';
    }
    std::cout << s << std::endl;

    return 0;
}
