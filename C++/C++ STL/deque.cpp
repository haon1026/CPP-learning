//时间：2019年7月18日10:46:10
//deque



#include <iostream>
#include <deque>

using namespace std;

/*
int main()
{
	//对比vector : 没有capacity和reserve ,多了push_front和pop_front,其他函数一
	deque<int> de;
	de.push_front(12);

	deque<int>::iterator iter = de.begin();

	for (iter; iter != de.end(); iter++)
	{
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}
*/

/*
vector 连续空间   随机位置插入/删除效率低，随机访问效率高，不支持头添加，支持尾添加
list 不连续空间   随机位置插入/删除效率高，不支持随机访问，支持头添加，支持尾添加
deque 段连续空间  随机位置插入/删除效率不高（数据量512），支持随机访问随机访问（比vector慢，因为要做堆跳转），迭代器结构复杂，这回降低访问效率，支持头添加，支持尾添加
使用选择：随机访问频率高，选择vector;  插入删除频率高，头尾添加，选择list;  随机访问+头添加，选择deque
*/