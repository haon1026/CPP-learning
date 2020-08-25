//时间2019年3月8日19:56:19
//利用重载函数设计一个程序，通过函数“calc()”进行计算并返回显示结果                //思考：为什么不能通过返回值不同来重载函数？调用时函数返回值是可省略的，无法判断调用哪个函数

# include <iostream>
# include <math.h>

using namespace std;
float calc( float );
float calc( float, float );
float calc( float, float, float );

int main()
{
	float x, y, z;

	cout << "请输入一个参数：";
	cin >> x;
	cout << calc( x ) << endl;

	cout << "请输入两个参数：";
	cin >> x >> y;
	cout << calc( x, y ) << endl;

	cout << "请输入三个参数：";
	cin >> x >> y >> z;
	calc( x, y, z );
	cout << calc( x, y, z ) << endl;

	return 0;
}

float calc( float x )
{
	float val;
	val = sqrt(x);

	return val;
}

float calc( float x, float y )
{
	float val;
	val = x * y;

	return val;
}

float calc(float x, float y, float z)
{
	float val;
	val = x + y + z;

	return val;
}