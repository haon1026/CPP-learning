//ʱ�䣺2019��6��13��10:49:17
//��д���򣬴�һ��vector char��ʼ��һ��string

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<char> cvec = {'A', 'r', 'e', ' ','y', 'o', 'u', ' ', 'O', 'K'};
    std::string str;

    for (auto c : cvec)
        str += c;
    std::cout << str << std::endl;

    std::string str1(cvec.data(), cvec.size());     //vector�ṩ��data��Ա�������������ڴ�ռ���׵�ַ���Դ���Ϊstring���캯���ĵ�һ��������
    std::cout << str1 << std::endl;                 //vecor��size����ֵ��Ϊ�ڶ������������ɻ�ȡvector<char>�е����ݣ����俴��һ���ַ���������ʼ��string

    return 0;
}
