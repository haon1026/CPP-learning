//ʱ�䣺2019��5��17��16:45:43
//ʹ���������������ͨif������ַ�ʽ����չ�ɼ����ֳ���

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

    std::cout << "�ɼ���" << std::endl;
    for (int i = 0; i < sz; ++i)
    {
        v1.push_back(rand() % 100);            //����������ɵ����޷�ȡ��100
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
     std::cout << "��������Ҫ���ĳɼ���" << std::endl;
     //ȷ������ĳɼ��Ϸ�
     while (std::cin >> grade && grade >= 0 && grade <=100)
     {
          //ʹ������Ƕ�׵��������ʽ
          finalgrade = (grade > 90) ? "high pass"
                               : (grade > 75) ? "pass"
                               :  (grade >= 60) ? "lower pass" : "fail";
          std::cout << "�óɼ������ĵ����ǣ�" << finalgrade << std::endl;
          std::cout << "��������Ҫ���ĳɼ���" << std::endl;

     }
     return 0;
}
*/

{
    std::string finalgrade;
    int grade;
    std::cout << "��������Ҫ���ĳɼ���" << std::endl;
    //ȷ������ĳɼ��Ϸ�
    while (std::cin >> grade && grade >= 0 && grade <=100)
     {
         //ʹ��if���ʵ��
         if (grade >90)
            finalgrade = "high pass";
         else if (grade > 75)
            finalgrade = "pass";
         else if (grade >= 60)
            finalgrade = "lower pass";
         else
            finalgrade = "fail";
        std::cout << "�óɼ������ĵ����ǣ�" << finalgrade << std::endl;
        std::cout << "��������Ҫ���ĳɼ���" << std::endl;

     }

}
