//时间：2019年3月8日21:08:10
//字符型数组
# include <iostream>
# include <string>

int main()
{
	std::string str;
	std::cout << "输入一个字符串：";
	//std::cin >> str;
	std::getline(std::cin, str);
	std::cout << str << "\n"; 

	return 0;
}