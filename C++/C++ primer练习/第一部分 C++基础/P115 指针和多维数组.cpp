//ʱ�䣺2019��5��15��22:16:05
//ָ��Ͷ�ά����

#include <iostream>

int main()
{
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};           //��СΪ3�����飬ÿ��Ԫ���Ǻ���4������������
    //int (*p)[4] = ia;                                   //pָ����4������������
    //p = &ia[2];                                         //pָ��ia��βԪ��
    //int *ip[4]                                          //����ָ�������
    //int (*ip)[4]                                        //ָ����4������������


    //���ia��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
    //pָ����4������������
    for (auto p = ia; p != ia +3; ++p)
        for (auto q = *p; q != *p + 4; ++q)               //*p��һ������4������������,������һ�������������Զ���ת����ָ���������Ԫ�ص�ָ��
            std::cout << *q << " ";
    std::cout << std::endl;


    //ʹ�ñ�׼�⺯��begin��endʵ��ͬ������
    //pָ��ia�ĵ�һ������
    for (auto p = std::begin(ia); p != std::end(ia); ++p)
        //qָ���ڲ��������Ԫ��
    for (auto q = std::begin(*p); q != std::end(*p); ++q)
        std::cout << *q << " ";                //���q��ָ������ֵ
    std::cout << std::endl;


    //���ͱ����򻯶�ά�����ָ��
    using int_array = int[4];
    typedef int int_array[4];

    //���ia��ÿ��Ԫ�ص�ֵ��ÿ���ڲ������ռһ��
    for (int_array *p = ia; p != ia +3; ++p)
        for (int *q = *p; q != *p + 4; ++q)
             std::cout << *q << " ";
    std::cout << std::endl;

    return 0;
}
