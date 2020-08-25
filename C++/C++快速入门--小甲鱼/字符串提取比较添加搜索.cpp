//时间：2019年3月8日21:33:34
//字符串操作

# include <iostream>
# include <string>

using namespace std;

int main()
{
	string s1 = "welcome to china";
	string s2,s3;
	int len, index;

	s2 = s1.substr(5,5);     //考虑越界问题
	cout << s1 << endl;
	cout << s2 << endl;

	if( s2 > s1 )  // < > != 
		cout << "s2 > s1" << endl;
	else
		cout << "s2 < s1" << endl;

	s3 = s1 + s2;
	len = s3.size();
	cout << s3 <<endl;
	cout << len << endl;

	index = s1.find(s2,6);  //find函数可以在字符串中查找子字符串中出现的位置,第一个参数是待查找的子字符串，第二个参数是表示开始查找的位置，如果第二个参数不指名的话则默认从0开始查找，也即从字符串首开始查找。
	cout << index << endl;
	index = s1.rfind(s2,3); //rfind函数与find函数很类似，同样是在字符串中查找子字符串，不同的是find函数是从第二个参数开始往后查找，而rfind函数则是最多查找到第二个参数处
	cout << index << endl;






	


	return 0;
}