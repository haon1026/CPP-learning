//ʱ�䣺2019��5��15��21:54:05
//ʹ������Ƕ�׵�forѭ���Լ���Χforѭ�������ά����

#include <iostream>

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt];         //12��δ��ʼ����Ԫ��

    //Ƕ��forѭ������
    //����ÿһ��
    for (size_t i = 0; i != rowCnt; ++i)
    {
        //�������ڵ�ÿһ��
        for (size_t j = 0; j != colCnt; ++j)
        {
            ia[i][j] = i * colCnt + j;
            std::cout << ia[i][j] << " ";
        }
    }
    std::cout << std::endl;

    //��Χforѭ������
    size_t cnt = 0;
    for (auto &row : ia)               //������������ÿһ��Ԫ��       ��ΪҪ�ı�Ԫ�ص�ֵ��������㶼�ѿ��Ʊ����������������ͣ�������ı�Ԫ�ص�ֵ��
        for (auto &col : row)          //�����ڲ������ÿһ��Ԫ��       �����Ʊ���ҲҪ�������������ͣ��������鱻�Զ�ת��ָ��
        {
            col = cnt;                 //����һ��ֵ������Ԫ��
            std::cout << col << " ";
            ++cnt;                     //��cnt��1

        }
    std::cout << std::endl;

    return 0;
}
