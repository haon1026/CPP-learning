//ʱ�䣺2019��5��18��15:52:16
//��дһ�γ���ͬʱͳ��Ԫ����ĸ��Сд��ʽ�ʹ�д��ʽ

#include <iostream>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;

    std::cout << "������һ���ı���" << std::endl;
    while (std::cin >> ch)
    {
        switch (ch)
        {
            case 'a':                 //case��ǩ���������γ������ʽ
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
        }
    }
    std::cout << "Ԫ����ĸ'a'�ĸ���Ϊ��" << aCnt << std::endl;
    std::cout << "Ԫ����ĸ'e'�ĸ���Ϊ��" << eCnt << std::endl;
    std::cout << "Ԫ����ĸ'i'�ĸ���Ϊ��" << iCnt << std::endl;
    std::cout << "Ԫ����ĸ'o'�ĸ���Ϊ��" << oCnt << std::endl;
    std::cout << "Ԫ����ĸ'u'�ĸ���Ϊ��" << uCnt << std::endl;

    return 0;
}
