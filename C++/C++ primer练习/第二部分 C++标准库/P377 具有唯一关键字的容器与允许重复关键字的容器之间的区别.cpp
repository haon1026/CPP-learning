//ʱ�䣺2019��6��18��20:21:43
//����Ψһ�ؼ��ֵ������������ظ��ؼ��ֵ�����֮�������

#include <iostream>
#include <vector>
#include <map>
#include <set>

int main()
{
    //����һ����20��Ԫ�ص�vector,����0��9ÿ����������������
    std::vector<int> ivec;
    for (std::vector<int>::size_type i = 0; i != 10; ++i)
    {
        ivec.push_back(i);
        ivec.push_back(i);     //ÿ�����ظ�����һ��
    }

    //iset��������ivec�Ĳ��ظ���Ԫ�أ�miset�������е�20��Ԫ��
    std::set<int> iset(ivec.cbegin(), ivec.cend());
    std::multiset<int> miset(ivec.begin(), ivec.end());
    std::cout << ivec.size() << std::endl;
    std::cout << iset.size() << std::endl;
    std::cout << miset.size() << std::endl;

    return 0;
}
