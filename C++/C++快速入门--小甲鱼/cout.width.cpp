//ʱ�䣺2019-03-06
//cin.width     ������ý�����һ��������������������Ч����һ�β��������0
# include <iostream>

using namespace std;

int main()
{
	int width = 4;
	char str[20];

	cout << "������һ���ı�:\n";
	cin.width(5);     //�´��������Ϊ5����ȡ4���ַ�

	while( cin >> str )     //���벿���ַ�ֱ�������ո��Ƿ�����   welcome
	{
		cout.width(width++);   //�´����4���ַ�����ȼ�һ       
		cout << str << endl;   // welc
		cin.width(5);          //��������
	}

	return 0;
}