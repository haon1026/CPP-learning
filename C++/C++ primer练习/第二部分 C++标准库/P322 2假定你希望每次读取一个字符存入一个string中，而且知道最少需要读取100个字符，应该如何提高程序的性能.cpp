//时间：2019年6月13日11:11:19
//假定你希望每次读取一个字符存入一个string中，而且知道最少需要读取100个字符，应该如何提高程序的性能

#include <iostream>
#include <string>

void input_string(std::string &s)
{
    s.reserve(100);                   //由于知道至少读取100个字符，因此可以用reserve先为string分配100个字符的空间
    char c;                           //然后逐个读取字符，用push_back添加到string末尾
    while (std::cin >> c)
        s.push_back(c);
}

int main()
{
    std::string s;
    input_string(s);
    std::cout << s << std::endl;

    return 0;
}
