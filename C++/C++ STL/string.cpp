//时间：2019年7月15日11:54:07
//string

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>   // greater头文件
using namespace std;

//pragma warning(disable:4996)  //关掉警告

//定义 构造
void StrDefine()
{
	//创建对象
	string str;   // *m_str = NULL  new char('\0')  创建一个空对象的话，是指针为空还是new一个空字符

	//测试   
	//c_str函数返回一个指向正规C字符串的指针，内容与本字符串相同
	const char* pstr = str.c_str();    //可下断点调试，调试结果：地址不为NULL,字符串为空
	                                   //C++ cout << 遇到字符型指针会将其当作字符串名来处理，输出指针所指的字符串	   
	                                   //把字符型指针转换为无类型指针可输出其指针指向的地址,在此处const指针类型好像转不了
	//构造函数
	string str1(5, 'a');                                                  
	cout << str1.c_str() << endl;            

	string str2("abcdefg");
	cout << str2.c_str() << endl;      

	string str3("abcdefg", 3);
	cout << str3.c_str() << endl;     

	string str4("abcdefg", 3, 2);
	cout << str4.c_str() << endl;     

	//拷贝构造函数
	string str5(str2);    //string str5 = str2;也是调用拷贝构造函数
	cout << str5.c_str() << endl;     

	//拷贝赋值运算符
	string str6;
	str6 = str4;
	cout << str6.c_str() << endl;

	//重载运算符<< >>
	string str7("abc");
	cout << str7 << endl;           
	cin >> str7;
	cout << str7 << endl;
}

//属性
void StrProperty()
{
	//capacity() : 容量
	//vs : 少于15个，申请15个容量（至少申请15个容量），以后多余容量就增加16个大小   15 + n * 16,  
	//vc++6.0 : 至少申请31个容量，以后每次增加32个
	string str;       
	cout << str.capacity() << endl;   

	string str1(16, 'a');  
	cout << str1.capacity() << endl;  
	cout << endl;

	//reserve() : 改变容量，只能变大不能变小  15 - 31 - 47 - 63
	str1.reserve(10);             
	cout << str1.capacity() << endl;  //容量：还是31
	str1.reserve(32);   
	cout << str1.capacity() << endl;   //容量：47
	cout << endl;

	//length() : 字符串长度  ==  size() : 字符个数
	string str2("abcefg");
	cout << str2.length() << endl;     
	cout << str2.size() << endl;       

	string str3(16, 'b');
	cout << str3.length() << endl;    
	cout << str3.size() << endl;       

	string str31("ab\0cde");           //参数是C风格字符串，C风格字符串以\0结束标记，所以\0后面的字符不进行构造，传进str31的就只有"ab\0"
	cout << str31.length() << endl;    //字符串长度：2
	cout << str31.size() << endl;      //字符个数：2
	cout << str31 << endl;
	cout << str31[2] << endl;       //输出为空，包含了C风格字符串结束符'\0'      

	string str32 = {'1', '2', '\0', 'a'};     //参数是多个单字符构造时会全部构造   单字符本身无结束符'\0'
	cout << str32.length() << endl;   //字符串长度：4
	cout << str32.size() << endl;    //字符个数：4
	cout << str32 << endl;
	cout << str31[2] << endl;       //输出为空
	//cout << str31[4] << endl;       //越界报错,单字符无结束符'\0'
	cout << endl;

	//resize() : 重新设置字符个数   当元素个数大于容量时，容量会发生改变
	string str4(16, 'a');
	str4.resize(10);
	cout << str4.length() << endl;
	cout << str4.size() << endl;
	cout << str4.capacity() << endl;
	cout << str4 << endl;

	str4.resize(32);
	cout << str4.length() << endl;
	cout << str4.size() << endl;
	cout << str4.capacity() << endl;
	cout << str4 << endl;
}

//输出
void StrCout()
{
	string str2("abcdefg");

	//输出全部：重载运算符<<
	cout << str2 << endl;

	//输出全部：c_str()函数 ，返回的是字符串的首地址
	cout << str2.c_str() << endl;

	//输出单个字符：下标运算符[]
	cout << str2[7] << endl;
	//cout << str2[8] << endl;    //越界崩溃，无法处理

	//输出单个字符：at
	cout << str2.at(3) << endl;
	//cout << str2.at(8) << endl;      //越界抛出异常，可处理

	try
	{
		str2.at(8);     //index不在字符串范围内，at()将报告”out of range“错误，并抛出”out of range“异常，可处理
	}
	catch (out_of_range &a)           //catch(...) ： 三个点是捕获所有异常   out_of_range是一个类
	{
		cout << "越界了" << endl;
	}
}

//修改
void StrChange()
{
	//修改指定元素 ： 下标运算符[]或at()
	string str("abcde");
	str[2] = 's';
	str.at(3) = 'q';
	cout << str << endl;
	cout << endl;

	string str1("123456789");
	//中间插入：insert
	str.insert(2, str1);    //index位置插入一个str对象
	cout << str << endl;

	str.insert(2, "123");    //index位置插入一个字符串
	cout << str << endl;

	str.insert(2, str1, 6, 2);   //从index1位置插入另一个对象从index2位置开始的n个字符
	cout << str << endl;

	str.insert(2, "qwe", 2);    //从index位置插入一个字符串的前n个字符
	cout << str << endl;

	str.insert(2, 1, 'z');    //从index位置插入n个字符
	cout << str << endl;
	cout << endl;

	//尾巴插入：拼接
	str += str1;             //拼接对象
	cout << str << endl;

	str += "zxc";          //拼接字符串
	cout << str << endl;

	//尾巴插入：append
	str.append(str1);     //append,其他几种形式同insert类似
	cout << endl;

	//重新赋值:=赋值
	str = "zxc";          // 等号直接赋值  对象 字符串
	cout << str << endl;

	//重新赋值:>>输入
	cin >> str;          //重新输入
	cout << str << endl;

	//重新赋值：assign
	str.assign("qwerasd", 5);  //assign()函数，形式比等号赋值更多,其他几种形式同insert类似
	cout << str << endl;
	cout << endl;

	//删除
	str.erase(2, 2);      //删除指定位置开始的指定个数
	cout << str << endl;
	str.erase(0, str.length()+1);   //全部清理
	cout << str << endl;
}

