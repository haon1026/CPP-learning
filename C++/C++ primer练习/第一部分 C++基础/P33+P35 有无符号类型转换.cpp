//ʱ�䣺2019��5��7��20:49:12
//����ת�����з����޷���
#include <iostream>

int main()
{
    unsigned u =10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u -u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 -i << std::endl;
    std::cout << i -i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    unsigned char c = -1;
    std::cout << (int)c << std::endl;

    return 0;
}
