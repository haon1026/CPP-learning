//时间：2019年6月8日14:28:52
//编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中，将每一行作为一个独立的元素存于vector中

#include <iostream>
#include <vector>
#include <fstream>
#include <string>


int main()
{
    std::ifstream in("文件流测试.txt");       //打开文件
    if (!in)
    {
        std::cerr << "无法打开输入文件" << std::endl;
        return -1;
    }

    std::vector<std::string> v;
    std::string line;
    while (getline(in, line))          //从文件中读取一行        改为while(in >> line)即可实现一个单词作为一个独立的元素
    {
        v.push_back(line);             //添加到vector中
    }
    in.close();                        //输入完毕，关闭文件

    for (auto c : v)                   //范围for循环遍历输出
        std::cout << c << std::endl;

    return 0;
}
