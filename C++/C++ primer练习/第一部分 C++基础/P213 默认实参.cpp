//时间：2019年5月29日22:19:55
//默认实参

#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s")   //复数形式默认加s
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    std::cout << "success的单数形式是：" << make_plural(1, "success", "es") << std::endl;
    std::cout << "success的复数形式是：" << make_plural(2, "success", "es") << std::endl;

    std::cout << "faliure的单数形式是：" << make_plural(1, "failure") << std::endl;
    std::cout << "failure的单数形式是：" << make_plural(2, "failure") << std::endl;

    return 0;
}
