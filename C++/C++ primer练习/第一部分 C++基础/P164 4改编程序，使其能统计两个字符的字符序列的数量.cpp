//ʱ�䣺2019��5��18��16:51:23
//�ı����ʹ����ͳ�������ַ����ַ����е�����

#include <iostream>

int main()

{
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';

    std::cout << "������һ���ı���" << std::endl;
    while (std::cin >> ch)
    {
        bool bl = true;
        if (prech == 'f')
        {
            switch (ch)
            {
                case 'f':                 //case��ǩ���������γ������ʽ
                    ++ffCnt;
                    bl = false;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;

            }
        }
        if (!bl)
            prech = '\0';
        else
            prech = ch;
    }
    std::cout << "�ַ�����ff�ĸ���Ϊ��" << ffCnt << std::endl;
    std::cout << "�ַ�����fl�ĸ���Ϊ��" << flCnt << std::endl;
    std::cout << "�ַ�����fi�ĸ���Ϊ��" << fiCnt << std::endl;

    return 0;
}

/*
{
    //���ַ����Ƿ�����
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch;

    std::cout << "������һ���ı���" << std::endl;
    while (std::cin >> ch)
    {
        if (ch == 'f')
        {
            switch (ch = std::cin.get())
            {
                case 'f':                 //case��ǩ���������γ������ʽ
                    ++ffCnt;
                    break;
                case 'l':
                    ++flCnt;
                    break;
                case 'i':
                    ++fiCnt;
                    break;

            }
        }

    }
    std::cout << "�ַ�����ff�ĸ���Ϊ��" << ffCnt << std::endl;
    std::cout << "�ַ�����fl�ĸ���Ϊ��" << flCnt << std::endl;
    std::cout << "�ַ�����fi�ĸ���Ϊ��" << fiCnt << std::endl;

    return 0;
}
*/
