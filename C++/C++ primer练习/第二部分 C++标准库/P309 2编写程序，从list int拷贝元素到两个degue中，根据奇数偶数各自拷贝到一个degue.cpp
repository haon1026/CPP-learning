//ʱ�䣺2019��6��11��00:19:11
//��д���򣬴�һ��list<int>����Ԫ�ص�����degue�С�ֵΪż��������Ԫ�ض�������һ��degue�У���
//����ֵ����������һ��degue��

#include <iostream>
#include <deque>
#include <list>

int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::deque<int> ideque1;
    std::deque<int> ideque2;

    for (auto i : ilist)
    {
        if (i % 2 == 0)     //  ʹ��λ�ڲ���Ҳ���� i & 1,����������deque�����Ԫ��˳����Ҫ��Ӧ�ı�
            ideque1.push_back(i);
        else
            ideque2.push_back(i);
    }

    std::cout << "ż��ֵ�У�";
    for (auto i : ideque1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << "����ֵ�У�";
    for (auto i : ideque2)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}
