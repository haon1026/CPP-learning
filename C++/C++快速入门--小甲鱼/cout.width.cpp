//时间：2019-03-06
//cin.width     域宽设置仅对下一行流读入或流插入操作有效，在一次操作完后被置0
# include <iostream>

using namespace std;

int main()
{
	int width = 4;
	char str[20];

	cout << "请输入一段文本:\n";
	cin.width(5);     //下次输入域宽为5，提取4个字符

	while( cin >> str )     //读入部分字符直至遇到空格或非法输入   welcome
	{
		cout.width(width++);   //下次输出4个字符，宽度加一       
		cout << str << endl;   // welc
		cin.width(5);          //重新设置
	}

	return 0;
}