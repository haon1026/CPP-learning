//ʱ�䣺2019��5��19��22:38:23
//��ȡstring���������ֱ����������������ͬ�ĵ��ʻ������е��ʶ�����Ϊֹ���ҵ����ظ����ʱ����Դ�д��ĸ��ͷ

#include <iostream>
#include <string>

int main()
{
    std::string currString, preString = "";
    bool bl = true;
    std::cout << "������һ���ַ���" << std::endl;
    while (std::cin >> currString)
    {
        if (!isupper(currString[0]))
            continue;
        if (currString == preString)    // && currString[0] >= 'A' && currString[0] <= 'Z'
        {
            std::cout << "�����ظ����ֵĵ�����" << currString << std::endl;
            bl = false;
            break;
        }
        preString = currString;

    }
    if (bl)
    {
        std::cout << "û���κ�һ�������������ظ����ֵ�" << std::endl;
    }


    return 0;
}
