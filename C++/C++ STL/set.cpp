//ʱ�䣺2019��7��18��13:23:39
//set

#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	set<string> st;

	st.insert(string("abc"));
	st.insert(string("aba"));
	st.insert(string("abe"));
	st.insert(string("abf"));

	//���ݼ�ֵɾ��
	st.erase(string("abe"));
	st.erase(("abf"));     //string�����˸��ַ����ıȽ�

	set<string>::iterator iter = st.begin();

	for (iter; iter != st.end(); iter++)
	{
		cout << *iter << endl;
	}


	system("pause");
	return 0;
}
