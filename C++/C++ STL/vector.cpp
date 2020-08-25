//ʱ�䣺2019��7��16��23:48:37
//vector

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <ctime>

using namespace std;

//����
void STLDefine()
{
	vector<int> vec;   //�������ࣺ�����������ͣ������char���ͣ���stringһ�������ṹ�壬ָ�룬������ͨ��������������Ķ���
}

//���캯��
void STLConstructctor()
{
	vector<int> vec;
	//cout << vec[0];   //���󣬿���������ֱ�����±���в��� ��ֻ�ܶ��Ѵ��ڵ�Ԫ�ؽ��в���

	vector<int> vec1(5);          //����������������
	for (int i = 0; i < 5; i++)   //�±�Խ��ᱨ��
	{
		cout << vec1[i] << " ";
	}
	cout << endl;

	vector<int> vec2(5, 6);
	for (int i = 0; i < 5; i++)  
	{
		cout << vec2[i] << " ";
	}
	cout << endl;

	vector<int> vec3(vec2);     //����Ҫ��ͬ�������������Ͷ���char
	for (int i = 0; i < 5; i++)
	{
		cout << vec3[i] << " ";
	}
	cout << endl;

	vector<int>::iterator iter1 = vec3.begin();    //iter1������int *ָ��
	vector<int>::iterator iter2 = vec3.end();
	vector<int> vec4(iter1, iter2);     
	for (int i = 0; i < 5; i++)
	{
		cout << vec4[i] << " ";
	}
	cout << endl;

}

//����
void STLPro()
{
	//������capacity
	//��ʼ����  vector��ʼ����������Ķ��������йأ���ʼ���� = �����������string��һ��
	vector<int> vec;   // 0
	cout << vec.capacity() << endl;

	vector<int> vec1(10);  // 10       
	cout << vec1.capacity() << endl;      

	vector<int> vec2(5);  // 5
	cout << vec2.capacity() << endl;
	
	//�ռ䲻����ʱ��������������һ��     ��ͬ��������һ����vc++6.0 �� codeblock������һ��
	vec2.push_back(10);  // 7 = 5 + 5/2
	cout << vec2.capacity() << endl;

	vec2.push_back(10);
	vec2.push_back(10);   // 10 = 7 + 7/2
	cout << vec2.capacity() << endl; 

	//reserve�ı�������ֻ�ܱ���ܱ�С�����ö����������Ƕ���
	vec.reserve(10);
	cout << vec.capacity() << endl;

	//��������ռ�������µ����飬ԭ�е�����ʧЧ����Ԫ���ƶ����¿ռ䣬�¿ռ������Ԫ��

	cout << endl;

	//��С
	vector<int> vec3(4);
	vec3.reserve(10);         //���������ЧԪ�صĸ�������
	cout << vec3.capacity() << endl;
	cout << vec3.size() << endl;    //Ԫ�ظ���

	vec3.resize(3);     //��������Ԫ�ظ�������Ԫ�ظ�����Сʱ���������䣬��������������ʱ�������ᷢ���ı�
	cout << vec3.capacity() << endl;
	cout << vec3.size() << endl;

	cout << vec3.empty() << endl;

}

//for_each���ú���
void fun(int i)
{
	cout << i << " ";
}

//����
void STLDO()
{
	//�������Ԫ��
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	//�±�����������Խ���ж�
	for (int i = 0; i < 10; i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	//at���    Խ���׳��쳣���ɴ�������ж�
	for (int i = 0; i < 10; i++)
	{
		cout << vec.at(i) << " ";
	}
	cout << endl;

	//bcak()����β�͵�Ԫ��
	cout << vec.back() << endl;

	//begin()����ͷԪ�صĵ�����
	cout << *vec.begin() << endl;


	//���ȫ��
	//ѭ�� �����������±�����
	vector<int>::iterator iter1 = vec.begin();
	for (iter1; iter1 != vec.end(); iter1++)
	{
		cout << *iter1 << " ";
	}
	cout << endl;

	//for_each()
	for_each(vec.begin(), vec.end(), fun);  //fun�Ǻ�����ַ
}

//��Ӻ�ɾ��
void STLAdd_Delete()
{
	//��ӣ�β���Ч�ʷǳ��ߣ��������������ӿռ䣩 �� �м���ӵ�Ч�ʵ�
	//ĩβ��� : push_back
	vector<int> vec;
	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);    
	}      
	//ָ��λ�����insert
	vec.insert(vec.begin()+2, 12);        //��ĳ��λ�ü���ĳ��ֵ
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vec.insert(vec.begin(), 5, 8);   //��ĳ����������������ɸ���ͬ��ֵ
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vector<int> vec1(5, 1);
	vec.insert(vec.begin()+2, vec1.begin(), vec1.begin()+3);   //��ĳ���������������һ��������ĳһ��
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//ɾ��
	//ɾ��βԪ�� : pop_back()
	vec.pop_back();
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//ɾ��ָ��Ԫ��
	vec.erase(vec.begin()+3);      //ɾ��ĳ��λ�õ�ֵ
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	vec.erase(vec.begin()+2, vec.end());      //ɾ��ĳһ��
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//ɾ������
	vec.clear();
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	
}

//�ı�ͽ���
void STLChange()
{
	//�ı䣺
	//1�����������ʽ��
	//2��ֵ����assign�����¸�ֵ�������ǰ�ģ� 
	vector<int> vec(5, 1);
	vector<int> vec1(3, 2);
	vec.assign(vec1.begin(), vec1.end());      //�ı�Ϊĳ�������һ��
	for_each(vec.begin(), vec.end(), fun);   
	cout << endl;

	vec.assign(5, 5);      //�ı�Ϊn��val
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//����
	vector<int> vec2(10, 0);
	vec.swap(vec2);
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
	for_each(vec2.begin(), vec2.end(), fun);
	cout << endl;
}

//����
void STLSort()
{
	vector<int> vec;
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(3);
	vec.push_back(5);
	vec.push_back(4);

	//��С����
	sort(vec.begin() + 2, vec.end());  //��������
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
	sort(vec.begin(), vec.end());   //ȫ������
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//�Ӵ�С
	sort(vec.begin(), vec.end(), greater<int>());
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	//��������
	random_shuffle(vec.begin(), vec.end());   //������������ӣ�ÿ�ε�������һ��˳��
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;

	srand((unsigned int)(time)(0));          //�����ӣ�ÿ��˳���ǲ�һ���� 
	random_shuffle(vec.begin(), vec.end());
	for_each(vec.begin(), vec.end(), fun);
	cout << endl;
}

/*
int main()
{
	//����
	//STLDefine();

	//���캯��
	//STLConstructctor();

	//����
	//STLPro();

	//����
	//STLDO();

	//��Ӻ�ɾ��������
	//STLAdd_Delete();

	//�ı�ͽ���
	//STLChange();

	//����
	STLSort();

	system("pause");
	return 0;
}
*/
