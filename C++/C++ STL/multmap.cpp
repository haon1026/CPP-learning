//时间：2019年7月18日13:01:54
//multmap

#include <iostream>
#include <map>

using namespace std;

int main()
{
	multimap<int, char> mmp;
	mmp.insert(pair<int, char>(1, 'a'));
	mmp.insert(pair<int, char>(1, 'b'));
	mmp.insert(pair<int, char>(1, 'c'));
	mmp.insert(pair<int, char>(1, 'd'));
	mmp.insert(pair<int, char>(2, 'a'));

	cout << mmp.count(1) << endl;   //计数
	cout << mmp.find(1)->first << " " << mmp.find(1)->second << endl;  //找到的话find返回第一个匹配键值的迭代器
	cout << mmp.find(3)->first << " " << mmp.find(3)->second << endl;  //没找到的话find返回尾后元素的迭代器
	multimap<int, char>::iterator iter = mmp.begin();

	for (iter; iter != mmp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	system("pause");
	return 0;
}
