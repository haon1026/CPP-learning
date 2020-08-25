//时间：2019年6月19日16:32:51
//练习387页中的map以孩子的姓为关键字，保存他们的名的vector，用multimap重写此map

#include <iostream>
#include <map>
#include <string>
#include <algorithm>


void addchild(std::multimap<std::string, std::string> &families, const std::string &family, const std::string &child)
{
    families.insert({family, child});
}

int main()
{
    std::multimap<std::string, std::string> families;

    addchild(families, "张", "强");
    addchild(families, "张", "国");
    addchild(families, "张", "强");
    addchild(families, "李", "林");

    for (const auto &c : families)
    {
        std::cout << c.first << "家的孩子：" << c.second << std::endl;
    }

    return 0;
}
