//ʱ�䣺2019��6��13��11:11:19
//�ٶ���ϣ��ÿ�ζ�ȡһ���ַ�����һ��string�У�����֪��������Ҫ��ȡ100���ַ���Ӧ�������߳��������

#include <iostream>
#include <string>

void input_string(std::string &s)
{
    s.reserve(100);                   //����֪�����ٶ�ȡ100���ַ�����˿�����reserve��Ϊstring����100���ַ��Ŀռ�
    char c;                           //Ȼ�������ȡ�ַ�����push_back��ӵ�stringĩβ
    while (std::cin >> c)
        s.push_back(c);
}

int main()
{
    std::string s;
    input_string(s);
    std::cout << s << std::endl;

    return 0;
}
