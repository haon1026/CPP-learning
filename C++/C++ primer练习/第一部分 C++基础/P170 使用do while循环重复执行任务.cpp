//ʱ�䣺2019��5��19��21:23:24
//ʹ��do whileѭ���ظ�ִ������������ʾ�û���������string����Ȼ�������϶̵Ĳ�����

#include <iostream>
#include <string>

int main()
{
    do
    {
        std::cout << "�����������ַ�����" << std::endl;
        std::string str1, str2;
        std::cin >> str1 >> str2;
        if (str1.size() > str2.size())
            std::cout << "�϶̵��ַ����ǣ�" << str2 << std::endl;
        else if(str1.size() < str2.size())
            std::cout << "�϶̵��ַ����ǣ�" << str1 << std::endl;
        else
            std::cout << "�����ַ����ȳ�" << std::endl;

    }while(std::cin);

    return 0;
}
