//时间：2019年7月15日12:55:44
//MyString类声明

//#pragma once  另一种防止重复包含的方法
#ifndef _MYSTRING
#define _MYSTRING

class CMyString
{
public:
	//输出重载
	friend std::ostream &operator<<(std::ostream &os, const CMyString &str);

	//输入重载
	friend std::istream &operator>>(std::istream &os, CMyString &str);

	//构造函数
	CMyString();
	CMyString(size_t length, char ch);
	CMyString(const char *str);
	CMyString(const char *str, size_t length);
	CMyString(CMyString &str, size_t index, size_t length);
	//拷贝构造函数
	CMyString(const CMyString &str);
	//拷贝赋值运算符
	CMyString& operator=(const CMyString &str);
	//析构函数
	~CMyString();

	//获得字符串首地址
	const char *c_str() const;

	//获得字符串字符个数
	const size_t size() const;

	//设置字符串个数
	void SetMLength(size_t length);       //输入输出重载不声明友元函数时需要的函数

	//获取字符串首地址变量的引用
	char* &GetMStr();       //输入输出重载不声明友元函数时需要的函数

private:
	//字符串首地址
	char *m_str;

	//字符串字符个数	
	size_t m_nLength;
};

//输出重载
std::ostream &operator<<(std::ostream &os, const CMyString &str);

//输入重载
std::istream &operator>>(std::istream &os, CMyString &str);

#endif
