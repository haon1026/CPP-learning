//时间：2019年7月16日23:48:37
//vector

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

//定义
void STLDefine()
{
	vector<int> vec;   //类型种类：基本数据类型（如果是char类型，跟string一样），结构体，指针，对象（普通类对象，其他容器的对象）
}

//构造函数
void STLConstructctor()
{
	vector<int> vec;
	//cout << vec[0];   //错误，空容器不能直接用下标进行操作 ，只能对已存在的元素进行操作

	vector<int> vec1(5);          //本质是连续的数组
	for (int i = 0; i < 5; i++)   //下标越界会报错
	{
		cout << vec1[i] << " ";
	}
	cout << endl;

	vector<int> vec2(5, 6);
	for (int i = 0; i < 5; i++)  
	{
		cout << vec2[i] << " ";
	}
	cout << endl;

	vector<int> vec3(vec2);     //类型要相同，比如两个类型都是char
	for (int i = 0; i < 5; i++)
	{
		cout << vec3[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter1 = vec3.begin();    //iter1本质是int *指针
	vector<int>::iterator iter2 = vec3.end();
	vector<int> vec4(iter1, iter2);     
	for (int i = 0; i < 5; i++)
	{
		cout << vec4[i] << " ";
	}
	cout << endl;

}

//属性
void STLPro()
{
	//容量：capacity
	//初始容量  vector初始容量跟定义的对象数量有关，初始容量 = 对象个数，跟string不一样
	vector<int> vec;   // 0
	cout << vec.capacity() << endl;

	vector<int> vec1(10);  // 10       
	cout << vec1.capacity() << endl;      

	vector<int> vec2(5);  // 5
	cout << vec2.capacity() << endl;
	
	//空间不够用时增加现有容量的一半     不同编译器不一样，vc++6.0 和 codeblock是增加一倍
	vec2.push_back(10);  // 7 = 5 + 5/2
	cout << vec2.capacity() << endl;

	vec2.push_back(10);
	vec2.push_back(10);   // 10 = 7 + 7/2
	cout << vec2.capacity() << endl; 

	//reserve改变容量，只能变大不能变小，设置多少容量就是多少
	vec.reserve(10);
	cout << vec.capacity() << endl;

	//重新申请空间后，生成新的数组，原有迭代器失效，旧元素移动到新空间，新空间插入新元素

	cout << endl;

	//大小
	vector<int> vec3(4);
	vec3.reserve(10);         //容量变大，有效元素的个数不变
	cout << vec3.capacity() << endl;
	cout << vec3.size() << endl;    //元素个数

	vec3.resize(3);     //重新设置元素个数，当元素个数缩小时，容量不变，增大至大于容量时，容量会发生改变
	cout << vec3.capacity() << endl;
	cout << vec3.size() << endl;

	cout << vec3.empty() << endl;

}

//for_each调用函数
void fun(int i)
{
	cout << i << " ";
}

//查找
void STLDO()
{
	//输出单个元素
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	//下标运算符输出，越界中断
	for (int i = 0; i < 10; i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	//at输出    越界抛出异常，可处理避免中断
	for (int i = 0; i < 10; i++)
	{
		cout << vec.at(i) << " ";
	}
	cout << endl;

	//bcak()返回尾巴的元素
	cout << vec.back() << endl;

	//begin()返回头元素的迭代器
	cout << *vec.begin() << endl;


	//输出全部
	//循环 迭代器或者下标运算
	vector<int>::iterator iter1 = vec.begin();
	for (iter1; iter1 != vec.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	//for_each()
	for_each(vec.begin(), vec.end(), fun);  //fun是函数地址
}

//添加和删除
void STLAdd_Delete()
{
	//添加：尾添加效率非常高（不考虑重新增加空间） ， 中间添加的效率低
	//末尾添加 : push_back
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);    
	}      
	//指定位置添加insert
	vec.insert(vec.begin()+2, 12);        //在某个位置加入某个值
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vec.insert(vec.begin(), 5, 8);   //在某个迭代器后加入若干个相同的值
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vector<int> vec1(5, 1);
	vec.insert(vec.begin()+2, vec1.begin(), vec1.begin()+3);   //在某个迭代器后加入另一个向量的某一段
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//删除
	//删除尾元素 : pop_back()
	vec.pop_back();
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//删除指定元素
	vec.erase(vec.begin()+3);      //删除某个位置的值
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vec.erase(vec.begin()+2, vec.end());      //删除某一段
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//删除所有
	vec.clear();
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	
}

//改变和交换
void STLChange()
{
	//改变：
	//1利用输出的形式改
	//2赋值函数assign（重新赋值，清除以前的） 
	vector<int> vec(5, 1);
	vector<int> vec1(3, 2);
	vec.assign(vec1.begin(), vec1.end());      //改变为某个对象的一段
	for_each(vec.begin(), vec.end(), fun);   
	cout << endl;

	vec.assign(5, 5);      //改变为n个val
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//交换
	vector<int> vec2(10, 0);
	vec.swap(vec2);
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
	for_each(vec2.begin(), vec2.end(), fun);
	cout << endl;
}

//排序
void STLSort()
{
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(4);

	//从小到大
	sort(vec.begin() + 2, vec.end());  //部分排序
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
	sort(vec.begin(), vec.end());   //全部排序
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//从大到小
	sort(vec.begin(), vec.end(), greater<int>());
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//乱序排序
	random_shuffle(vec.begin(), vec.end());   //如果不设置种子，每次的乱序都是一个顺序
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	srand((unsigned int)(time)(0));          //种种子，每次顺序都是不一样的 
	random_shuffle(vec.begin(), vec.end());
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
}

/*
int main()
{
	//定义
	//STLDefine();

	//构造函数
	//STLConstructctor();

	//属性
	//STLPro();

	//查找
	//STLDO();

	//添加和删除，交换
	//STLAdd_Delete();

	//改变和交换
	//STLChange();

	//排序
	STLSort();

	system("pause");
	return 0;
}
*/
