//ʱ�䣺2019��7��15��11:54:07
//string

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>   // greaterͷ�ļ�
using namespace std;

//pragma warning(disable:4996)  //�ص�����

//���� ����
void StrDefine()
{
	//��������
	string str;   // *m_str = NULL  new char('\0')  ����һ���ն���Ļ�����ָ��Ϊ�ջ���newһ�����ַ�

	//����   
	//c_str��������һ��ָ������C�ַ�����ָ�룬�����뱾�ַ�����ͬ
	const char* pstr = str.c_str();    //���¶ϵ���ԣ����Խ������ַ��ΪNULL,�ַ���Ϊ��
	                                   //C++ cout << �����ַ���ָ��Ὣ�䵱���ַ��������������ָ����ָ���ַ���	   
	                                   //���ַ���ָ��ת��Ϊ������ָ��������ָ��ָ��ĵ�ַ,�ڴ˴�constָ�����ͺ���ת����
	//���캯��
	string str1(5, 'a');                                                  
	cout << str1.c_str() << endl;            

	string str2("abcdefg");
	cout << str2.c_str() << endl;      

	string str3("abcdefg", 3);
	cout << str3.c_str() << endl;     

	string str4("abcdefg", 3, 2);
	cout << str4.c_str() << endl;     

	//�������캯��
	string str5(str2);    //string str5 = str2;Ҳ�ǵ��ÿ������캯��
	cout << str5.c_str() << endl;     

	//������ֵ�����
	string str6;
	str6 = str4;
	cout << str6.c_str() << endl;

	//���������<< >>
	string str7("abc");
	cout << str7 << endl;           
	cin >> str7;
	cout << str7 << endl;
}

//����
void StrProperty()
{
	//capacity() : ����
	//vs : ����15��������15����������������15�����������Ժ��������������16����С   15 + n * 16,  
	//vc++6.0 : ��������31���������Ժ�ÿ������32��
	string str;       
	cout << str.capacity() << endl;   

	string str1(16, 'a');  
	cout << str1.capacity() << endl;  
	cout << endl;

	//reserve() : �ı�������ֻ�ܱ���ܱ�С  15 - 31 - 47 - 63
	str1.reserve(10);             
	cout << str1.capacity() << endl;  //����������31
	str1.reserve(32);   
	cout << str1.capacity() << endl;   //������47
	cout << endl;

	//length() : �ַ�������  ==  size() : �ַ�����
	string str2("abcefg");
	cout << str2.length() << endl;     
	cout << str2.size() << endl;       

	string str3(16, 'b');
	cout << str3.length() << endl;    
	cout << str3.size() << endl;       

	string str31("ab\0cde");           //������C����ַ�����C����ַ�����\0������ǣ�����\0������ַ������й��죬����str31�ľ�ֻ��"ab\0"
	cout << str31.length() << endl;    //�ַ������ȣ�2
	cout << str31.size() << endl;      //�ַ�������2
	cout << str31 << endl;
	cout << str31[2] << endl;       //���Ϊ�գ�������C����ַ���������'\0'      

	string str32 = {'1', '2', '\0', 'a'};     //�����Ƕ�����ַ�����ʱ��ȫ������   ���ַ������޽�����'\0'
	cout << str32.length() << endl;   //�ַ������ȣ�4
	cout << str32.size() << endl;    //�ַ�������4
	cout << str32 << endl;
	cout << str31[2] << endl;       //���Ϊ��
	//cout << str31[4] << endl;       //Խ�籨��,���ַ��޽�����'\0'
	cout << endl;

	//resize() : ���������ַ�����   ��Ԫ�ظ�����������ʱ�������ᷢ���ı�
	string str4(16, 'a');
	str4.resize(10);
	cout << str4.length() << endl;
	cout << str4.size() << endl;
	cout << str4.capacity() << endl;
	cout << str4 << endl;

	str4.resize(32);
	cout << str4.length() << endl;
	cout << str4.size() << endl;
	cout << str4.capacity() << endl;
	cout << str4 << endl;
}

