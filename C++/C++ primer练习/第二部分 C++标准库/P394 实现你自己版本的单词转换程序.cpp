//时间：2019年6月20日11:57:43
//实现你自己版本的单词转换程序

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <stdexcept>

const std::string &transform(const std::string &word, const std::map<std::string, std::string> &rule_map)
{
    //实际的转换工作；此部分是程序的核心
    auto map_iter = rule_map.find(word);

    if (map_iter != rule_map.cend())    //如果单词在转换规则map中
        return map_iter->second;       //使用替换短语
    else
        return word;       //否则返回原string

}

std::map<std::string, std::string> buildMap(std::ifstream &map_file)
{
    std::map<std::string, std::string> trans_map;    //新建map，保存转换规则
    std::string key;  //要转换的单词
    std::string value;  //替换后的内容
    while (map_file >> key && getline(map_file, value))   //读取第一个单词存入key中，行中剩余内容存入value
    {
        if (value.size() > 1)  //value中除了空格外还有别的字符的话进行转换
        {
            trans_map[key] = value.substr(1);
        }
        else
        {
            throw std::runtime_error("no rule for" + key);
        }
    }

    return trans_map;
}

void word_transform(std::ifstream &map_file, std::ifstream &input)
{
    auto trans_map = buildMap(map_file);       //保存转换规则

    std::string text;       //保存输入中的每一行

    while (getline(input, text))   //读取一行输入
        {
            std::stringstream stream(text);    //创建string流用于读取每个单词
            std::string word;
            bool firstword = true;     //控制是否打印空格
            while (stream >> word)
            {
                if (firstword)          //一行中的第一个单词前不打印空格
                    firstword = false;
                else              //单词间打印一个空格
                    std::cout << " ";

                std::cout << transform(word, trans_map);   //打印输出,trans返回word或者是转换后的形式
            }
            std::cout << std::endl;    //完成一行的转换后加空格
        }
}


int main(int argc, char *argv[])
{
    std::ifstream in1(argv[1]);
    std::ifstream in2(argv[2]);
    word_transform(in1, in2);

    return 0;
}
