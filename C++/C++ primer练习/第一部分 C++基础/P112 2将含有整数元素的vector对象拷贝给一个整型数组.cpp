//ʱ�䣺2019��5��15��20:37:13
//���������������vector���󿽱���һ����������

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    const int sz = 10;
    std::vector<int> v;
    srand( (unsigned) time (NULL));

    std::cout << "vector����������ǣ�" << std::endl;
    for (int i = 0; i != sz; ++i)
    {
        v.push_back(rand() % 100);
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;

    auto it = v.cbegin();
    int a[v.size()];
    std::cout << "����������ǣ�" << std::endl;

    for (auto &c : a)
    {
        c = *it;
        std::cout << c << " ";
        it++;
    }
    std::cout << std::endl;


    return 0;
}
