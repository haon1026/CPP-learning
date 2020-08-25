//ʱ�䣺2019��7��18��10:45:54
//list
//forward_list����ǰ����������������ͷ
#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

struct Node
{
	int a;
	char c;
};

struct Node1
{
	int a;
	char c;
	//���¹��캯�������Ԫ��ʱ��ʱʹ�ã����ڹ�����ʱԪ��
	Node1(int d, char e)
	{
		a = d;
		c = e;
	}
	//remove����ʹ��
	bool operator==(const Node1 &f)
	{
		if (f.a == this->a && f.c == this->c)
		{
			return true;
		}
		return false;
	}

	//sort����ʹ�� Ҫ����<�����
	bool operator<(const Node1 &f)
	{
		if (f.a > this->a)   //>ʵ�ִ�С����<��ʵ�ִӴ�С
		{
			return true;
		}
		return false;
	}


};

//for_each()
void fun(Node &d)
{
	cout << d.a << " " << d.c << endl;   //d.cǿ��ת����int�����0
}

void fun1(Node1 &d)
{
	cout << d.a << " " << d.c << endl;   //d.cǿ��ת����int�����0
}

//���壬���캯��
void ListDefine()
{
	//list<Node> ls
	list<Node> li(5);
	for_each(li.begin(), li.end(), fun);   

	Node no = { 12, 'a' };
	list<Node> li1(6, no);
	for_each(li1.begin(), li1.end(), fun);   

	list<Node> li2(li1);
	for_each(li2.begin(), li2.end(), fun);

	Node no1 = { 5, 'w' };
	list<Node> lix(6, no1);
	list<Node> li3(lix.begin(), lix.end());
	for_each(li3.begin(), li3.end(), fun);
	
	//������
	list<Node>::iterator iter = li3.begin();
	iter++;  //ok
	iter++;
	//iter + 2; //���󣬵�����+һ������ʾָ��ָ���ƫ�ƣ��������������е��������ܽ��мӷ����㣬ֻ���Լӣ�vector���߶�����
	for_each(iter, li3.end(), fun);

}

//��С     
void ListSize()
{
	Node no = { 12, 'a' };
	list<Node> li(6, no);

	cout << li.size() << endl;
	cout << li.empty() << endl;
	for_each(li.begin(), li.end(), fun);
	cout << endl;

	li.resize(0);
	cout << li.size() << endl;
	cout << li.empty() << endl;
	for_each(li.begin(), li.end(), fun);
	cout << endl;
}

//���������  ��֧���±���ʣ�����
void ListCoutAdd()
{
	Node no = { 12, 'a' };                                             
	list<Node> li(6, no);

	//���ȫ�� �� 1.ѭ�������� 2.for_each
	for (list<Node>::iterator iter = li.begin(); iter != li.end(); iter++)
	{
		cout << iter->a << " " << iter->c << endl;
	}                                                                                                     
	cout << endl;

	//��������ַ� �� front��back�� ��֧���±�[]����
	cout << li.back().a << " " << li.back().c << endl;
	cout << li.front().a << " " << li.front().c << endl;
	cout << endl;
	
	//���Ԫ��
	list<Node1> li1;      
	//Node no1 = { 10, 'b' };    //���ÿ���һ��Ԫ�ض�����һ��������鷳����д���캯��
	//ͷ���
	li1.push_front(Node1(10, 'b'));   //������ʱ����
	li1.push_front(Node1(5, 'c')); 
	//β���
    li1.push_back(Node1(6, 'a'));
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	//�м����      ��������ָ����λ�����Ԫ�أ�����Ӧ��Ԫ�������ƣ�����˵����ָ����Ԫ��ǰ���Ԫ��
	list<Node1>::iterator iter1 = li1.begin();
	iter1++;
	li1.insert(iter1, Node1(15, 'k'));    //��ָ����������λ�ü���һ��
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	cout << iter1->a << endl;    //��ʱ�������10�����ڲ����ķ��صĵ�����û�б��棬����iter1����ָ���ԭ�ȵ�λ��
                                       
	li1.insert(iter1, 2, Node1(2, 'f'));    //��ָ����������λ�ü�����һ����ֵ        
	for_each(li1.begin(), li1.end(), fun1);   
	cout << endl;                  
	
	list<Node1> l3(3, Node1(3, 'w'));
	li1.insert(iter1, l3.begin(), l3.end());   //��ĳ��������������һ�������ĵ��м�һ��
	for_each(li1.begin(), li1.end(), fun1);
	
}

