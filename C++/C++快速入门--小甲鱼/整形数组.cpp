//时间：2019年3月8日20:19:26
//整形数组
# include <iostream>

using namespace std;
//#define ITEM 10

int main()
{
	const unsigned short ITEM = 10;
	int num[ITEM];
	int i, sum = 0;

	cout << "请输入" << ITEM << "个整型数据!\n\n";

	for(i=0; i<10; i++)
	{
		cout << "请输入第" << i << "个数据:" ;
		while( !(cin >> num[i]) )         //考虑非法输入的情况
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "请输入一个合法的值";
		}
		sum += num[i];
	}

	cout << "累加和为:" << sum << endl;
	cout << "平均值为:" << sum/ITEM << endl;


	return 0;
}