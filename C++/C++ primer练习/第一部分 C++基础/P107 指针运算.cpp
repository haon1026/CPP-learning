//ʱ�䣺2019��5��14��17:54:57
//ָ������

#include <iostream>

int main()
{
    constexpr size_t sz = 5;   //constexpr�������ʽ��size_t���޷�������

    int a[sz] = {1,2,3,4,5};

    int *ip = a;
    int *ip2 = ip + 4;
    int *p = a + sz;
    std::cout << *ip << " " << *ip2 << " " << *p << std::endl;
    std::cout << ip << " " << ip2 << " " << p << std::endl;
    std::cout << &a[0] << " " << &a[1] << " " << &a[2] << " " << &a[3] << " " << &a[4] << std::endl;

    auto n = std::end(a) - std::begin(a);   //n=5��Ҳ����a��Ԫ�ص�����������ָ������Ľ�������ͣ�ptrdiff_t��׼�����ͣ���ֵ����Ϊ�����Ǵ���������
    std::cout << n << std::endl;

    int *b = a, *e = a + sz;
    while (b < e)                 //ֻҪ����ָ��ָ��ͬһ�������Ԫ�ػ���ָ�������βԪ�ص���һλ�ã��������ù�ϵ��������бȽ�
    {
        std::cout << *b << " ";
        ++b;
    }
    std::cout << std::endl;

    return 0;
}
