//时间：2019年6月9日23:06:07
//重写电话号码程序，从一个命名文件而非cin读取数据

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

struct Personinfo
{
    std::string name;
    std::vector<std::string> phones;
};

std::string format(const std::string &s)
{
    return s;
}

bool valid(const std::string &s)
{
    //如何验证电话号码将在第17章介绍，现在简单返回true；
    return true;
}

int main(int argc, char *argv[])
{
    std::vector<Personinfo> people;
    std::string line, word;              //分别保存来自输入的一行和单词
    std::istringstream record;           //保存来自输入的所有记录

    if (argc != 2)
    {
        std::cerr << "请给出文件名" << std::endl;
        return -1;
    }
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cerr << "请给出文件名" << std::endl;
        return -1;
    }

    while (getline(in, line))
    {
        Personinfo info;              //创建一个保存此记录数据的对象
        record.clear();               //重复使用字符串流时，每次都要调用clear
        record.str(line);             //将记录绑定到给定的行
        record >> info.name;          //读取名字
        while (record >> word)        //读取电话号码
        {
            info.phones.push_back(word);  //保存
        }
        people.push_back(info);       //将此记录追加到people末尾
    }

    std::stringstream os;
    for (const auto &entry : people)            //对people中每一项
    {
        std::ostringstream formatted, badNums;   //每个循环步创建的对象
        for (const auto &nums : entry.phones)    //对每个数
        {
            if (!valid(nums))
            {
                badNums << " " << nums;      //将数的字符串形式存入badNums
            }
            else
            {
                formatted << " " << format(nums);  //将格式化的字符串”写入“formatted
            }
        }
    if (badNums.str().empty())     //没有错误的数
        std::cout << entry.name << " " << formatted.str() << std::endl;   //打印名字和格式化的数
    else
        std::cerr << "input error:" << entry.name << " invalid number(s) " << badNums.str() << std::endl;  //否则打印名字和错误的数
    }

    std::cout << os.str() << std::endl;

    return 0;
}
