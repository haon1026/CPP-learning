//ʱ�䣺2019��5��12��12:10:57
//��vector���������Ԫ��

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v;
    std::string n;

    while (std::cin >> n)
        v.push_back(n);

    for(auto c : v)                          //��Χforѭ������,���ֻ�������ַ���������ĳ�������ͣ�±�����������ʽ
        std::cout << c << std::endl;
    return 0;
}
/*
std::vector<int> v;
for (decltype(v.size) i = 0; i != 10; ++i)
    v[i] = i;                                //��δ����Ǵ����,v��һ����vector���������κ�Ԫ�أ���ȻҲ�Ͳ���ͨ���±�ȥ�����κ�Ԫ��
    v.push_back(i);                          //v.push_back�����Ԫ�ز�����ȷ��,�±�����������ڷ����Ѵ��ڵ�Ԫ�أ����������Ԫ��
*/

