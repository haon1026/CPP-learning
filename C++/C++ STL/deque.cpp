//ʱ�䣺2019��7��18��10:46:10
//deque



#include <iostream>
#include <deque>

using namespace std;

/*
int main()
{
	//�Ա�vector : û��capacity��reserve ,����push_front��pop_front,��������һ
	deque<int> de;
	de.push_front(12);

	deque<int>::iterator iter = de.begin();

	for (iter; iter != de.end(); iter++)
	{
		cout << *iter << endl;
	}
	system("pause");
	return 0;
}
*/

/*
vector �����ռ�   ���λ�ò���/ɾ��Ч�ʵͣ��������Ч�ʸߣ���֧��ͷ��ӣ�֧��β���
list �������ռ�   ���λ�ò���/ɾ��Ч�ʸߣ���֧��������ʣ�֧��ͷ��ӣ�֧��β���
deque �������ռ�  ���λ�ò���/ɾ��Ч�ʲ��ߣ�������512����֧���������������ʣ���vector������ΪҪ������ת�����������ṹ���ӣ���ؽ��ͷ���Ч�ʣ�֧��ͷ��ӣ�֧��β���
ʹ��ѡ���������Ƶ�ʸߣ�ѡ��vector;  ����ɾ��Ƶ�ʸߣ�ͷβ��ӣ�ѡ��list;  �������+ͷ��ӣ�ѡ��deque
*/