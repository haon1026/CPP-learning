//ʱ�䣺2019��5��22��21:13:37
//�û�����һ�����֣��������ɽ׳�

#include <iostream>

int fact(int val)
{
    int ret = 1;

    if (val < 0)
        return -1;

    while (val > 0)
    {
        ret *= val;
        --val;
    }
    return ret;
}

int main()
{
    std::cout << "��������Ҫ��׳˵�����" << std::endl;
    int n;
    std::cin >> n;
    std::cout << n << "�Ľ׳�Ϊ��" << fact(n) << std::endl;

    return 0;
}
