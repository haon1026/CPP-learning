//时间：2019年5月23日11:42:56
//使用引用形参返回额外信息：定义函数使得它能够即返回位置也返回出现次数

#include <iostream>
#include <string>

//返回s中c第一次出现的位置索引
//引用形参occurs负责统计c出现的总次数
std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs)
{
    auto ret = s.size();                         //第一次出现的位置（如果有的话），设个初始值,出现的位置最大为s.size()-1
    occurs = 0;                                  //设置表示出现次数的形参的值
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if(ret == s.size())                  //记录c第一次出现的位置， 如果c等于设定的初始值说明是第一次出现，赋值之后不会再等于初始值
                ret = i;
            ++occurs;                            //将出现的次数加1
        }

    }
    std::cout << occurs << std::endl;
    return ret;                                  //出现次数通过occurs隐式的返回
}

int main()
{
    std::string::size_type  n = 0;
    char c = 'o';
    std::string str("hello world");
    auto index = find_char(str, c, n);
    std::cout << "字符串" << str << "中，第一次出现" << c << "的位置是" << index    //如果去掉index的声明定义，输出换成find_char(str, c, n)，n将会出错，前后输出表达式是相关联的
              << ", 一共出现了" << n << "次" << std::endl;

    return 0;
}
