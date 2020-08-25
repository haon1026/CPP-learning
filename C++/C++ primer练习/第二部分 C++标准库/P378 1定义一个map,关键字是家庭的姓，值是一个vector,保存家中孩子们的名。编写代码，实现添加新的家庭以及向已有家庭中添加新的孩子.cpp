//时间：2019年6月18日20:36:21
//定义一个map,关键字是家庭的姓，值是一个vector,保存家中孩子们的名。编写代码，实现添加新的家庭以及向已有家庭中添加新的孩子

#include <iostream>
#include <vector>
#include <map>

void add_family(std::map<std::string, std::vector<std::string>> &families, const std::string &family)
{
    if (families.find(family) == families.end())        //先检查是否已有这个家庭
        families[family] = std::vector<std::string>();  //如果没有这个家庭，创建一个空的vector<string>，表示这个家庭的孩子名字列表， std::vector<std::string>()经测试不写结果也是一样
}

void add_child(std::map<std::string, std::vector<std::string>> &families, const std::string &family, const std::string &child)
{
    families[family].push_back(child);    //families[family]取出该家庭的vector然后添加
}

int main()
{
    std::map<std::string, std::vector<std::string>> families;

    add_family(families, "张");
    add_child(families, "张", "齐");
    add_child(families, "张", "强");
    add_child(families, "王", "微");
    //add_family(families, "张");        //测试不做检查家庭的情况，会导致已有家庭的孩子名字清空，因为函数体内生成了一个空vector
    //add_family(families, "王");


    for (const auto &f : families)
    {
        std::cout << f.first << "家的孩子：";
        for (const auto &c : f.second)
        {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//其他解题思路：add_family的函数体内部只需要一句       families[family];
//当该家庭已存在时，此语句只是获取其vector，不会导致vector有任何变化，若该家庭不存在，标准库map的实现机制时在容器中为该关键字创建一个对象，进行默认初始化，即创造一个空vector与if版本的效果完全一致
//这也是add_child不需要检查家庭是否存在的原因，当家庭存在时，将孩子的名字追加到现有vector的末尾，若家庭不存在，标准库会先创建一个新的vecotr，然后我们的程序将孩子添加进去
