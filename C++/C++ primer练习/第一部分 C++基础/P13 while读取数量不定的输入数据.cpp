//ʱ�䣺2019��5��8��09:44:11
//��ȡ������������������

#include <iostream>

int main()
{
    int sum = 0, value = 0;

    while (std::cin >> value)       //�������״̬�������ļ�����������Ч���룬״̬��Ч��ʹ����Ϊ��
        sum += value;
    std::cout << "Sum is:" << sum << std::endl;

    return 0;
}
