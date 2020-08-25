//时间：2019年6月13日16:07:46
//重写上一题的函数，这次使用一个下标和replace

#include <iostream>
#include <string>

void replace_string(std::string &s, const std::string &oldVal, const std::string &newVal)
{
    int p = 0;
    while ((p = s.find(oldVal,p)) != std::string::npos)     //在s中查找oldVal
    {
        s.replace(p, oldVal.size(), newVal);     //将找到的子串替换为newVal的内容
        p += newVal.size();      //下标调整到新插入内容之后
    }
}

int main()
{
    std::string s = "tho thru tho!";
    replace_string(s, "thru", "through");
    std::cout << s << std::endl;

    replace_string(s, "tho", "though");
    std::cout << s << std::endl;

    replace_string(s, "through", "");
    std::cout << s << std::endl;
}


