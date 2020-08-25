//时间：2019年5月19日22:53:30
//抛出异常throw以及try语句块和异常处理

#include <iostream>
#include <stdexcept>

int main()
{
    std::cout << "请依次输入被除数和除数：" << std::endl;
    int ival1, ival2;

    while (std::cin >> ival1 >> ival2)
    {
        try
        {
            if (ival2 == 0)
            {
                throw std::runtime_error("除数不能为0");
            }
            std::cout << "两数相除的结果是：" << ival1 / ival2 << std::endl;
        }catch(std::runtime_error err)
        {
            std::cout << err.what() << std::endl;
            std::cout << "需要继续吗（y or n）?";
            char ch;
            std::cin >> ch;
            if (ch != 'y' && ch != 'Y')
                break;
        }
    }


    return 0;
}
