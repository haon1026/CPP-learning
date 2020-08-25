//时间：2019年6月19日12:10:45
//定义一个map,关键字是家庭的姓，值是一个vector,保存家中孩子们的名。编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子
//扩展378练习中编写到的孩子姓到名的map,添加一个pair的vector，保存孩子的名和生日

#include <iostream>
#include <vector>
#include <map>
#include <utility>

void add_family(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &families, const std::string &family)
{
        families[family];  //如果没有这个家庭，创建一个空的vector<string>，表示这个家庭的孩子名字列表
}

void add_child(std::map<std::string, std::vector<std::pair<std::string, std::string>>> &families, const std::string &family, const std::string &child, const std::string &birthday)
{
    families[family].push_back({child, birthday});    //families[family]取出该家庭的vector然后添加
}

int main()
{
    std::map<std::string, std::vector<std::pair<std::string, std::string>>> families;

    add_family(families, "张");
    add_child(families, "张", "齐", "1970-1-1");
    add_child(families, "张", "强", "1980-1-1");
    add_child(families, "王", "微", "1990-1-1");
    add_family(families, "王");



    for (const auto &f : families)
    {
        std::cout << f.first << "家的孩子：";
        for (const auto &c : f.second)
        {
            std::cout << c.first << "（生日"<< c.second << "), ";
        }
        std::cout << std::endl;
    }

    return 0;
}

