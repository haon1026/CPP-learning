//ʱ�䣺2019��5��11��18:31:17
//ʹ���±�ִ���������

#include <iostream>
#include <string>

int main()
{
    //0��15֮���ʮ������ת���ɶ�Ӧ��ʮ��������
    const std::string hexdigits = "0123456789ABCDEF";     //���п��ܵ�ʮ��������
    std::cout << "Enter a series of number between 0 and 15 separated by space��" << std::endl;

    std::string result;                                   //���ڱ���ʮ�����Ƶ��ַ���
    std::string::size_type n;                             //���ڱ������������ȡ����

    while (std::cin >> n)
        if (n <= hexdigits.size())                        //������Ч����
            result += hexdigits[n];

    std::cout << "Your hex number is:" << result << std::endl;

    return 0;
}