//���
void StrCout()
{
	string str2("abcdefg");

	//���ȫ�������������<<
	cout << str2 << endl;

	//���ȫ����c_str()���� �����ص����ַ������׵�ַ
	cout << str2.c_str() << endl;

	//��������ַ����±������[]
	cout << str2[7] << endl;
	//cout << str2[8] << endl;    //Խ��������޷�����

	//��������ַ���at
	cout << str2.at(3) << endl;
	//cout << str2.at(8) << endl;      //Խ���׳��쳣���ɴ���

	try
	{
		str2.at(8);     //index�����ַ�����Χ�ڣ�at()�����桱out of range�����󣬲��׳���out of range���쳣���ɴ���
	}
	catch (out_of_range &a)           //catch(...) �� �������ǲ��������쳣   out_of_range��һ����
	{
		cout << "Խ����" << endl;
	}
}

//�޸�
void StrChange()
{
	//�޸�ָ��Ԫ�� �� �±������[]��at()
	string str("abcde");
	str[2] = 's';
	str.at(3) = 'q';
	cout << str << endl;
	cout << endl;

	string str1("123456789");
	//�м���룺insert
	str.insert(2, str1);    //indexλ�ò���һ��str����
	cout << str << endl;

	str.insert(2, "123");    //indexλ�ò���һ���ַ���
	cout << str << endl;

	str.insert(2, str1, 6, 2);   //��index1λ�ò�����һ�������index2λ�ÿ�ʼ��n���ַ�
	cout << str << endl;

	str.insert(2, "qwe", 2);    //��indexλ�ò���һ���ַ�����ǰn���ַ�
	cout << str << endl;

	str.insert(2, 1, 'z');    //��indexλ�ò���n���ַ�
	cout << str << endl;
	cout << endl;

	//β�Ͳ��룺ƴ��
	str += str1;             //ƴ�Ӷ���
	cout << str << endl;

	str += "zxc";          //ƴ���ַ���
	cout << str << endl;

	//β�Ͳ��룺append
	str.append(str1);     //append,����������ʽͬinsert����
	cout << endl;

	//���¸�ֵ:=��ֵ
	str = "zxc";          // �Ⱥ�ֱ�Ӹ�ֵ  ���� �ַ���
	cout << str << endl;

	//���¸�ֵ:>>����
	cin >> str;          //��������
	cout << str << endl;

	//���¸�ֵ��assign
	str.assign("qwerasd", 5);  //assign()��������ʽ�ȵȺŸ�ֵ����,����������ʽͬinsert����
	cout << str << endl;
	cout << endl;

	//ɾ��
	str.erase(2, 2);      //ɾ��ָ��λ�ÿ�ʼ��ָ������
	cout << str << endl;
	str.erase(0, str.length()+1);   //ȫ������
	cout << str << endl;
}

//��������
void StrFunction()
{
	string str1("ababddefg");
	string str2("abd");
	//�Ƚ�
	cout << (str1 > str2) << endl;          //���رȽ���������������ͼ�
	cout << str1.compare(str2) << endl;     //��һ������Ƚ� str1 > str2 ����1, str1 < str2 ����-1, str1 = str2 ����0,
	cout << str1.compare("asd") << endl;    //��һ���ַ����Ƚ�
	cout << str1.compare(1, 2, str2) << endl;   //ĳһ���ַ�����һ������Ƚ�
	cout << str1.compare(1, 2, str2, 1, 2) << endl;   //ĳһ���ַ�����һ�������ĳһ�αȽ�
	cout << endl;

	//���� �Ѷ����ĳһ���ַ������Ƶ�һ���ַ�����
	char arrStr[6] = { 0 };
	str1.copy(arrStr, 2, 3);      //����str1��3��ʼ��2���ַ���arrStr
	cout << arrStr << endl; 
	cout << endl;

	//�����ִ�
	cout << str1.find(str2, 1) << endl;    //��st1��ָ��λ�ÿ�ʼ���Ҷ���str2,�ҵ�������str1�е��±���ʼ��
	cout << str1.find("dd", 1) << endl;    //��st1��ָ��λ�ÿ�ʼ�����ַ���,�ҵ�������str1�е��±���ʼ��
	cout << str1.find(str2, 3) << endl;     //�Ҳ����򷵻�-1��find()����ֵ��unsigned int,ǿ��ת����int�ɵõ�-1
	cout << (int)str1.find(str2, 3) << endl;
	cout << str1.find("f", 2) << endl;     //�ҵ����ַ�
	cout << endl;

	//�����ִ�
	cout << str1.substr(2, 4) << endl;        //����ָ��λ�õ��ִ�,��2��ʼ��4���ַ�
	cout << str1.substr(2) << endl;           //û��ָ���ַ������Ļ�Ĭ��Ϊ֮���ȫ���ַ�
	cout << endl;

	//����
	str1.swap(str2);
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	//���������
	cout << (str1 + str2) << endl;
}

