//时间：2019-03-06 0:01
//输入一串整数和任意数目的空格,计算整数和

# include <iostream>

using namespace std;

int main()
{
	int sum = 0;

	cout << "请输入一串整数和任意数目的空格:";

	int i;
	while( cin >> i )        //cin输入操作符又称提取操作符，一次从输入流对象cin提取一个整数         输入3.14 输出3 第一次读入3第二次读入.非法字符退出           
	{                          //键盘输入-〉操作系统的键盘缓冲区-〉enter之后，内容传输到cin流的内部缓冲区      //  >>操作符随后从缓冲区提取信息
		sum += i;
		while( cin.peek() == ' ' )    //peek看一下又放回去
		{ 
			cin.get();                //消耗空格
		}
		if( cin.peek() == '\n')       //结束判断
		{
			break;
		}
	}
	cout << "结果是：" << sum << endl;

	return 0;
}