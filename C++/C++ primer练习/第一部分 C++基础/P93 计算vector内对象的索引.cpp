//时间：2019年5月12日15:32:20
//统计各个分数段考生的数量

#include <iostream>
#include <vector>

int main()
{
    std::vector<unsigned> scores(11, 0);
    std::cout << "请输入每个学生的分数" << std::endl;
    unsigned grade;

    while (std::cin >> grade)
        if (grade <= 100)
           ++scores[grade/10];

    for (auto n : scores)
        std::cout << n << std::endl;

    return 0;
}