//������
void FunIterator()
{
	string str("abcdefg");
	string::iterator iter;    //string�ĵ����������Ϊchar *ָ��

	//const char *a = str.c_str();
	//����1
	iter = str.begin();
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << *iter << " ";
		iter++;
	}
	cout << endl;

	//����2
	iter = str.begin();
	for (size_t i = 0; i < str.size(); i++)
	{
		cout << iter[i] << " ";
	}
	cout << endl;

	//����3
	iter = str.begin();
	for (iter; iter != str.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << '\n' << endl;

	//ͨ����������ֵ�������ø�ֵ
	iter = str.begin();
	for (iter; iter != str.end(); iter++)
	{
		*iter = 'a';
		cout << *iter << " ";
	}
	cout << endl;
	cout << str << endl;

	//ͨ����������ֵ���±긳ֵ
	iter = str.begin();    //�������Ѿ�ָ�������һ��Ԫ�ص���һ������Ҫ����ָ�����ַ�
	iter[2] = 'w';
	cout << str << endl;
	cout << endl;

	//������ʧЧ
	iter = str.begin();
	str.append(18, 'b');   //�������Ԫ�أ������������ı䣬���·���ռ䣬iter��ʧЧ�������¸�ֵ����ʹ�õ�����    �����ӿռ䣬�������ָ������ָ�������飩
	iter = str.begin();
	//str.append(2, 'b');  //�������Ԫ�أ�������û�з����仯���ɼ���ʹ�� 
	iter[3] = 'h';         
	cout << str << endl;
}

//��������ʹ��
void TestIterator()
{
	string str1("abc");
	string str2("efg");

	//���
	//str1.append(str2.begin(), str2.begin()+2);  //abcef
	str1.append(str2.begin(), str2.begin()+3);  //abcefg   ����ҿ�  [begin    end)
	//str1.append(str2.begin(), str2.end());   //abcefg
	cout << str1 << endl;

	//ɾ����ɾ��һ��
	str1.erase(str1.begin()+2);    //abefg
	cout << str1 << endl;
	//ɾ����ɾ��һ��
	str1.erase(str1.begin()+2, str1.begin()+4);    //abg   ����ҿ�
	cout << str1 << endl;

	//���룺���뼸���ַ�
	str1.insert(str1.begin()+2, 3, 'N');    //abNNNg   ��ָ��λ��ǰ����
	cout << str1 << endl;

	//���룺����һ������
	string str3("zxcvb");
	str1.insert(str1.begin()+2, str3.begin()+1, str3.end());
	cout << str1 << endl;

}

//for_each�����������βεĺ�������
void fun(char c)    //�β���Ԫ�ص�����
{
	cout << c;
}

//string���㷨   ����
void Funforeach()
{
	string str("qweasdzxc");

	//for_each����Ԫ��
	for_each(str.begin(), str.end(), fun);      //������ÿ��Ԫ�ش��ݸ�fun����  fun�Ǻ�����ַ
	cout << endl;

	//sort����1
	sort(str.begin(), str.end());   //����  Ĭ�ϴ�С����
	cout << str << endl;

	//sort����2
	sort(str.begin(), str.end(), greater<char>());    // greater<>()�º���������ָ���Ӵ�С����ͷ�ļ�<functional>
	cout << str << endl;

}

/*
int main()
{
	//���� ����
	//StrDefine();

	//����
	//StrProperty();

	//���
	//StrCout();

	//�޸�
	//StrChange();

	//��������
	//StrFunction();

	//������
	//FunIterator();

	//��������ʹ��
	//TestIterator();

	//string���㷨
	//Funforeach();

	system("pause");
	return 0;
}
*/
