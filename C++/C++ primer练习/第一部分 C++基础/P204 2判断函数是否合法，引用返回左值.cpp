//ʱ�䣺2019��5��28��22:10:43
//�жϺ����Ƿ�Ϸ������÷�����ֵ

#include <iostream>

int &get(int *arry, int index)    //���õĶ�����arry�����ĳ��Ԫ��
{
    return arry[index];
}

int main()
{
    int ia[10];
    for (int i = 0; i != 10; ++i)
        get(ia,i) = i;               //ÿ��ѭ��ʹ��get�����õ�����ia�е�i��Ԫ�ص����ã�Ϊ�����ø�ֵi

    //�鱾���ӷֽ���
    for (auto c : ia)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
