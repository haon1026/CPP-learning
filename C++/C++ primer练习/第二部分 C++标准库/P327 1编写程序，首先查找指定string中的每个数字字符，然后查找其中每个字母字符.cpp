//ʱ�䣺2019��6��13��17:29:08
//��д�������Ȳ���string"ab2c3d7R4E6"�е�ÿ�������ַ���Ȼ���������ÿ����ĸ�ַ�
//��д�����汾�ĳ��򣬵�һ��Ҫʹ��find_first_of,�ڶ���Ҫʹ��find_first_not_of

#include <iostream>
#include <string>

/*//find_first_of
int main()
{
    std::string s1 = {"ab2c3d7R4E6"};
    std::string s2 = {"1234567890"};
    std::string s3 = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string::size_type pos = 0;
    while ((pos = s1.find_first_of(s2, pos)) != std::string::npos)
    {
        std::cout << "�ҵ������ַ�����λ��" << pos
                  << "������" << s1[pos] << std::endl;
        ++pos;
    }
    pos = 0;
    while ((pos = s1.find_first_of(s3, pos)) != std::string::npos)
    {
        std::cout << "�ҵ������ַ�����λ��" << pos
                  << "������" << s1[pos] << std::endl;
        ++pos;
    }

    return 0;
}
*/
/*
void find_char(std::string &s, const std::string &chars)
{
    std::cout << "��" << s << "�в���" << chars << "���ַ�" << std::endl;
    std::string::size_type pos = 0;
    while ((pos = s.find_first_of(chars, pos)) != std::string::npos)
    {
        //�ҵ��ַ�
        std::cout << "pos:" << pos << ", char:" << s[pos] << std::endl;
        pos++;    //�ƶ�����һ�ַ�
    }
}

int main()
{
    std::string s = "ab2c3d7R4E6";
    std::cout << "�����������֣�" << std::endl;
    find_char(s, "0123456789");
    std::cout << std::endl << "����������ĸ" << std::endl;
    find_char(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
}
*/
//find_first_not_of
void find_not_char(std::string &s, const std::string &chars)
{
    std::cout << "��" << s << "�в��Ҳ���" << chars << "���ַ�" << std::endl;
    std::string::size_type pos = 0;
    while ((pos = s.find_first_not_of(chars, pos)) != std::string::npos)
    {
        //�ҵ��ַ�
        std::cout << "pos:" << pos << ", char:" << s[pos] << std::endl;
        pos++;    //�ƶ�����һ�ַ�
    }
}

int main()
{
    std::string s = "ab2c3d7R4E6";
    std::cout << "�����������֣�" << std::endl;
    find_not_char(s, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    std::cout << std::endl << "����������ĸ" << std::endl;
    find_not_char(s, "0123456789");
}
