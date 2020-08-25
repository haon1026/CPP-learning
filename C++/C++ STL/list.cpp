//时间：2019年7月18日10:45:54
//list
//forward_list：向前链表，操作都在链表头
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
	//以下构造函数在添加元素时临时使用，便于构造临时元素
	Node1(int d, char e)
	{
		a = d;
		c = e;
	}
	//remove函数使用
	bool operator==(const Node1 &f)
	{
		if (f.a == this->a && f.c == this->c)
		{
			return true;
		}
		return false;
	}

	//sort函数使用 要重载<运算符
	bool operator<(const Node1 &f)
	{
		if (f.a > this->a)   //>实现从小到大，<可实现从大到小
		{
			return true;
		}
		return false;
	}


};

//for_each()
void fun(Node &d)
{
	cout << d.a << " " << d.c << endl;   //d.c强制转换成int可输出0
}

void fun1(Node1 &d)
{
	cout << d.a << " " << d.c << endl;   //d.c强制转换成int可输出0
}

//定义，构造函数
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
	
	//迭代器
	list<Node>::iterator iter = li3.begin();
	iter++;  //ok
	iter++;
	//iter + 2; //错误，迭代器+一个数表示指针指向的偏移，在链表型容器中迭代器不能进行加法运算，只能自加，vector两者都可用
	for_each(iter, li3.end(), fun);

}

//大小     
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

//输出和增加  不支持下标访问，链表
void ListCoutAdd()
{
	Node no = { 12, 'a' };                                             
	list<Node> li(6, no);

	//输出全部 ： 1.循环迭代器 2.for_each
	for (list<Node>::iterator iter = li.begin(); iter != li.end(); iter++)
	{
		cout << iter->a << " " << iter->c << endl;
	}                                                                                                     
	cout << endl;

	//输出单个字符 ： front和back， 不支持下标[]访问
	cout << li.back().a << " " << li.back().c << endl;
	cout << li.front().a << " " << li.front().c << endl;
	cout << endl;
	
	//添加元素
	list<Node1> li1;      
	//Node no1 = { 10, 'b' };    //如果每添加一个元素都创建一个对象很麻烦，编写构造函数
	//头添加
	li1.push_front(Node1(10, 'b'));   //创建临时对象
	li1.push_front(Node1(5, 'c')); 
	//尾添加
    li1.push_back(Node1(6, 'a'));
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	//中间添加      都是在所指定的位置添加元素，把相应的元素往后移，或者说是在指定的元素前添加元素
	list<Node1>::iterator iter1 = li1.begin();
	iter1++;
	li1.insert(iter1, Node1(15, 'k'));    //在指定迭代器的位置加入一个
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	cout << iter1->a << endl;    //此时输出的是10，由于插入后的返回的迭代器没有保存，所以iter1还是指向的原先的位置
                                       
	li1.insert(iter1, 2, Node1(2, 'f'));    //在指定迭代器的位置加入多个一样的值        
	for_each(li1.begin(), li1.end(), fun1);   
	cout << endl;                  
	
	list<Node1> l3(3, Node1(3, 'w'));
	li1.insert(iter1, l3.begin(), l3.end());   //在某个迭代器加入另一个向量的的中间一段
	for_each(li1.begin(), li1.end(), fun1);
	
}

//删除和修改
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
	//尾删除
	li.pop_back();    
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//头删除
	li.pop_front();    
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//删除指定元素，一个 
	list<Node1>::iterator iter = li.begin();
	iter++;
    iter++;
	cout << iter->a << " " << iter->c << endl;
	li.erase(iter);              
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//cout << iter->a << " " << iter->c << endl;   //报错，此时的iter还是删除前的

	//删除指定元素，一段
	iter = li.begin();
	li.erase(++iter, --li.end()); 
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	
	//删除全部
	//li.clear();     
	
	//删除所有跟参数相同的元素     如果元素是结构体要重载==
	li.remove(Node1(18, 'c'));   
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	
	//删除list中重复的元素
	li.push_front(Node1(19, 'e'));
	li.push_front(Node1(19, 'e'));
	li.push_front(Node1(19, 'e'));
	for_each(li.begin(), li.end(), fun1);
	li.unique();   
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	
	//修改：1.利用迭代器修改，2.赋值函数assign 3.=赋值
	//赋值函数assign
	li.assign(5, Node1(2, 'c'));
	for_each(li.begin(), li.end(), fun1);
	cout << endl;
	//= 赋值
	list<Node1> ls1;           
	ls1 = li;
	for_each(ls1.begin(), ls1.end(), fun1);
	cout << endl;

	//赋值为另一个对象的一段
	iter = li.begin();
	ls1.assign(++iter, --li.end());   
	for_each(li.begin(), li.end(), fun1);
	for_each(ls1.begin(), ls1.end(), fun1);
}

//其他
void ListDo()
{
	list<Node1> li;
	li.push_front(Node1(16, 'd'));
	li.push_front(Node1(12, 'a'));
	li.push_front(Node1(14, 'c'));
	li.push_front(Node1(16, 'e'));
	li.push_front(Node1(15, 'd'));
	li.push_front(Node1(13, 'b'));

	//交换两个list的内容
	list<Node1> li1;
	li1.push_back(Node1(12, 'a'));
	li1.swap(li);
	for_each(li.begin(), li.end(), fun1);
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;

	//把list的元素倒转
	li1.reverse();
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;

	//排序
	li1.sort();     //成员函数，默认从小到大，如果元素是结构体要重载< ，与算法的sort不一样，如果容器本身自带排序，使用的时候可以不选择算法的排序
	for_each(li1.begin(), li1.end(), fun1);
	cout << endl;
	
	//合并两个有序的list,顺序要一致
	list<Node1> li2;
	li2.push_front(Node1(17, 'c'));
	li2.push_front(Node1(13, 'c'));
	li2.push_front(Node1(10, 'c'));
	li.merge(li1);
	for_each(li.begin(), li.end(), fun1);
	cout << endl;

	//拼接
	//splice
}

//算法
void ListAL()
{
	//find : 找到返回迭代器位置，没找到迭代器无效使用会崩溃
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
	//定义，构造函数
	//ListDefine();

	//大小       //list没有容量的概念，链表结构需要时直接插入元素，不用考虑容量问题
	//ListSize();

	//输出和增加
	//ListCoutAdd();

	//删除和修改
	//ListDelete_Change();

	//其他
	//ListDo();

	//算法
	//ListAL();

	system("pause");

	return 0;
}
*/
