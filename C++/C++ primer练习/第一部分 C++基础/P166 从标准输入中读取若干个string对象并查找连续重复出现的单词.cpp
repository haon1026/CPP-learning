//ʱ�䣺2019��5��19��19:54:20
//�ӱ�׼�����ж�ȡ���ɸ�string���󲢲��������ظ����ֵĵ���

#include <iostream>
#include <string>

int main()
{
    std::string str, maxString, preString = "\0";         //���������ַ��������ֱ��ʾ��ǰ�������ַ�������ǰ���ִ��������ַ�����ǰһ���ַ���
    int currCnt = 1, maxCnt = 0;                          //�����������ͱ����ֱ��ʾ��ǰ�������ֵ��ַ�����������ǰ���ִ��������ַ�������
    std::cout << "���������ɸ��ַ�����" << std::endl;

    while (std::cin >> str)
    {
        //�����ǰ�ַ�����ǰһ���ַ���һ�£�����״̬
        if (str == preString)
        {
                ++currCnt;
                if (currCnt > maxCnt)
                {
                    maxCnt = currCnt;
                    maxString = preString;
                }
        }
        //�����ǰ�ַ�����ǰһ���ַ�����һ�£�����currCnt
        else
        {

            currCnt = 1;
        }
        //����preString�Ա�����һ��ѭ��ʹ��
        preString = str;
    }

    if (maxCnt > 1)
        std::cout << "�����ظ����������ַ����ǣ�" << maxString << ",�����ǣ�" << maxCnt << std::endl;
    else
        std::cout << "ÿ���ַ���ֻ������һ��" << std::endl;

    return 0;
}
