//ÿһ��Դ�ļ���һ�����뵥Ԫ
//���������ֵĶ������������࣬������������ģ�壬�����ռ䣩��Ȼ��������֮һ�������ӣ������ӣ�������

#include "header.h"
#include <iostream>

extern unsigned short thatNum;    //extern���ж�����뵥Ԫʱ�ǳ���Ҫ������ؼ��ֿ��԰���һ�����뵥Ԫ���ĳ����������Ϊ�����뵥Ԫ���һ��ͬ��ȫ�ֱ���
                                  //����������Ϊextern���������ڴ棬��Ϊ�������ط��Ѿ�Ϊ��������ڴ�
static bool printMe = false;      //static�洢�ھ�̬�洢������������Ϊ�����뵽�����������ȫ�ֱ���һ����

int main()
{
    unsigned short thisNum = 10;

    std::cout << thisNum << "! is equal to " << returnFactorial(thisNum) << "\n\n";       //�����ӵ���˼��ÿ�����뵥Ԫ�����Է������������ǰ������֪������ô���������� ����extern���߱�������
                                                                                          //��ͨ�ĺ�����������ģ�壬�����ռ�Ĭ�϶���������
    std::cout << thatNum << "! is equal to " << returnFactorial(thatNum) << "\n\n";

    std::cout << headerNum << "! is equal to " << returnFactorial(headerNum) << "\n\n";

    if (printMe)
    {
        std::cout << "����\n\n";
    }

    return 0;
}

/*
��ʹ�ñ�������������ʱ����ʵ��������3�����蹹�ɣ�
1. ִ��Ԥ������ָ��                //�����#includeָ���滻Ϊ��Ӧ��ͷ�ļ�����Ĵ��룬�ܵ�Ч������ͷ�ļ�����Ĵ������һ��ʼ����.cpp�ļ����Ƶ�
2. ��.cpp�ļ������.o�ļ�              //Դ�ļ�����ɶ������ļ�
3. ��.o�ļ����ӳ�һ����ִ���ļ�
*/

