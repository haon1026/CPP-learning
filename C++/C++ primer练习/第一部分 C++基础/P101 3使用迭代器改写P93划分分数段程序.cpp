//时间：2019年5月14日00:26:43
//使用迭代器改写划分分数段程序

#include <iostream>
#include <vector>

int main()
{
    //该vectot对象记录各分数段的人数，初始值均为0
    std::vector<unsigned> v(11);
    unsigned grade;
    std::cout << "请输入一组成绩：" << std::endl;
    while(std::cin >> grade)
        if(grade <= 100)
         ++*(v.begin() + grade / 10);             //利用迭代器定位到对应的元素，加1

    std::cout << "总计有 " << v.size() << " 个分数段" << std::endl;
    std::cout << "各个分数段的人数分布是（成绩从低到高）：" << std::endl;

    //利用迭代器遍历v的元素并逐个输出
    //for(auto c : v)
    //   std::cout << c << " ";
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;


    return 0;
}
