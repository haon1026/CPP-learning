//ʱ�䣺2019��5��15��20:06:12
//���������ʼ��vector����

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>


int main()
{
    const int sz = 10;
    int a[sz];
    srand( (unsigned)time(NULL) );
    std::cout << "����������ǣ�" << std::endl;

    for (auto &val : a)
    {
        val = rand() % 100;
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //����begin��end��ʼ��vectoe����
    std::vector<int> v(std::begin(a), std::end(a));
    std::cout << "vector�������ǣ�" << std::endl;

    for (auto val : v)
        std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
