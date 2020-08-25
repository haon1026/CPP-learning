//时间：2019-03-06 0:24
//cin.peek & cin.get
# include <iostream>

using namespace std;

int main()
{
	char p;
	cout << "请输入一段文本:\n";

	while( cin.peek() != '\n')   //peek看一眼
	{
		p = cin.get();
		cout << p;
	}
	cout << endl;

	return 0;
}