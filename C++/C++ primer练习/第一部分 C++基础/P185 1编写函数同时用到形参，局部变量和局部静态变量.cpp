//ʱ�䣺2019��5��22��21:50:01
//��д����ͬʱ�õ��βΣ��ֲ������;ֲ���̬����

#include <iostream>

double myADD(double val1, double val2)        //val1��val2���β�
{
    double result = val1 + val2;             //result����ͨ�ֲ�����
    static unsigned iCnt = 0;                //iCnt�Ǿ�̬�ֲ�����
    ++iCnt;
    std::cout << "�ú����Ѿ��ۼ�ִ����" << iCnt << "��" << std::endl;
    return result;
}

int main()
{
    double num1, num2;
    std::cout << "��������������";
    while (std::cin >> num1 >> num2)
    {
        std::cout << num1 << "��" << num2 << "����ͽ���ǣ�" << myADD(num1,num2) << std::endl;
    }

    return 0;
}
