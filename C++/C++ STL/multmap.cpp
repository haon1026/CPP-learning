//ʱ�䣺2019��7��18��13:01:54
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

	cout << mmp.count(1) << endl;   //����
	cout << mmp.find(1)->first << " " << mmp.find(1)->second << endl;  //�ҵ��Ļ�find���ص�һ��ƥ���ֵ�ĵ�����
	cout << mmp.find(3)->first << " " << mmp.find(3)->second << endl;  //û�ҵ��Ļ�find����β��Ԫ�صĵ�����
	multimap<int, char>::iterator iter = mmp.begin();

	for (iter; iter != mmp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	system("pause");
	return 0;
}
