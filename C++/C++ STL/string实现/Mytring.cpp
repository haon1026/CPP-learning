//时间：2019年7月15日13:01:37
//MyString类的定义

#include <iostream>
#include "MyString.h"

//构造函数
CMyString::CMyString()
{ 
	m_str = new char('\0');
	m_nLength = 0;
}

CMyString::CMyString(size_t length, char ch)
{
	if (length < 0)
		return;

	m_str = new char[length+1];    //末尾有'\0' 
	for (size_t i = 0; i < length; i++)    //size_t ： unsigned int  
	{
		*(m_str + i) = ch;
		//m_str[i] = ch;       //另一种写法
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

	//得到长度
	while ('\0' != *pStr)
	{
		nCount++;
		pStr++;
	}

	//申请空间
	m_str = new char[nCount+1];

	//空间赋值
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
		m_str[j] = str.c_str()[i];   //没有重载下标运算符，只能通过指针查找元素
	}
	m_str[length] = '\0';
	m_nLength = length;
}

//拷贝构造函数
CMyString::CMyString(const CMyString &str)
{
	m_str = new char[str.size() + 1];

	for (size_t i = 0; i < str.size()+1; i++)
	{
		m_str[i] = str.c_str()[i];
	}

	m_nLength = str.size();
}

//拷贝赋值运算符
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

//析构函数
CMyString::~CMyString()
{
	if (NULL != m_str)
	{
		delete[] m_str;
	}
}

//获得字符串首地址
const char* CMyString::c_str() const
{
	return m_str;
}

//获得字符串字符个数
const size_t CMyString::size() const
{
	return m_nLength;
}

//设置字符个数
void CMyString::SetMLength(size_t length)
{
	m_nLength = length;
}

//获取字符串首地址变量的引用
char* &CMyString::GetMStr()
{
	return m_str;
}

//输出重载
std::ostream &operator<<(std::ostream &os, const CMyString &str)
{
	//os << str.c_str();   //输入输出重载不声明友元函数时的写法
	os << str.m_str;

	return os;
}

//输入重载
std::istream &operator>>(std::istream &is, CMyString &str)
{
	//输入字符串
	char arr[20] = { 0 };
	is >> arr;

	//计算字符串长度
	int i = 0;
	for (i = 0; arr[i] != '\0'; i++);

	//释放空间
	//delete[] str.c_str();    //输入输出重载不声明友元函数时的写法
	delete[] str.m_str;

	//申请空间
	//str.GetMStr() = new char[i + 1];   //输入输出重载不声明友元函数时的写法
	str.m_str = new char[i + 1];   //i是下标，包含了0，所以实际申请空间需要加1

	//赋值
	int j = 0;
	for (j = 0; j <= i; j++)       //第i个字符是'\0'也需要赋值
	{
		//str.GetMStr()[j] = arr[j];    //输入输出重载不声明友元函数时的写法
		str.m_str[j] = arr[j];
	}

	//设置字符个数
	//str.SetMLength(i);    //输入输出重载不声明友元函数时的写法
	str.m_nLength = i;

	return is;
}