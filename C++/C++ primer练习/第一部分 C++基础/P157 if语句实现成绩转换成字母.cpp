//ʱ�䣺2019��5��18��11:13:20
//if���ʵ�ֳɼ�ת������ĸ

#include <iostream>
#include <vector>
#include <string>

int main()
{
    int grade = 62;
    const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++"};
    //���gradeС��60����Ӧ����ĸ��F������������±꣬�ҳɼ����ϸ��ÿ�����ӼӺż��ŵ�����
    std::string lettergrade;
    if (grade < 60)
        lettergrade = scores[0];
    else
    {
        lettergrade = scores[(grade - 50) / 10];  //�����ĸ��ʽ�ĳɼ�
        if (grade != 100)                         //ֻҪ����A++������Ҫ������ӼӺŻ���ŵ�����
            if (grade % 10 > 7)                   //ĩβ��8����9�ĳɼ����һ���Ӻ�
                lettergrade += "+";
            else if(grade % 10 < 3)               //ĩβ��0,1,2�ĳɼ����һ������
                lettergrade += "-";
    }
    std::cout << lettergrade << std::endl;


    return 0;
}
