//ʱ�䣺2019��5��11��12:01:15
//����ͳ�ʼ��string����

#include <iostream>
#include <string>

int main()
{
    std::string s1;                //Ĭ�ϳ�ʼ��
    std::string s2(s1);            //s2��s1�ĸ�����                ����ֱ�ӳ�ʼ��
    std::string s3 = s1;           //�ȼ���s3(s1),s3��s1�ĸ�����   ���ڿ�����ʼ��
    std::string s4("Value");       //s4������ֵ��Value���ĸ�������������ֵ�����Ǹ����ַ���
    std::string s5 = "Value";      //�ȼ���s5(Value)��s5������ֵ��Value���ĸ���
    std::string s6(10, 'c');       //��s6��ʼ��Ϊ��10���ַ�c��ɵĴ���Ҳ����д�� string s6 = string(10, 'c')


    std::cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << std::endl;

    return 0;
}
