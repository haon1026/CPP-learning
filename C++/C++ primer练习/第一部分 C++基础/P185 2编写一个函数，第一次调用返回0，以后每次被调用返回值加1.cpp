//ʱ�䣺2019��5��22��21:58:20
//��дһ����������һ�ε��÷���0���Ժ�ÿ�α����÷���ֵ��1

#include <iostream>

//�ú���������ͳ��ִ�еĴ���
unsigned myCnt()
{
    static unsigned iCnt = -1;   //���ý��������ֵ��Ȼ��Ч       ��������ʱ���У���ʼ��������ֻ��ʼ��һ��
    ++iCnt;
    return iCnt;
}

int main()
{
    std::cout << "�����������ַ��󰴻س�������" << std::endl;
    char ch;
    while (std::cin >> ch)
    {
        std::cout << "����myCnt()��ִ�д����ǣ�" << myCnt() << std::endl;
    }

    return 0;
}
