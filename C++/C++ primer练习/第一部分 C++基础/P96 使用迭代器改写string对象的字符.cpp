//时间：2019年5月13日10:27:40
//使用迭代器改写string对象的字符

#include <iostream>
#include <string>

int main()
{
    std::string s = "apple welcome";
    //将string对象中的第一个字符改成大写形式
    if (s.begin() != s.end())          //确保s非空
    {
        auto it = s.begin();            //it表示s的第一个字符                it是在if语句里面定义的，在if语句外不能使用
        *it = toupper(*it);              //将当前字符改成大写形式
    }
    std::cout << s << std::endl;

    //将string对象中的第一个单词改写成大写形式
    for (auto it2 = s.begin(); it2 != s.end() && !isspace(*it2); ++it2)       //迭代器返回的是容器中的位置信息，对位置信息解引用可得到位置上的元素，类似指针
        *it2 = toupper(*it2);
    std::cout << s << std::endl;

    return 0;
}
