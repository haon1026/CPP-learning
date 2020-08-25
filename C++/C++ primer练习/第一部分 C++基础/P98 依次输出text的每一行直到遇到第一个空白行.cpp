//时间：2019年5月13日11:43:23
//用一个名为text的字符串向量存放文本文件中的数据，其中的元素或者是一句话或者是一个用于
//表示段落分隔的字符串，输出text中第一段的内容

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v = {"Welcome to China", ",", " "};
/*
    //输出第一段
    for (auto it = v.cbegin(); it != v.cend() && !it->empty(); it++)      //it->mem和(*it).mem意思相同
        std::cout << *it;                                                 //循环从头到尾只进行读取，不进行写入，所以使用cbegin和cend
*/
    //第一段全部改为大写
    //利用迭代器遍历全部字符串,遇到空串停止循环
    for (auto it2 = v.begin(); it2 != v.end() && !it2->empty(); ++it2)          //不能用isspace(*it2)，isspace是针对单个字符的
    {
        //利用迭代器遍历当前字符串
        for (auto &it3 : *it2)
            it3 = toupper(it3);
        std::cout << *it2;
    }

    return 0;
}
