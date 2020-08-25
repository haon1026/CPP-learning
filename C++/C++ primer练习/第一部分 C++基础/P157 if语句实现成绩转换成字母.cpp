//时间：2019年5月18日11:13:20
//if语句实现成绩转换成字母

#include <iostream>
#include <vector>
#include <string>

int main()
{
    int grade = 62;
    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    //如果grade小于60，对应的字母是F，否则计算其下标，且成绩不合格不用考虑添加加号减号的问题
    std::string lettergrade;
    if (grade < 60)
        lettergrade = scores[0];
    else
    {
        lettergrade = scores[(grade - 50) / 10];  //获得字母形式的成绩
        if (grade != 100)                         //只要不是A++，就需要考虑添加加号或减号的问题
            if (grade % 10 > 7)                   //末尾是8或者9的成绩添加一个加号
                lettergrade += "+";
            else if(grade % 10 < 3)               //末尾是0,1,2的成绩添加一个减号
                lettergrade += "-";
    }
    std::cout << lettergrade << std::endl;


    return 0;
}
