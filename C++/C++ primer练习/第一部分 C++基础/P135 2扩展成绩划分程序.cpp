//时间：2019年5月17日16:45:43
//使用条件运算符和普通if语句两种方式来扩展成绩划分程序

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>

int main()
/*
{
    std::vector<int> v1;
    int sz = 10;
    srand ( (unsigned) time (NULL) );

    std::cout << "成绩：" << std::endl;
    for (int i = 0; i < sz; ++i)
    {
        v1.push_back(rand() % 100);            //这样随机生成的数无法取到100
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;

    std::vector<std::string> v2;
    for (int i = 0; i < sz; ++i)
    {
        std::cout << v1[i] << ":";
        v2.push_back(v1[i] > 90 ? "high pass" : (v1[i] > 75) ? "pass" : (v1[i] > 60) ? "lower pass" : "fail");
        std::cout << v2[i] << " ";
        std::cout << std::endl;
    }

    return 0;
}
*/
/*
{
     std::string finalgrade;
     int grade;
     std::cout << "请输入您要检查的成绩：" << std::endl;
     //确保输入的成绩合法
     while (std::cin >> grade && grade >= 0 && grade <=100)
     {
          //使用三层嵌套的条件表达式
          finalgrade = (grade > 90) ? "high pass"
                               : (grade > 75) ? "pass"
                               :  (grade >= 60) ? "lower pass" : "fail";
          std::cout << "该成绩所处的档次是：" << finalgrade << std::endl;
          std::cout << "请输入您要检查的成绩：" << std::endl;

     }
     return 0;
}
*/

{
    std::string finalgrade;
    int grade;
    std::cout << "请输入您要检查的成绩：" << std::endl;
    //确保输入的成绩合法
    while (std::cin >> grade && grade >= 0 && grade <=100)
     {
         //使用if语句实现
         if (grade >90)
            finalgrade = "high pass";
         else if (grade > 75)
            finalgrade = "pass";
         else if (grade >= 60)
            finalgrade = "lower pass";
         else
            finalgrade = "fail";
        std::cout << "该成绩所处的档次是：" << finalgrade << std::endl;
        std::cout << "请输入您要检查的成绩：" << std::endl;

     }

}
