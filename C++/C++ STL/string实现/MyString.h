//ʱ�䣺2019��7��15��12:55:44
//MyString������

//#pragma once  ��һ�ַ�ֹ�ظ������ķ���
#ifndef _MYSTRING
#define _MYSTRING

class CMyString
{
public:
	//�������
	friend std::ostream &operator<<(std::ostream &os, const CMyString &str);

	//��������
	friend std::istream &operator>>(std::istream &os, CMyString &str);

	//���캯��
	CMyString();
	CMyString(size_t length, char ch);
	CMyString(const char *str);
	CMyString(const char *str, size_t length);
	CMyString(CMyString &str, size_t index, size_t length);
	//�������캯��
	CMyString(const CMyString &str);
	//������ֵ�����
	CMyString& operator=(const CMyString &str);
	//��������
	~CMyString();

	//����ַ����׵�ַ
	const char *c_str() const;

	//����ַ����ַ�����
	const size_t size() const;

	//�����ַ�������
	void SetMLength(size_t length);       //����������ز�������Ԫ����ʱ��Ҫ�ĺ���

	//��ȡ�ַ����׵�ַ����������
	char* &GetMStr();       //����������ز�������Ԫ����ʱ��Ҫ�ĺ���

private:
	//�ַ����׵�ַ
	char *m_str;

	//�ַ����ַ�����	
	size_t m_nLength;
};

//�������
std::ostream &operator<<(std::ostream &os, const CMyString &str);

//��������
std::istream &operator>>(std::istream &os, CMyString &str);

#endif
