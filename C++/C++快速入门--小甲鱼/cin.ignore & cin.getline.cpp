//时间：2019-03-06 0:20
//cin.ignore & cin.getline
# include <iostream>

using namespace std;

int main()
{
	char buf[20];    //最多存储19个字符

	cin.ignore(7);   //忽略7个字符
	cin.getline( buf, 10 );  //字符串默认0结尾，只能读取9个字符  

	cout << buf << endl;

	return 0;
}