//ʱ�䣺2019��5��24��11:38:39
//����һ���������ж�string�������Ƿ��д�д��ĸ
//��д��һ����������string����ȫ���ĳ�Сд��ʽ

#include <iostream>
#include <string>

bool HasUpper(const std::string &);
void ChangeToLower(std::string &);

int main()
{
    std::cout << "������һ���ַ�����" << std::endl;
    std::string str;
    std::cin >> str;
    if(HasUpper(str))
    {
        std::cout << "�ַ����к��д�д��ĸ" << std::endl;
        ChangeToLower(str);
        std::cout << "���ַ�������Сдת����Ϊ:" <<  str << std::endl;
    }
    else
        std::cout << "�ַ����в����д�д��ĸ" << std::endl;

    return 0;
}

bool HasUpper(const std::string &s)
{
    for (std::string::size_type i = 0; i != s.size(); ++i)
    {
        if (isupper(s[i]))
            return true;
    }
    return false;

}

void ChangeToLower(std::string &s)
{
    for (auto &c : s)
        c = tolower(c);
}
