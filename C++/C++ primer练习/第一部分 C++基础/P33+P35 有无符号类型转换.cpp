//时间：2019年5月7日20:49:12
//类型转换：有符号无符号
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
