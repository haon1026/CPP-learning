//时间2019-03-06 0:35
//cin.gcount & cin.read
# include <iostream>

using namespace std;

//#define SIZE 50  宏定义
int main()
{
	const int SIZE = 50;  //C++倡导const
	char buf[SIZE];

	cout << "请输入一段文本：";
	cin.read( buf, 20 );    //read从cin流中读取20字节，放入buf数组中,同事文件指针向后移动20字节
                            //若不足20个字节遇到结尾，则以实际提取字节读取
	cout << "字符串收集到的字符数为：" << cin.gcount() << endl;   //gcount()用来提取读取的字节数

	cout << "输入的文本信息是：";
	cout.write( buf, 20 );
	cout << endl;

	return 0;
}