//ʱ�䣺2019��5��18��15:29:12
//ʹ��һϵ��if���ͳ�ƴ�cin������ı��ж���Ԫ����ĸ

#include <iostream>
#include <string>

int main()
{
    //std::string word;
    char ch;
    int vowelCnt = 0;
    std::cout << "������һ���ı���" << std::endl;
    while (std::cin >> ch)       //while (std::cin >> word)�� ����һ�����ַ���ȡ��Ҳ���Զ�ȡһ���ַ����ڱ���
        //for (auto c : word)
        {
            if (ch == 'a')       //����Ƕ�ȡһ���ַ���,��ch ��Ϊc���з�Χforѭ��
                ++vowelCnt;
            else if (ch == 'e')
                ++vowelCnt;
            else if (ch == 'i')
                ++vowelCnt;
            else if (ch == 'o')
                ++vowelCnt;
            else if (ch == 'u')
                ++vowelCnt;
        }

    std::cout << "��������ı���һ���� " << vowelCnt << " ��Ԫ����ĸ" << std::endl;


    return 0;
}
