//ʱ�䣺2019��6��10��13:03:29
//��д����������һ��ָ��vector<int>�ĵ�������һ��intֵ��������������ָ���ķ�Χ�ڲ��Ҹ�����ֵ������һ��boolֵ��ָ���Ƿ��ҵ�

#include <iostream>
#include <vector>

bool find_vec(std::vector<int>::const_iterator cbeg, std::vector<int>::const_iterator cend, int val)
{
    while(cbeg != cend)
    {
        if (*cbeg == val)
            return true;
        ++cbeg;
    }
    return false;
}

int main()
{
    std::vector<int> v = {10, 20, 5, 3, 15, 12};
    std::cout << "��������Ҫ���ҵ�����:";
    int val;
    std::cin >> val;
    auto it1 = v.cbegin();
    auto it2 = v.cend();
    if (find_vec(it1, it2, val))
        std::cout << "�������ҵ�������vector������" << std::endl;
    else
        std::cout << "�������ҵ�������������vector��"  << std::endl;

    return 0;
}
