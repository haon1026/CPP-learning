//ʱ�䣺2019-03-06 0:20
//cin.ignore & cin.getline
# include <iostream>

using namespace std;

int main()
{
	char buf[20];    //���洢19���ַ�

	cin.ignore(7);   //����7���ַ�
	cin.getline( buf, 10 );  //�ַ���Ĭ��0��β��ֻ�ܶ�ȡ9���ַ�  

	cout << buf << endl;

	return 0;
}