//其他函数
void StrFunction()
{
	string str1("ababddefg");
	string str2("abd");
	//比较
	cout << (str1 > str2) << endl;          //重载比较运算符，结果是真和假
	cout << str1.compare(str2) << endl;     //跟一个对象比较 str1 > str2 返回1, str1 < str2 返回-1, str1 = str2 返回0,
	cout << str1.compare("asd") << endl;    //跟一个字符串比较
	cout << str1.compare(1, 2, str2) << endl;   //某一段字符串跟一个对象比较
	cout << str1.compare(1, 2, str2, 1, 2) << endl;   //某一段字符串跟一个对象的某一段比较
	cout << endl;

	//复制 把对象的某一段字符串复制到一个字符数组
	char arrStr[6] = { 0 };
	str1.copy(arrStr, 2, 3);      //拷贝str1从3开始的2个字符到arrStr
	cout << arrStr << endl; 
	cout << endl;

	//查找字串
	cout << str1.find(str2, 1) << endl;    //从st1的指定位置开始查找对象str2,找到返回在str1中的下标起始点
	cout << str1.find("dd", 1) << endl;    //从st1的指定位置开始查找字符串,找到返回在str1中的下标起始点
	cout << str1.find(str2, 3) << endl;     //找不到则返回-1，find()返回值是unsigned int,强制转换成int可得到-1
	cout << (int)str1.find(str2, 3) << endl;
	cout << str1.find("f", 2) << endl;     //找单个字符
	cout << endl;

	//返回字串
	cout << str1.substr(2, 4) << endl;        //返回指定位置的字串,从2开始的4个字符
	cout << str1.substr(2) << endl;           //没有指定字符个数的话默认为之后的全部字符
	cout << endl;

	//交换
	str1.swap(str2);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	//运算符重载
	cout << (str1 + str2) << endl;
}

//迭代器
void FunIterator()
{
	string str("abcdefg");
	string::iterator iter;    //string的迭代器可理解为char *指针

	//const char *a = str.c_str();
	//遍历1
	iter = str.begin();
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << *iter << " ";
		iter++;
	}
	cout << endl;

	//遍历2
	iter = str.begin();
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << iter[i] << " ";
	}
	cout << endl;

	//遍历3
	iter = str.begin();
	for (iter; iter != str.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << '\n' << endl;

	//通过迭代器赋值：解引用赋值
	iter = str.begin();
	for (iter; iter != str.end(); iter++)
	{
		*iter = 'a';
		cout << *iter << " ";
	}
	cout << endl;
	cout << str << endl;

	//通过迭代器赋值：下标赋值
	iter = str.begin();    //遍历完已经指向了最后一个元素的下一个，需要重新指向首字符
	iter[2] = 'w';
	cout << str << endl;
	cout << endl;

	//迭代器失效
	iter = str.begin();
	str.append(18, 'b');   //如果增加元素，导致了容量改变，重新分配空间，iter会失效，得重新赋值才能使用迭代器    （增加空间，旧数组的指针重新指向新数组）
	iter = str.begin();
	//str.append(2, 'b');  //如果增加元素，而容量没有发生变化，可继续使用 
	iter[3] = 'h';         
	cout << str << endl;
}

//迭代器的使用
void TestIterator()
{
	string str1("abc");
	string str2("efg");

	//添加
	//str1.append(str2.begin(), str2.begin()+2);  //abcef
	str1.append(str2.begin(), str2.begin()+3);  //abcefg   左闭右开  [begin    end)
	//str1.append(str2.begin(), str2.end());   //abcefg
	cout << str1 << endl;

	//删除：删除一个
	str1.erase(str1.begin()+2);    //abefg
	cout << str1 << endl;
	//删除：删除一段
	str1.erase(str1.begin()+2, str1.begin()+4);    //abg   左闭右开
	cout << str1 << endl;

	//插入：插入几个字符
	str1.insert(str1.begin()+2, 3, 'N');    //abNNNg   在指定位置前插入
	cout << str1 << endl;

	//插入：插入一个对象
	string str3("zxcvb");
	str1.insert(str1.begin()+2, str3.begin()+1, str3.end());
	cout << str1 << endl;

}

//for_each函数第三个形参的函数定义
void fun(char c)    //形参是元素的类型
{
	cout << c;
}

//string与算法   遍历
void Funforeach()
{
	string str("qweasdzxc");

	//for_each遍历元素
	for_each(str.begin(), str.end(), fun);      //遍历把每个元素传递给fun函数  fun是函数地址
	cout << endl;

	//sort排序1
	sort(str.begin(), str.end());   //排序  默认从小到大
	cout << str << endl;

	//sort排序2
	sort(str.begin(), str.end(), greater<char>());    // greater<>()仿函数，可以指定从大到小排序，头文件<functional>
	cout << str << endl;

}

/*
int main()
{
	//定义 构造
	//StrDefine();

	//属性
	//StrProperty();

	//输出
	//StrCout();

	//修改
	//StrChange();

	//其他函数
	//StrFunction();

	//迭代器
	//FunIterator();

	//迭代器的使用
	//TestIterator();

	//string与算法
	//Funforeach();

	system("pause");
	return 0;
}
*/
