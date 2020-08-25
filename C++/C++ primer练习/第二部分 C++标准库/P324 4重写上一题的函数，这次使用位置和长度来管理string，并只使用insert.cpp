//时间：2019年6月13日16:49:05
//重写上一题的函数，这次使用位置和长度来管理string，并只使用insert

#include <iostream>
#include <string>

std::string func(std::string &s, const std::string &bf, const std::string &af)
{
    s.insert(0, " ");
    s.insert(0, bf);     //插入前缀
    s.insert(s.size(), " ");
    s.insert(s.size(), af);  //插入后缀
    return s;
}

int main()
{
    std::string s("Chen");
    func(s, "Mr.", "II");
    std::cout << s << std::endl;

    s = "M";
    func(s, "Mrs.", "III");
    std::cout << s << std::endl;
    return 0;
}
