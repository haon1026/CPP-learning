//时间：2019年6月9日21:38:37
//编写程序，将来自一个文件中的行保存在一个vector中，然后使用istringstream从中读取数据，每次读取一个单词

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream in("书店交易记录.txt");
    if (!in)
    {
        std::cerr << "文件打开错误！" << std::endl;
        return -1;
    }

    std::string line;
    std::vector<std::string> v;
    while (getline(in, line))            //从文件中读取一行
    {
        v.push_back(line);               //添加到vector中
    }

    in.close();            //输入完毕，文件需关闭！！！

    std::istringstream is;      //由于is定义再外部，内层while循环第一次执行后流状态位改变了，所以需重新初始化
    for (auto c : v)            //如果is定义再内部执行一次外循环内部is会重新定义，就不会考虑异常
    {
        is.str(c);
        std::string word;
        while (is >> word)
            std::cout << word << " ";
        std::cout << std::endl;
        std::cout << is.rdstate() << std::endl;
        is.clear();                           //退出循环后,is到达流的末尾,eof置位，需初始化状态才能重新输出
        std::cout << is.rdstate() << std::endl;
    }

/*
    //答案
    std::vector<std::string>::const_iterator it = v.begin();   //迭代器
    while (it != v.end())
    {
        std::istringstream line_str(*it);
        std::string word;
        while (line_str >> word)            //通过istringstream从vector中读取数据
            std::cout << word << " ";
        std::cout << std::endl;
        ++it;
    }
*/
    return 0;
}

