//ʱ�䣺2019��5��18��11:41:45
//ʹ��if else���ʵ�ְ����ֳɼ�ת������ĸ�ɼ�

#include <iostream>

int main()
{
    int grade;
    std::cout << "���������ĳɼ���";
    std::cin >> grade;

    if (grade < 0 || grade > 100)
    {
        std::cout << "�óɼ����Ϸ�" << std::endl;
        return -1;
    }
    if (grade == 100)           //�������ֵ����
    {
        std::cout << "�óɼ��ǣ�" << "A++" << std::endl;
        return -1;
    }
    if (grade < 60)             //������������
    {
        std::cout << "�óɼ��ǣ�" << "F" << std::endl;
        return -1;
    }

    int iU = grade / 10;        //�ɼ���ʮλ��
    int iT = grade % 10;        //�ɼ��ĸ�λ��
    std::string score, level, lettergrade;
    //���ݳɼ���ʮλ����ȷ��score
    if (iU == 9)                         //��������� score = (iU == 9) ? "A"
        score = "A";                     //                          : (iU == 8) ? "B"
    else if (iU == 8)                    //                                   : (iU == 7) ? "C" : "D";
        score = "B";
    else if (iU == 7)
        score = "C";
    else if (iU == 6)
        score = "D";
    //���ݳɼ��ĸ�λ����ȷ��level
    if (iT < 3)                          // level = (iT < 3) ? "-"
        level = "-";                     //               : (iT > 7) ? "+" : ""
    else if (iT > 7)
        level = "+";
    else
        level = "";
    //�ۼ���õǼǳɼ�
    lettergrade = score + level;
    std::cout << "�ȼ��ɼ��ǣ�" << lettergrade << std::endl;

    return 0;
}
