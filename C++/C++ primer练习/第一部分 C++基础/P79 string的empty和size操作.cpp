//时间：2019年5月11日12:30:58
//string的empty和size的操作

#include <iostream>
#include <string>

int main()
{
    std::string line;

/*  //输出非空的行
    while (getline(std::cin, line))
        if (!line.empty())
            std::cout << line << std::endl;
*/
    //输出超过10个字符的行
    while (getline(std::cin, line))
        if (line.size() > 10)
            std::cout << line << std::endl;

    // auto len = line.size();      //len的类型是string::size_type
    return 0;
}
