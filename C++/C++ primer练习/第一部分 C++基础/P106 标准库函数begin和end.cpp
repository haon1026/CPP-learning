//ʱ�䣺2019��5��14��17:41:08
//��׼�⺯��begin��end

#include <iostream>
#include <iterator>

int main()
{
    int ia[] = {0,1,2,3,-4,5,6,7,8,9};
    int *beg = std::begin(ia);            //ָ��ia��Ԫ�ص�ָ��
    int *last = std::end(ia);             //ָ��arrβԪ�ص���һλ�õ�ָ��

    while (beg != last && *beg >= 0)      //Ѱ�ҵ�һ����ֵԪ�أ�����Ѿ������ȫ��Ԫ�������ѭ��
        ++beg;
    std::cout << *beg << std::endl;

    return 0;
}
