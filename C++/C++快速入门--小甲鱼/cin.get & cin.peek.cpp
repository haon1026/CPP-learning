//ʱ�䣺2019-03-06 0:24
//cin.peek & cin.get
# include <iostream>

using namespace std;

int main()
{
	char p;
	cout << "������һ���ı�:\n";

	while( cin.peek() != '\n')   //peek��һ��
	{
		p = cin.get();
		cout << p;
	}
	cout << endl;

	return 0;
}