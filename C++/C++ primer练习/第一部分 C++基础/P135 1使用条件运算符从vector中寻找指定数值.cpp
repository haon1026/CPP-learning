//ʱ�䣺2019��5��17��16:17:59
//ʹ�������������vector���ҵ���������ʹ��Щ����ֵ����

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    std::vector<int> v;
    srand( (unsigned) time (NULL) );

    //ʹ����ͨforѭ��Ϊ���鸳��ֵ
    std::cout << "vector�����е�Ԫ�ذ�����" << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(rand() % 100);
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    //ʹ�÷�Χforѭ���������е���������
    for ( auto &c : v)
        c = (c % 2 == 1 ? 2 * c : c);

    //ʹ�÷�Χforѭ���͵����������ǰ����ĵ�ǰֵ
    std::cout << "vector�����е������������Ԫ��Ϊ��" << std::endl;
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;



    return 0;
}
