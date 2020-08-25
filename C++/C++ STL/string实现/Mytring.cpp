//ʱ�䣺2019��7��15��13:01:37
//MyString��Ķ���

#include <iostream>
#include "MyString.h"

//���캯��
CMyString::CMyString()
{ 
	m_str = new char('\0');
	m_nLength = 0;
}

CMyString::CMyString(size_t length, char ch)
{
	if (length < 0)
		return;

	m_str = new char[length+1];    //ĩβ��'\0' 
	for (size_t i = 0; i < length; i++)    //size_t �� unsigned int  
	{
		*(m_str + i) = ch;
		//m_str[i] = ch;       //��һ��д��
	}
	m_str[length] = '\0';
	m_nLength = length;
}

CMyString::CMyString(const char *str)
{
	if (NULL == str)
		return;

	const char *pStr = str;
	int nCount = 0;

	//�õ�����
	while ('\0' != *pStr)
	{
		nCount++;
		pStr++;
	}

	//����ռ�
	m_str = new char[nCount+1];

	//�ռ丳ֵ
	for (int i = 0; i < nCount+1; i++)
	{
		m_str[i] = str[i];
	}

	m_nLength = nCount;
}

CMyString::CMyString(const char *str, size_t length)
{
	if (NULL == str || length < 0)
		return;

	m_str = new char[length+1];
	
	for (size_t i = 0; i < length; i++)
	{
		m_str[i] = str[i];
	}
	m_str[length] = '\0';
	m_nLength = length;
}

CMyString::CMyString(CMyString &str, size_t index, size_t length)
{
	m_str = new char[length + 1];
	
	for (size_t i = index, j = 0; j < length; j++, i++)
	{
		m_str[j] = str.c_str()[i];   //û�������±��������ֻ��ͨ��ָ�����Ԫ��
	}
	m_str[length] = '\0';
	m_nLength = length;
}

//�������캯��
CMyString::CMyString(const CMyString &str)
{
	m_str = new char[str.size() + 1];

	for (size_t i = 0; i < str.size()+1; i++)
	{
		m_str[i] = str.c_str()[i];
	}

	m_nLength = str.size();
}

//������ֵ�����
CMyString& CMyString::operator = (const CMyString &str)
{
	char *p = new char[str.size()+1];
	for (size_t i = 0; i < str.size()+1; i++)
	{
		p[i] = str.c_str()[i];
	}
	delete[] m_str;
	m_str = p;
	m_nLength = str.size();

	return *this;
}

//��������
CMyString::~CMyString()
{
	if (NULL != m_str)
	{
		delete[] m_str;
	}
}

//����ַ����׵�ַ
const char* CMyString::c_str() const
{
	return m_str;
}

//����ַ����ַ�����
const size_t CMyString::size() const
{
	return m_nLength;
}

//�����ַ�����
void CMyString::SetMLength(size_t length)
{
	m_nLength = length;
}

//��ȡ�ַ����׵�ַ����������
char* &CMyString::GetMStr()
{
	return m_str;
}

//�������
std::ostream &operator<<(std::ostream &os, const CMyString &str)
{
	//os << str.c_str();   //����������ز�������Ԫ����ʱ��д��
	os << str.m_str;

	return os;
}

//��������
std::istream &operator>>(std::istream &is, CMyString &str)
{
	//�����ַ���
	char arr[20] = { 0 };
	is >> arr;

	//�����ַ�������
	int i = 0;
	for (i = 0; arr[i] != '\0'; i++);

	//�ͷſռ�
	//delete[] str.c_str();    //����������ز�������Ԫ����ʱ��д��
	delete[] str.m_str;

	//����ռ�
	//str.GetMStr() = new char[i + 1];   //����������ز�������Ԫ����ʱ��д��
	str.m_str = new char[i + 1];   //i���±꣬������0������ʵ������ռ���Ҫ��1

	//��ֵ
	int j = 0;
	for (j = 0; j <= i; j++)       //��i���ַ���'\0'Ҳ��Ҫ��ֵ
	{
		//str.GetMStr()[j] = arr[j];    //����������ز�������Ԫ����ʱ��д��
		str.m_str[j] = arr[j];
	}

	//�����ַ�����
	//str.SetMLength(i);    //����������ز�������Ԫ����ʱ��д��
	str.m_nLength = i;

	return is;
}