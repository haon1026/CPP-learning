//ʱ�䣺2019��5��12��19:57:34
//����һ������������������ĺ��Լ���ĩ������...

#include <iostream>
#include <vector>

int main()
{
    //����һ������
    std::vector<int> v;
    std::cout << "������һ��������" << std::endl;
    int num;

    while (std::cin >> num)
        v.push_back(num);
    std::cout << std::endl;
    if (v.size() == 0)
    {
        std::cout << "û���κ�Ԫ��" << std::endl;
        return -1;
    }
/*
    //���ÿ�����������ĺ�
    std::cout << "������������Լ������" << std::endl;
    for (decltype(v.size()) i = 0; i < v.size()-1; i += 2)
    {
        std::cout << v[i] << " + " << v[i+1] << " = " << v[i] + v[i+1] << std::endl;
    }
    //���Ԫ���������������һ�������
    if (v.size() % 2 != 0)
        std::cout << v[v.size()-1] << std::endl;
*/

    //�����1�������1��Ԫ�صĺ�,�Դ�����
    std::cout << "��β����ĺ������ǣ�" << std::endl;
    for (decltype(v.size()) i = 0; i < v.size() && i < v.size() -1 - i; ++i)      //�����ж�����i < v.size() / 2
    {
        std::cout << v[i] << " + " << v[v.size()-1-i] << " = " << v[i] + v[v.size()-1-i] << std::endl;
    }
    //���Ԫ���������������һ�������
    if (v.size() % 2 != 0)
        std::cout << v[v.size() / 2] << std::endl;

    return 0;
}
