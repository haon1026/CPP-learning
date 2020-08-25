//时间：2019年5月11日12:13:33
//string对象的读写和不定量的读取

#include <iostream>
#include <string>

int main()
{
    //读写string对象，会自动忽略开头的空白
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1 << " " << s2 << std::endl;
/*
    //读取未知数量的string对象
    std::string word;
    while (std::cin >> word)
        std::cout << word << std::endl;
*/
    //使用getline读取一整行，可保留输入时的空格
    std::string line;
    while (getline(std::cin, line))             //换行符也被读进来，但是不会存换行符，实际上被丢弃掉了
        std::cout << line << std::endl;         //手动加上换行符

    return 0;
}
