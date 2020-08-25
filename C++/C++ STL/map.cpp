//ʱ�䣺2019��7��18��10:52:02
//map
//�ײ�ṹ�������    ���Ӷȣ�log2^N(2Ϊ�ף�NΪ����)
#include <iostream>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

void fun(pair<int, char> pr)
{
	cout << pr.first << " " << pr.second << endl;
}

//���캯��
void MapConstruct()
{
	typedef pair<int, char> in_pair;
	pair<map<int, char>::iterator, bool> pr;    //����󷵻�����
	//�޲ι���    ����һ����ֵ��
	map<int, char> mp;
	mp.insert(pair<int, char>(1, 'a'));
	pr = mp.insert(in_pair(2, 'b'));
	cout << pr.second << endl;
	pr = mp.insert(in_pair(2, 'c'));    //��ֵ�����ظ�������󷵻�������pair<iterator, bool>�����Դ��ж��Ƿ����ɹ�
	cout << pr.second << endl;
	mp.insert(in_pair(8, 'c'));
	mp.insert(in_pair(3, 'c'));       //�������Զ�����
	mp.insert(in_pair(5, 'q'));
	mp.insert(in_pair(4, 'w'));

	//��ĳ��λ�ò���һ����ֵ��
	map<int, char>::iterator iter = mp.begin();
	iter++;
	iter++;
	iter++;
	iter++;
	//iter + 4;     //����������ֱ�Ӽӣ�ֻ���Լӣ�����
	mp.insert(iter, in_pair(10, 'r'));    //�������Ĳ��룬����ǻ��Զ������
	for_each(mp.begin(), mp.end(), fun);
	cout << endl;

	//����ĳһ�������һ��
	map<int, char> mp1;
	mp1.insert(in_pair(11, 'a'));
	mp1.insert(in_pair(12, 'c'));
	mp1.insert(mp.begin(), mp.end());
	for_each(mp1.begin(), mp1.end(), fun);
	cout << endl;
	
	//һ������
	map<int, char> mp2(mp1);
	for_each(mp2.begin(), mp2.end(), fun);
	cout << endl;

	//��һ�������һ��
	map<int, char> mp3(mp2.begin(), mp2.end());
	for_each(mp3.begin(), mp3.end(), fun);
	cout << endl;
	
}                                                        

//����
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
	cout << mp.count(2) << endl;   //����ָ��ֵ��map�е�������map�������ض�����map���Է�0��1,multmap���ܴ���1
	cout << mp.empty() << endl;

	map<int, char>::iterator iter = mp.begin();
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
}

//ɾ��
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
	//mp.erase(iter);     //ɾ��һ��
	mp.erase(iter, mp.end());  //ɾ��һ��
	mp.erase(1);    //ɾ��ָ����ֵ
	iter = mp.begin();
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}
}

//����
void MapOther()
{
	typedef pair<int, char> in_pair;
	map<int, char, greater<int>> mp;   //Ĭ�ϴ�С���󣬼ӷº���greater��Ӵ�С

	mp.insert(in_pair(1, 'a'));
	mp.insert(in_pair(2, 'b'));
	mp.insert(in_pair(3, 'c'));
	mp.insert(in_pair(4, 'd'));
	mp.insert(in_pair(5, 'e'));
	map<int, char, greater<int>>::iterator iter = mp.begin();
	
	map<int, char>::iterator iter1 = mp.find(2);    //ͨ����ֵ���ң�����ҵ����ؼ�ֵ���ڵĵ�����,
	//cout << mp.find(6)->first << " " << mp.find(6)->second << endl; // ���û�ҵ�����β��Ԫ�صĵ��������޷���������
	if (mp.end() == mp.find(6))
	{
		cout << "ok" << endl;
	} 
	cout << iter1->first << " " << iter1->second << endl;
	
	for (iter; iter != mp.end(); iter++)
	{
		cout << iter->first << " " << iter->second << endl;
	}

	cout << mp.lower_bound(4)->first << endl;    //4   ���������趨�˴Ӵ�С�����������С����Ľ����һ�����ɷ�������Ǹü�ֵ�����Ǹü�ֵ����ļ�ֵ
	cout << mp.upper_bound(4)->first << endl;    //3
	//lower_bound(key)  ���ز���keyλ�ã���λ�õļ�ֵ��С��key : key <= pos    
	//upper_bound(key)  ����λ�ã���λ�õļ�ֵ>key : key < pos
	//equal_range(key)  �����������   lower_bound - upper_bound
}
/*
int main()
{
	//���캯��
	//MapConstruct();

	//����
	//MapPro();

	//ɾ��
	//MapDelete();

	//��������
	//MapOther();

	system("pause");
	return 0;
}
*/