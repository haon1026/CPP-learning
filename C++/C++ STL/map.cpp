//时间：2019年7月18日10:52:02
//map
//底层结构：红黑树    复杂度：log2^N(2为底，N为对数)
#include <iostream>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

void fun(pair<int, char> pr)
{
	cout << pr.first << " " << pr.second << endl;
}

//构造函数
void MapConstruct()
{
	typedef pair<int, char> in_pair;
	pair<map<int, char>::iterator, bool> pr;    //插入后返回类型
	//无参构造    插入一个键值对
	map<int, char> mp;
	mp.insert(pair<int, char>(1, 'a'));
	pr = mp.insert(in_pair(2, 'b'));
	cout << pr.second << endl;
	pr = mp.insert(in_pair(2, 'c'));    //键值不能重复，插入后返回类型是pair<iterator, bool>可以以此判断是否插入成功
	cout << pr.second << endl;
	mp.insert(in_pair(8, 'c'));
	mp.insert(in_pair(3, 'c'));       //插入后会自动排序
	mp.insert(in_pair(5, 'q'));
	mp.insert(in_pair(4, 'w'));

	//在某个位置插入一个键值对
	map<int, char>::iterator iter = mp.begin();
	iter++;
	iter++;
	iter++;
	iter++;
	//iter + 4;     //迭代器不能直接加，只能自加，链表
	mp.insert(iter, in_pair(10, 'r'));    //不管往哪插入，最后都是会自动排序的
	for_each(mp.begin(), mp.end(), fun);
	cout << endl;

	//插入某一个对象的一段
	map<int, char> mp1;
	mp1.insert(in_pair(11, 'a'));
	mp1.insert(in_pair(12, 'c'));
	mp1.insert(mp.begin(), mp.end());
	for_each(mp1.begin(), mp1.end(), fun);
	cout << endl;
	
	//一个参数
	map<int, char> mp2(mp1);
	for_each(mp2.begin(), mp2.end(), fun);
	cout << endl;

	//另一个对象的一段
	map<int, char> mp3(mp2.begin(), mp2.end());
	for_each(mp3.begin(), mp3.end(), fun);
	cout << endl;
	
}                                                        

//属性
void MapPro()
{
	typedef pair<int, char> in_pair;
	map<int, char> mp;
	mp.insert(in_pair(1, 'a'));
	mp.insert(in_pair(2, 'b'));
	mp.insert(in_pair(3, 'c'));
	mp.insert(in_pair(4, 'd'));
	mp.insert(in_pair(5, 'e'));

	cout << mp.size() << endl;
	cout << mp.count(2) << endl;   //返回指定值在map中的数量，map不允许重读，在map中以非0即1,multmap可能大于1
	cout << mp.empty() << endl;

	map<int, char>::iterator iter = mp.begin();
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
}

//删除
void MapDelete()
{
	typedef pair<int, char> in_pair;
	map<int, char> mp;

	mp.insert(in_pair(1, 'a'));
	mp.insert(in_pair(2, 'b'));
	mp.insert(in_pair(3, 'c'));
	mp.insert(in_pair(4, 'd'));
	mp.insert(in_pair(5, 'e'));
	map<int, char>::iterator iter = mp.begin();
	iter++;
	iter++;
	//mp.erase(iter);     //删除一个
	mp.erase(iter, mp.end());  //删除一段
	mp.erase(1);    //删除指定键值
	iter = mp.begin();
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
}

//其他
void MapOther()
{
	typedef pair<int, char> in_pair;
	map<int, char, greater<int>> mp;   //默认从小到大，加仿函数greater变从大到小

	mp.insert(in_pair(1, 'a'));
	mp.insert(in_pair(2, 'b'));
	mp.insert(in_pair(3, 'c'));
	mp.insert(in_pair(4, 'd'));
	mp.insert(in_pair(5, 'e'));
	map<int, char, greater<int>>::iterator iter = mp.begin();
	
	map<int, char>::iterator iter1 = mp.find(2);    //通过键值查找，如果找到返回键值所在的迭代器,
	//cout << mp.find(6)->first << " " << mp.find(6)->second << endl; // 如果没找到返回尾后元素的迭代器，无法输出会崩溃
	if (mp.end() == mp.find(6))
	{
		cout << "ok" << endl;
	} 
	cout << iter1->first << " " << iter1->second << endl;
	
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	cout << mp.lower_bound(4)->first << endl;    //4   由于排序设定了从大到小，输出结果与从小到大的结果不一样，可发现输出是该键值或者是该键值往后的键值
	cout << mp.upper_bound(4)->first << endl;    //3
	//lower_bound(key)  返回参数key位置，该位置的键值不小于key : key <= pos    
	//upper_bound(key)  返回位置，该位置的键值>key : key < pos
	//equal_range(key)  返回这个区间   lower_bound - upper_bound
}
/*
int main()
{
	//构造函数
	//MapConstruct();

	//属性
	//MapPro();

	//删除
	//MapDelete();

	//其他函数
	//MapOther();

	system("pause");
	return 0;
}
*/