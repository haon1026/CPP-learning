//时间：2019年5月18日11:41:45
//使用if else语句实现把数字成绩转换成字母成绩

#include <iostream>

int main()
{
    int grade;
    std::cout << "请输入您的成绩：";
    std::cin >> grade;

    if (grade < 0 || grade > 100)
    {
        std::cout << "该成绩不合法" << std::endl;
        return -1;
    }
    if (grade == 100)           //处理满分的情况
    {
        std::cout << "该成绩是：" << "A++" << std::endl;
        return -1;
    }
    if (grade < 60)             //处理不及格的情况
    {
        std::cout << "该成绩是：" << "F" << std::endl;
        return -1;
    }

    int iU = grade / 10;        //成绩的十位数
    int iT = grade % 10;        //成绩的个位数
    std::string score, level, lettergrade;
    //根据成绩的十位数字确定score
    if (iU == 9)                         //条件运算符 score = (iU == 9) ? "A"
        score = "A";                     //                          : (iU == 8) ? "B"
    else if (iU == 8)                    //                                   : (iU == 7) ? "C" : "D";
        score = "B";
    else if (iU == 7)
        score = "C";
    else if (iU == 6)
        score = "D";
    //根据成绩的个位数字确定level
    if (iT < 3)                          // level = (iT < 3) ? "-"
        level = "-";                     //               : (iT > 7) ? "+" : ""
    else if (iT > 7)
        level = "+";
    else
        level = "";
    //累加求得登记成绩
    lettergrade = score + level;
    std::cout << "等级成绩是：" << lettergrade << std::endl;

    return 0;
}
