//ʱ�䣺2019��5��11��13:20:45
//�ַ�����ƴ��

#include <iostream>
#include <string>

int main()
{
    char ch = 'y';
    std::string s, result;

    std::cout << "�������һ���ַ�����" << std::endl;
    while (std::cin >> s)
    {
        result += s;
/*
        //�ո�����ַ�����ʽ1
        if(!result.size())
            result += s;
        else
            result = result + " " + s;
*/
        std::cout << "�Ƿ������y or n��?" << std::endl;
        std::cin >> ch;
        if (ch == 'y' || ch == 'Y')
        {
            //result = result + " ";        �ո�����ַ�����ʽ2
            std::cout << "��������һ���ַ�����" <<std::endl;
        }
        else
            break;
    }
    std::cout << "ƴ�Ӻ���ַ����ǣ�" << result << std::endl;

    return 0;
}
