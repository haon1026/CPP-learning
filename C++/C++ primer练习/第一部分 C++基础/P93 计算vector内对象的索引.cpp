//ʱ�䣺2019��5��12��15:32:20
//ͳ�Ƹ��������ο���������

#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
    std::cout << "������ÿ��ѧ���ķ���" << std::endl;
    unsigned grade;

    while (std::cin >> grade)
        if (grade <= 100)
           ++scores[grade/10];

    for (auto n : scores)
        std::cout << n << std::endl;

    return 0;
}
