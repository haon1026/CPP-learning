//ʱ�䣺2019��5��25��11:36:30
//��дһ�������������������������һ����int�͵�������һ����intָ�룬�����Ƚ�int��ֵ��ָ����ָ��ֵ�����ؽϴ���Ǹ�

#include <iostream>
#include <ctime>
#include <cstdlib>

int compare(const int val, const int *p)
{
    return (val > *p) ? val : *p;
}

int main()
{
    std::cout << "������һ������" << std::endl;
    int j;
    std::cin >> j;

    int a[10];
    srand( (unsigned)time(NULL));
    for (auto &c : a)
        c = rand() % 100;
    std::cout << "�����ȫ��Ԫ����";
    for (auto c : a)
        std::cout << c << " ";
    std::cout << std::endl;

    std::cout << "���������������Ԫ���нϴ���ǣ�" << compare(j, a) << std::endl;


    return 0;
}
