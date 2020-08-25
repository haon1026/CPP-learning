//时间：2019年5月17日17:35:43
//sizeof()练习


#include <iostream>

int main()
{
    int x[10];
    int *p = x;

    std::cout << sizeof(x) << " / " << sizeof(*x) << " = "<< sizeof(x)/sizeof(*x) << std::endl;
    std::cout << sizeof(p) << " / " << sizeof(*p) << " = "<< sizeof(p)/sizeof(*p) << std::endl;

    return 0;
}
