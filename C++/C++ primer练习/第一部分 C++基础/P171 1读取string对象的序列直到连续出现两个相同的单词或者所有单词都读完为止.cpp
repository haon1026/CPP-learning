//ʱ�䣺2019��5��19��22:23:57
//��ȡstring���������ֱ����������������ͬ�ĵ��ʻ������е��ʶ�����Ϊֹ

#include <iostream>
#include <string>

int main()
{
    std::string currString, preString = "";
    bool bl = true;
    std::cout << "������һ���ַ���" << std::endl;
    while (std::cin >> currString)
    {
        if(currString == preString)
        {
            std::cout << "�����ظ����ֵĵ�����" << currString << std::endl;
            bl = false;
            break;
        }
        preString = currString;

    }
    if(bl)
    {
        std::cout << "û���κ�һ�������������ظ����ֵ�" << std::endl;
    }


    return 0;
}
