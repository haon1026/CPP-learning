//ʱ��2019-03-06 0:35
//cin.gcount & cin.read
# include <iostream>

using namespace std;

//#define SIZE 50  �궨��
int main()
{
	const int SIZE = 50;  //C++����const
	char buf[SIZE];

	cout << "������һ���ı���";
	cin.read( buf, 20 );    //read��cin���ж�ȡ20�ֽڣ�����buf������,ͬ���ļ�ָ������ƶ�20�ֽ�
                            //������20���ֽ�������β������ʵ����ȡ�ֽڶ�ȡ
	cout << "�ַ����ռ������ַ���Ϊ��" << cin.gcount() << endl;   //gcount()������ȡ��ȡ���ֽ���

	cout << "������ı���Ϣ�ǣ�";
	cout.write( buf, 20 );
	cout << endl;

	return 0;
}