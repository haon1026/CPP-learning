//ʱ�䣺2019��3��8��20:19:26
//��������
# include <iostream>

using namespace std;
//#define ITEM 10

int main()
{
	const unsigned short ITEM = 10;
	int num[ITEM];
	int i, sum = 0;

	cout << "������" << ITEM << "����������!\n\n";

	for(i=0; i<10; i++)
	{
		cout << "�������" << i << "������:" ;
		while( !(cin >> num[i]) )         //���ǷǷ���������
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "������һ���Ϸ���ֵ";
		}
		sum += num[i];
	}

	cout << "�ۼӺ�Ϊ:" << sum << endl;
	cout << "ƽ��ֵΪ:" << sum/ITEM << endl;


	return 0;
}