//ɾ�����޸�
void ListDelete_Change()
{
	list<Node1> li;
	li.push_front(Node1(10, 'f'));
	li.push_front(Node1(12, 'a'));
	li.push_front(Node1(13, 'b'));
	li.push_front(Node1(14, 'c'));
	li.push_front(Node1(15, 'd'));
	li.push_front(Node1(15, 'd'));
	li.push_front(Node1(16, 'e'));
	li.push_front(Node1(17, 'e'));
	li.push_front(Node1(18, 'c'));
	li.push_front(Node1(19, 'e'));
	//βɾ��
	li.pop_back();    
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//ͷɾ��
	li.pop_front();    
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//ɾ��ָ��Ԫ�أ�һ�� 
	list<Node1>::iterator iter = li.begin();
	iter++;
    iter++;
	cout << iter->a << " " << iter->c << endl;
	li.erase(iter);              
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//cout << iter->a << " " << iter->c << endl;   //������ʱ��iter����ɾ��ǰ��

	//ɾ��ָ��Ԫ�أ�һ��
	iter = li.begin();
	li.erase(++iter, --li.end()); 
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	
	//ɾ��ȫ��
	//li.clear();     
	
	//ɾ�����и�������ͬ��Ԫ��     ���Ԫ���ǽṹ��Ҫ����==
	li.remove(Node1(18, 'c'));   
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	
	//ɾ��list���ظ���Ԫ��
	li.push_front(Node1(19, 'e'));
	li.push_front(Node1(19, 'e'));
	li.push_front(Node1(19, 'e'));
	for_each(li.begin(), li.end(), fun1);
	li.unique();   
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	
	//�޸ģ�1.���õ������޸ģ�2.��ֵ����assign 3.=��ֵ
	//��ֵ����assign
	li.assign(5, Node1(2, 'c'));
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	//= ��ֵ
	list<Node1> ls1;           
	ls1 = li;
	for_each(ls1.begin(), ls1.end(), fun1);
	cout << endl;

	//��ֵΪ��һ�������һ��
	iter = li.begin();
	ls1.assign(++iter, --li.end());   
	for_each(li.begin(), li.end(), fun1);
	for_each(ls1.begin(), ls1.end(), fun1);
}

//����
void ListDo()
{
	list<Node1> li;
	li.push_front(Node1(16, 'd'));
	li.push_front(Node1(12, 'a'));
	li.push_front(Node1(14, 'c'));
	li.push_front(Node1(16, 'e'));
	li.push_front(Node1(15, 'd'));
	li.push_front(Node1(13, 'b'));

	//��������list������
	list<Node1> li1;
	li1.push_back(Node1(12, 'a'));
	li1.swap(li);
	for_each(li.begin(), li.end(), fun1);
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;

	//��list��Ԫ�ص�ת
	li1.reverse();
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;

	//����
	li1.sort();     //��Ա������Ĭ�ϴ�С�������Ԫ���ǽṹ��Ҫ����< �����㷨��sort��һ����������������Դ�����ʹ�õ�ʱ����Բ�ѡ���㷨������
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	//�ϲ����������list,˳��Ҫһ��
	list<Node1> li2;
	li2.push_front(Node1(17, 'c'));
	li2.push_front(Node1(13, 'c'));
	li2.push_front(Node1(10, 'c'));
	li.merge(li1);
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//ƴ��
	//splice
}

//�㷨
void ListAL()
{
	//find : �ҵ����ص�����λ�ã�û�ҵ���������Чʹ�û����
	list<Node1> li;
	li.push_front(Node1(16, 'd'));
	li.push_front(Node1(12, 'a'));
	li.push_front(Node1(14, 'c'));
	li.push_front(Node1(16, 'e'));
	li.push_front(Node1(15, 'd'));
	li.push_front(Node1(13, 'b'));

	list<Node1>::iterator iter = find(li.begin(), li.end(), Node1(14, 'b'));    
	
	cout << iter->a << " " << iter->c << endl;
	
}
/*
int main()
{
	//���壬���캯��
	//ListDefine();

	//��С       //listû�������ĸ������ṹ��Ҫʱֱ�Ӳ���Ԫ�أ����ÿ�����������
	//ListSize();

	//���������
	//ListCoutAdd();

	//ɾ�����޸�
	//ListDelete_Change();

	//����
	//ListDo();

	//�㷨
	//ListAL();

	system("pause");

	return 0;
}
*/
