//时间：2019年6月18日21:23:52
//编写一个程序，在一个vector而不是一个set中保存不重复的单词

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>

/*   可以直接用find函数查找单词
int main()
{
    std::vector<int> ivec;
    int val;
    while (std::cin >> val)
    {
        std::vector<int>::iterator iter;
        for (iter = ivec.begin(); iter != ivec.end(); iter++)
        {
            if (val == *iter)
                break;
        }
        if (iter == ivec.end())
            ivec.push_back(val);
    }

    for (auto c : ivec)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
*/

#include <iostream>
#include <map>
#include <set>
#include <string>

std::string &trans(std::string &s)
{
    for (int p = 0; p < s.size(); p++)
    {
        if (s[p] > 'A' && s[p] < 'Z')       //对每个字符首先检查是否使大写
            s[p] -= ('A' - 'a');            //如果是，将其转化为小写
        else if (s[p] == ',' || s[p]== '.') //检查是否带标点
            s.erase(p, 1);                  //如果是，将其删除
    }

    return s;
}
//答案
//vector版本:需要用find查找新读入的单词是否已在vector中
//1set版本：检查是否重复的工作是由set模板负责的,程序员无须编写对应的代码
int main()
{

    //1std::vector<std::string> unique_word;     //不重复的单词
    std::set<std::string> unique_word;
    std::string word;

    while (std::cin >> word)
    {
        trans(word);
        //1if (find(unique_word.begin(), unique_word.end(), word) == unique_word.end())
            //1unique_word.push_back(word);    //添加不重复单词
        unique_word.insert(word);
    }

    for (const auto &w : unique_word)   //打印不重复单词
    {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}
