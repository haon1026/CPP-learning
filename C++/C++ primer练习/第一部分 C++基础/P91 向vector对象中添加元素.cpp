//时间：2019年5月12日12:10:57
//向vector对象中添加元素

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v;
    std::string n;

    while (std::cin >> n)
        v.push_back(n);

    for(auto c : v)                          //范围for循环遍历,如果只处理部分字符或者遇到某种情况就停下遍历用其他方式
        std::cout << c << std::endl;
    return 0;
}
/*
std::vector<int> v;
for (decltype(v.size) i = 0; i != 10; ++i)
    v[i] = i;                                //这段代码是错误的,v是一个空vector，不包含任何元素，当然也就不能通过下标去访问任何元素
    v.push_back(i);                          //v.push_back添加新元素才是正确的,下标运算符可用于访问已存在的元素，而不能添加元素
*/

