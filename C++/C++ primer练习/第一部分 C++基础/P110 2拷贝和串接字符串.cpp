//ʱ�䣺2019��5��15��12:53:05
//������ƴ���ַ���

#include <iostream>
#include <cstring>

int main()
{
    char str1[] = "Welcome";
    char str2[] = "to China";
    char str3[50] = {0};
    strcat(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    std::cout << str3 << std::endl;


    char result[strlen(str1) + strlen(str2) -1];   //����strlen�������������ַ����ĳ��ȣ�����ý���ַ����ĳ���
    strcpy(result, str1);             //����
    strcat(result, " ");
    strcat(result, str2);             //ƴ��

    std::cout << "��һ���ַ����ǣ�" << str1 << std::endl;
    std::cout << "�ڶ����ַ����ǣ�" << str2 << std::endl;
    std::cout << "ƴ�Ӻ���ַ����ǣ�" << result << std::endl;
    return 0;
}
