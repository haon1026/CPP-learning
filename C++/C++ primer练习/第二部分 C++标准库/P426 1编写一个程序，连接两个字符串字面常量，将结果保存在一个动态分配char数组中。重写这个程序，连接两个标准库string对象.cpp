//ʱ�䣺2019��6��24��13:19:28
//��дһ���������������ַ������泣���������������һ����̬����char�����С���д�����������������׼��string����

#include <iostream>
#include <cstring>

int main()
{
    const char *c1 = "welcome to China";
    const char *c2 = "nice to meet you";

    //�ַ�������ռ�����ַ���+1
    char *r = new char[strlen(c1) + strlen(c2) + 1];
    strcpy(r, c1);    //������һ���ַ�������
    strcat(r, c2);    //���ӵڶ����ַ�������
    std::cout << r << std::endl;

    std::string s1 = "hello ";
    std::string s2 = "world";
    strcpy(r, (s1 + s2).c_str());   //�������ӽ��
    std::cout << r << std::endl;

    //�ͷŶ�̬����
    delete [] r;

    return 0;
}
