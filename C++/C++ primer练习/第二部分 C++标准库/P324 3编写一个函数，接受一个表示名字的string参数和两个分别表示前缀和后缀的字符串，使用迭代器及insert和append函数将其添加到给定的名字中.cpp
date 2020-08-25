//时间：2019年6月13日16:22:45
//编写一个函数，接受一个表示名字的string参数和两个分别表示前缀（如“Mr.”或“Ms.”）和后缀（“Jr.”或“III”）的字符串，
//使用迭代器及insert和append函数将前缀和后缀添加到给定的名字中，将生成的新string返回

#include <iostream>
#include <string>

std::string func(std::string &s, const std::string &bf, const std::string &af)
{
/*
    auto iter1 = s.begin();
    auto iter2 = bf.end()-1;
    while(iter2 >= bf.begin())
    {
        iter1 = s.insert(iter1, *iter2);
        iter2--;
    }
*/
    s.insert(s.begin(), 1, ' ');
    s.insert(s.begin(), bf.begin(), bf.end());     //插入前缀
    s.append(" ");
    s.append(af);    //s.append(af.begin(), af.end());    //插入后缀
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
