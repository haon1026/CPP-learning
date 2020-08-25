//时间：2019年6月9日15:54:38
//使用isstringstream
/*
假定有一个文件，列出了一些人和他们的电话号码。某些人只有一个号码，而另一些人则有多个-家庭电话，工作电话，移动电话。我们的输入文件看起来可能是这样的
organ 201111  131313
drew   31313
lee   630313 312321 132123
文件中每条记录都以一个人名开始，后面跟随一个或多个电话号码
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

struct PersonInfo             //truct成语默认是公有
{
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    std::string line, word;    //分别保存来自输入的一行和单词
    std::vector<PersonInfo> person;    //保存来自输入的所有记录

    while (getline(std::cin,line))    //逐行从输入读取数据，直至cin遇到文件尾或其他错误
    {
        PersonInfo info;     //创建一个保存此记录数据的对象
        std::istringstream record(line);   //将记录绑定到刚读入的行
        record >> info.name;               //读取名字
        while(record >> word)              //读取电话号码
            info.phones.push_back(word);   //保存电话号码
        person.push_back(info);     //将此记录追加到person末尾
    }

    for (auto people : person)               //遍历vector对象person
    {
        std::cout << people.name << " ";      //先输出名字
        for (auto phone : people.phones)      //再遍历输出电话号码
        {
            std::cout << phone << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
