//ʱ�䣺2019��5��15��11:37:34
//����ָ�뽫�����е�Ԫ����Ϊ0

#include <iostream>

int main()
{
    const int sz = 10;
    int a[sz];

    for (int i = 0; i < sz; ++i)
        a[i] = i;
    std::cout << "��ʼ״̬�µ�����������ǣ�";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;

    int *p = std::begin(a);           //��pָ��������Ԫ��
    while (p != std::end(a))
    {
        *p = 0;
        ++p;
    }
    std::cout << "�޸ĺ�����������ǣ�";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;


    return 0;
}
