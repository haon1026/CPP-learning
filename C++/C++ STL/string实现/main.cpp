//时间：2019年7月15日12:15:51
//MyString实现string构造函数的仿写
//通用写法是类声明头文件.h + 类定义源文件.cpp + 主函数main.cpp

#include <iostream>
#include "MyString.h"

int main()
{
	//C++ cout << 遇到字符型指针会将其当作字符串名来处理，输出指针所指的字符串
	//把字符型指针转换为无类型指针可输出其指针指向的地址

	//测试构造函数
	CMyString str;
	const char* pstr = str.c_str();
	std::cout << pstr << std::endl;      //输出：空

	CMyString str1(5, 'b');
	std::cout << str1.c_str() << std::endl;   //输出：bbbbb

	CMyString str2("abcdefg");
	std::cout << str2.c_str() << std::endl;   //输出：abcdefg

	CMyString str3("abcdefgh", 6);
	std::cout << str3.c_str() << std::endl;  //输出：abcdef

	CMyString str4(str3, 1, 5);
	std::cout << str4.c_str() << std::endl;   //输出：bcdef

	//测试拷贝构造函数
	CMyString str5(str2);     //CMyString str5 = str2；调用的也是拷贝构造函数
	std::cout << str5.c_str() << std::endl;   //输出：abcdefg
	std::cout << str5.size() << std::endl;

	//测试拷贝赋值运算符
	CMyString str6;
	str6 = str4;
	std::cout << str6.c_str() << std::endl;   
	std::cout << str6.size() << std::endl;

	//测试输入输出重载
	CMyString str7("abc");
	std::cout << str7 << std::endl;
	std::cin >> str7;
	std::cout << str7 << std::endl;

	system("pause");
	return 0;
}