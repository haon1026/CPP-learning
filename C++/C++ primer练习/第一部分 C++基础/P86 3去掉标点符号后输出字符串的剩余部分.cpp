//ʱ�䣺2019��5��11��22:06:50
//ȥ�������ź�����ַ�����ʣ�ಿ��

#include <iostream>
#include <string>

int main()

{
    //���÷�Χforѭ�������ַ���
    std::string s1, s2;
    std::cout << "������һ�����������ŵ��ַ���:" << std::endl;
    std::cin >> s1;

    for (auto c : s1)
        if (!ispunct(c))
            s2 += c;      //���߲�����s2��ֱ��ѭ�����ÿһ��cҲ��
    std::cout << s2 << std::endl;

    return 0;
}

/*
//  ��ͨforѭ�������ַ���
{
    std::string s, result;
    std::cout << "������һ�����������ŵ��ַ���:" << std::endl;
    std::cin >> s;
    for (decltype(s.size()) i = 0; i < s.size(); ++i)
    {
        if (!ispunct(s[i]))
            result += s[i];
    }
    std::cout << result << std::endl;

    return 0;
}
*/
