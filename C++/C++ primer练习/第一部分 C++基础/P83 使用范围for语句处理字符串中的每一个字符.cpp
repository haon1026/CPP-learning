//ʱ�䣺2019��5��11��15:46:32
//ʹ�÷�Χforѭ����䴦���ַ����е�ÿһ���ַ�

#include <iostream>
#include <string>

int main()
{
    //ÿ�����str�е�һ���ַ�
    std::string str("a Apple!!!");


    for(auto c : str)                     //�ñ�������������c�����ͣ��˴�������char
        std::cout << c << std::endl;      //ÿһ�ε�����str����һ���ַ�������c�������ַ����е��ַ������ı�

    //ʹ��ispunct����ͳ��string�����б����ŵĸ���
    decltype(str.size()) punct_cnt = 0;

    for(auto c : str)
        if(ispunct(c))                    //����ַ�Ϊ������Ϊ��
        ++punct_cnt;
    std::cout << punct_cnt << " punctuation character in " << str << std::endl;


    //���ַ����е��ַ�ת���ɴ�д��ʽ
    for(auto &ch : str)                     //��Ҫ�ı�string�������ַ���ֵ�������ѭ�������������������
        ch = toupper(ch);                   //ch��һ�����ã���˸�ֵ��佫�ı�str���ַ���ֵ
    std::cout << str << std::endl;

    return 0;
}
