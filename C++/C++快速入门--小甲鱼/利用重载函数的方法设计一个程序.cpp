//ʱ��2019��3��8��19:56:19
//�������غ������һ������ͨ��������calc()�����м��㲢������ʾ���                //˼����Ϊʲô����ͨ������ֵ��ͬ�����غ���������ʱ��������ֵ�ǿ�ʡ�Եģ��޷��жϵ����ĸ�����

# include <iostream>
# include <math.h>

using namespace std;
float calc( float );
float calc( float, float );
float calc( float, float, float );

int main()
{
	float x, y, z;

	cout << "������һ��������";
	cin >> x;
	cout << calc( x ) << endl;

	cout << "����������������";
	cin >> x >> y;
	cout << calc( x, y ) << endl;

	cout << "����������������";
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