//ʱ�䣺2019��7��15��12:15:51
//MyStringʵ��string���캯���ķ�д
//ͨ��д����������ͷ�ļ�.h + �ඨ��Դ�ļ�.cpp + ������main.cpp

#include <iostream>
#include "MyString.h"

int main()
{
	//C++ cout << �����ַ���ָ��Ὣ�䵱���ַ��������������ָ����ָ���ַ���
	//���ַ���ָ��ת��Ϊ������ָ��������ָ��ָ��ĵ�ַ

	//���Թ��캯��
	CMyString str;
	const char* pstr = str.c_str();
	std::cout << pstr << std::endl;      //�������

	CMyString str1(5, 'b');
	std::cout << str1.c_str() << std::endl;   //�����bbbbb

	CMyString str2("abcdefg");
	std::cout << str2.c_str() << std::endl;   //�����abcdefg

	CMyString str3("abcdefgh", 6);
	std::cout << str3.c_str() << std::endl;  //�����abcdef

	CMyString str4(str3, 1, 5);
	std::cout << str4.c_str() << std::endl;   //�����bcdef

	//���Կ������캯��
	CMyString str5(str2);     //CMyString str5 = str2�����õ�Ҳ�ǿ������캯��
	std::cout << str5.c_str() << std::endl;   //�����abcdefg
	std::cout << str5.size() << std::endl;

	//���Կ�����ֵ�����
	CMyString str6;
	str6 = str4;
	std::cout << str6.c_str() << std::endl;   
	std::cout << str6.size() << std::endl;

	//���������������
	CMyString str7("abc");
	std::cout << str7 << std::endl;
	std::cin >> str7;
	std::cout << str7 << std::endl;

	system("pause");
	return 0;
}