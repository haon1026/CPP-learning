//时间：2019年5月12日16:56:39
//读取词存入vector中，然后改写成大写形式

#include <iostream>
#include <string>
#include <vector>

int main()
/*
{
    //string先转化为大写后添加入vector
    std::vector<std::string> v;
    std::cout << "请输入一组词" << std::endl;
    std::string word;

    while (std::cin >> word)
    {
        for (auto &c : word)                     //范围for循环遍历输入的字符串
            c = toupper(c);                      //把字符串每个字符改成大写
        v.push_back(word);                       //把改成大写后的字符串添加到vector
    }

    for (auto c : v)
        std::cout << c << std::endl;


    return 0;
}
*/
{
    //string先添加入vector后转化为大写
    std::vector<std::string> vString;
    std::string s;
    char cont = 'y';

    std::cout << "请输入第一个词：" << std::endl;
    while (std::cin >> s)
    {
        vString.push_back(s);                              //输入的字符串添加到vector
        std::cout << "您要继续吗（y or n）？" << std::endl;
        std::cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
        std::cout << "请输入下一个词：" << std::endl;
    }

    std::cout << "转换后的结果是：" << std::endl;
    for (auto &mem : vString)                              //范围for循环遍历vector中的每一个元素
    {
        for (auto &c : mem)                                //范围for循环遍历元素中的每个字符
            c = toupper(c);                                //改写为大写字母形式
        std::cout << mem << std::endl;
    }
    return 0;
}

