//ʱ�䣺2019��5��15��23:01:44
//�����ַ�ʽ�����ά�����Ԫ��

#include <iostream>

//using int_array = int[4];

int main()
{
    int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    std::cout << "���÷�Χforѭ�������ά��������ݣ�" << std::endl;
    for (int (&row)[4] : ia)                    //for (int_array &row : ia)  //auto &row
        for (int &col : row)                                                 //auto &col
            std::cout << col << " ";
    std::cout << std::endl;

    std::cout << "������ͨfor�����±�����������ά��������ݣ�" << std::endl;
    for (int i = 0; i != 3; ++i)                                             //auto  i
        for (int j = 0; j != 4; ++j)                                         //auto  j
            std::cout << ia[i][j] << " ";
    std::cout << std::endl;

    std::cout << "������ͨfor����ָ�������ά��������ݣ�" << std::endl;
    for (int (*p)[4] = ia; p != ia +3; p++)    //for (int_array *p = ia;      //auto p    )
        for (int *q = *p; q != *p +4; q++)                                    //auto q
            std::cout << *q << " ";
    std::cout << std::endl;

    return 0;
}
