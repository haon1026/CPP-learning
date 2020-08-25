//时间：2019年7月12日14:43:38
//函数模板


#include <iostream>
#include <string>

template <class T>    //或template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int i1 = 100;
    int i2 = 200;
    std::cout << "交换前，i1 = " << i1 << ", i2 = " << i2 << "\n";
    swap(i1, i2);    //或者写成swap<int>(i1, i2);  这将明确告诉编译器应该使用哪一种类型
    std::cout << "交换后，i1 = " << i1 << ", i2 = " << i2 << "\n";

    std::string s1 = "甲鱼";
    std::string s2 = "鱿鱼";

    std::cout << "交换前，s1 = " << s1 << ", s2 = " << s2 << "\n";
    swap(s1, s2);
    std::cout << "交换后，s1 = " << s1 << ", s2 = " << s2 << "\n";

    return 0;
}
