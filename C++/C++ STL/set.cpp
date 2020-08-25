//时间：2019年7月18日13:23:39
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

	//根据键值删除
	st.erase(string("abe"));
	st.erase(("abf"));     //string重载了跟字符串的比较

	set<string>::iterator iter = st.begin();

	for (iter; iter != st.end(); iter++)
	{
		cout << *iter << endl;
	}


	system("pause");
	return 0;
}
