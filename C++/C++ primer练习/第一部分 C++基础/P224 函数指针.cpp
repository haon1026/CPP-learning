//ʱ�䣺2019��5��30��15:09:37
//����ָ�룺��д���������������������int�βη�������int������vector��������Ԫ����ָ��ú�����ָ��
//��д�ĸ��������ֱ������intִֵ�мӣ������ˣ������㣬vector�����б�����Щ������ָ��
//���vector������ÿ��Ԫ�ز��������
#include <iostream>
#include <vector>

int func1(int a, int b)
{
    return a + b;
}

int func2(int a, int b)
{
    return a - b;
}

int func3(int a, int b)
{
    return a * b;
}

int func4(int a, int b)
{
    return a / b;
}
//
void Compute(int a, int b, int(*p)(int, int))
{
    std::cout << p(a, b) << std::endl;
}

int main()
{
    int i = 5, j = 10;
    int (*p1)(int, int) = func1;
    int (*p2)(int, int) = func2;
    int (*p3)(int, int) = func3;
    int (*p4)(int, int) = func4;
    //decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;

    std::vector<decltype(func1) *> v = {p1, p2, p3, p4};    //����vector�е�ÿ��Ԫ�أ�һ�ε����������㺯��
    for(auto p : v)
        Compute(i, j, p);      //p�Ǻ���ָ�룬��������������Ҫ������
        //std::cout << p(i, j) << std::endl; //ֱ�����Ҳ��
    return 0;
}
