//ʱ�䣺2019��3��8��21:33:34
//�ַ�������

# include <iostream>
# include <string>

using namespace std;

int main()
{
	string s1 = "welcome to china";
	string s2,s3;
	int len, index;

	s2 = s1.substr(5,5);     //����Խ������
	cout << s1 << endl;
	cout << s2 << endl;

	if( s2 > s1 )  // < > != 
		cout << "s2 > s1" << endl;
	else
		cout << "s2 < s1" << endl;

	s3 = s1 + s2;
	len = s3.size();
	cout << s3 <<endl;
	cout << len << endl;

	index = s1.find(s2,6);  //find�����������ַ����в������ַ����г��ֵ�λ��,��һ�������Ǵ����ҵ����ַ������ڶ��������Ǳ�ʾ��ʼ���ҵ�λ�ã�����ڶ���������ָ���Ļ���Ĭ�ϴ�0��ʼ���ң�Ҳ�����ַ����׿�ʼ���ҡ�
	cout << index << endl;
	index = s1.rfind(s2,3); //rfind������find���������ƣ�ͬ�������ַ����в������ַ�������ͬ����find�����Ǵӵڶ���������ʼ������ң���rfind�������������ҵ��ڶ���������
	cout << index << endl;






	


	return 0;
}