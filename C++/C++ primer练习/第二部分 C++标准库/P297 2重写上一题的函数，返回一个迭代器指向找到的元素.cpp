//ʱ�䣺2019��6��10��13:29:01
//��д����������һ��ָ��vector<int>�ĵ�������һ��intֵ��������������ָ���ķ�Χ�ڲ��Ҹ�����ֵ������һ��boolֵ��ָ���Ƿ��ҵ�
//��д��һ��ĺ���������һ��������ָ���ҵ���Ԫ��,ע�⣬������봦��δ�ҵ�����ֵ�����

#include <iostream>
#include <vector>

std::vector<int>::const_iterator find_vec(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend, int val)
{
    while(cbeg != cend)
    {
        if (*cbeg == val)
        {
            std::cout << "�������ҵ�������vector������" << std::endl;
            return cbeg;
        }
        ++cbeg;
    }
    std::cout << "�������ҵ�������������vector��"  << std::endl;
    return cend;
}

int main()
{
    std::vector<int> v = {10, 20, 5, 3, 15, 12};
    std::cout << "��������Ҫ���ҵ�����:";
    int val;
    std::cin >> val;
    auto it1 = v.cbegin();
    auto it2 = v.cend();
    std::cout << find_vec(it1, it2, val) - v.cbegin() <<std::endl;     //������ڵĻ������Ŀ�������������ҵ�����֮��ľ���

    return 0;
}
