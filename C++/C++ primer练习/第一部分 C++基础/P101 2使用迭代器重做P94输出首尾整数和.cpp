//ʱ�䣺2019��5��13��23:34:09
//ʹ�õ��������һ����������β�����ͣ��Դ����ơ�����

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    std::cout << "������һ������:" << std::endl;
    int n;
    while (std::cin >> n)
        v.push_back(n);

    if(v.begin() == v.end())
    {
        std::cout << "û���κ�Ԫ��" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "���������ֱ���:" << std::endl;
        for (auto c : v)
            std::cout << c << " ";
        std::cout << std::endl;
        std::cout << "��β��������Լ��ͷֱ��ǣ�" << std::endl;

        auto end = v.end();
        auto beg = v.begin();
        auto mid = beg + (end - beg) / 2;
        if (v.size() % 2 == 0)
            for (auto it = beg; it != mid; it++)
            {
                std::cout << *it << " + " << *(beg + (end - 1 - it)) << " = " << *it + *(beg + (end - 1 - it)) << std::endl;    //�����üǵü���beg
            }
        else
        {
            for (auto it = v.begin();it != mid; it++)
                std::cout << *it << " + " << *(beg + (end - 1 - it)) << " = " << *it + *(beg + (end - 1 - it)) << std::endl;
            std::cout << *mid << std::endl;      //�����������һ��Ԫ��
        }
    }

        return 0;
}
