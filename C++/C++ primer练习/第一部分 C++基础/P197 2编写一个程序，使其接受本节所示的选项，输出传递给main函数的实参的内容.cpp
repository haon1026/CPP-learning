//ʱ�䣺2019��5��28��13:27:07
//��дһ������ʹ����ܱ�����ʾ��ѡ�������ݸ�main������ʵ�ε�����

#include <iostream>

int main(int argc, char **argv)
{
    for (int i = 0; i != argc; ++i)
        std::cout << "argc[" << i << "]:" << argv[i] << std::endl;

    return 0;
}
