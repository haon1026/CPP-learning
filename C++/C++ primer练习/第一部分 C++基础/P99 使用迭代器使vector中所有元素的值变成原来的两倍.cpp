//ʱ�䣺2019��5��13��12:34:09
//�����Զ��������ˮ����ӵ�������,ʹ�õ�����ʹvector������Ԫ�ص�ֵ���ԭ��������

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main()
{
    std::vector<int> vInt;
    srand((unsigned)time(NULL));      //�������������
    for(int i = 0; i < 10; ++i)     //ѭ��10��
    {
        vInt.push_back(rand() % 1000);   //ÿ��ѭ������һ��1000���ڵ��������ӵ�vInt��
    }

    std::cout << "������ɵ�10�������ǣ�" << std::endl;
    //���ó�����������ȡԭʼ����
    for (auto it = vInt.cbegin(); it != vInt.cend(); it++)
        std::cout << *it << " ";         //�����ǰ����
    std::cout << std::endl;

    std::cout << "�������10�������֣�" << std::endl;
    //���÷ǳ���������л��vInt���ݲ����
    for(auto it2 = vInt.begin(); it2 != vInt.end(); ++it2)
    {
        *it2 = 2 * (*it2);
        std::cout << *it2 << " ";        //�����ǰ����
    }
    std::cout << std::endl;

    return 0;
}
