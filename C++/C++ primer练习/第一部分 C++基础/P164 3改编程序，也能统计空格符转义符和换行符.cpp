//ʱ�䣺2019��5��18��15:52:16
//��дһ�γ���ͬʱͳ��Ԫ����ĸ��Сд��ʽ�ʹ�д��ʽ
//�޸ĳ���ʹ��Ҳ��ͳ�ƿո��Ʊ���ͻ��з�������      //��������case��ǩ�������ַ������Ӧ��ʹ��cin.get(ch),������ʹ��>>����Ϊ���߻���Ե���Ҫͳ�Ƶ��������
#include <iostream>

int main()
{
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;

    std::cout << "������һ���ı���" << std::endl;
    while (std::cin.get(ch))
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
            case ' ':
                ++spaceCnt;
                break;
            case '\t':
                ++tabCnt;
                break;
            case '\n':
                ++newlineCnt;
                break;
        }
    }
    std::cout << "Ԫ����ĸ'a'�ĸ���Ϊ��" << aCnt << std::endl;
    std::cout << "Ԫ����ĸ'e'�ĸ���Ϊ��" << eCnt << std::endl;
    std::cout << "Ԫ����ĸ'i'�ĸ���Ϊ��" << iCnt << std::endl;
    std::cout << "Ԫ����ĸ'o'�ĸ���Ϊ��" << oCnt << std::endl;
    std::cout << "Ԫ����ĸ'u'�ĸ���Ϊ��" << uCnt << std::endl;
    std::cout << "�ո��' '�ĸ���Ϊ��" << spaceCnt << std::endl;
    std::cout << "�Ʊ��'\\t'�ĸ���Ϊ��" << tabCnt << std::endl;
    std::cout << "���з�'\\n'�ĸ���Ϊ��" << newlineCnt << std::endl;  //�����\�������\t\n

    return 0;
}
