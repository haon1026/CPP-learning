//ʱ�䣺2019��5��17��17:35:43
//sizeof()��ϰ


#include <iostream>

int main()
{
    int x[10];
    int *p = x;

    std::cout << sizeof(x) << " / " << sizeof(*x) << " = "<< sizeof(x)/sizeof(*x) << std::endl;
    std::cout << sizeof(p) << " / " << sizeof(*p) << " = "<< sizeof(p)/sizeof(*p) << std::endl;

    return 0;
}
