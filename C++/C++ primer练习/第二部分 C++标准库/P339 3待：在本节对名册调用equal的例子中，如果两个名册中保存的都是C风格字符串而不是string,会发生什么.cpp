//ʱ�䣺2019��6��15��13:37:39
//�ڱ��ڶ��������equal�������У�������������б���Ķ���C����ַ���������string,�ᷢ��ʲô

#include <iostream>
#include <algorithm>
#include <string.h>
#include <numeric>


int main(int argc, char *argv[])
{
    char *p[] = { "Hello", "World", "!"};
    char *q[] = { strdup(p[0]), strdup(p[1]), strdup(p[2])};
    char *r[] = { p[0], p[1], p[2]};

    std::cout << std::equal(std::begin(p), std::end(p), q) << std::endl;     //����
    std::cout << std::equal(std::begin(p), std::end(p), r) << std::endl;

    return 0;
}
