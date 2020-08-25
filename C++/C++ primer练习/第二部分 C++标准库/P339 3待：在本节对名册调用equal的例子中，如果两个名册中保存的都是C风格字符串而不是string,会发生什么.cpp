//时间：2019年6月15日13:37:39
//在本节对名册调用equal的例子中，如果两个名册中保存的都是C风格字符串而不是string,会发生什么

#include <iostream>
#include <algorithm>
#include <string.h>
#include <numeric>


int main(int argc, char *argv[])
{
    char *p[] = { "Hello", "World", "!"};
    char *q[] = { strdup(p[0]), strdup(p[1]), strdup(p[2])};
    char *r[] = { p[0], p[1], p[2]};

    std::cout << std::equal(std::begin(p), std::end(p), q) << std::endl;     //有误
    std::cout << std::equal(std::begin(p), std::end(p), r) << std::endl;

    return 0;
}
