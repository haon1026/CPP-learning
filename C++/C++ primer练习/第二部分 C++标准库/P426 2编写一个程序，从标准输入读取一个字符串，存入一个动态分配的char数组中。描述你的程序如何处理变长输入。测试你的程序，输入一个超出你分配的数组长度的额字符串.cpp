//ʱ�䣺2019��6��24��13:46:35
//��дһ�����򣬴ӱ�׼�����ȡһ���ַ���������һ����̬�����char�����У�������ĳ�����δ���䳤���롣
//������ĳ�������һ���������������鳤�ȵĶ��ַ���

#include <iostream>
#include <cstring>

int main()
{
    char c;
    char *r = new char[20];
    int i = 0;

    while (std::cin.get(c))
    {
        if (isspace(c))    //�ո�����Ʊ���ȿհ׷�  �����س���
            break;
        r[i++] = c;        //���붯̬����
        if (i == 20)       //�Ѷ���19���ַ�
        {
            std::cout << "�ﵽ������������" << std::endl;
            break;
        }
    }

    r[i] = 0;
    std::cout << r << std::endl;

    //�ͷŶ�̬����
    delete [] r;

    return 0;
}
