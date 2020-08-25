//ʱ�䣺2019��6��20��11:57:43
//ʵ�����Լ��汾�ĵ���ת������

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <stdexcept>

const std::string &transform(const std::string &word, const std::map<std::string, std::string> &rule_map)
{
    //ʵ�ʵ�ת���������˲����ǳ���ĺ���
    auto map_iter = rule_map.find(word);

    if (map_iter != rule_map.cend())    //���������ת������map��
        return map_iter->second;       //ʹ���滻����
    else
        return word;       //���򷵻�ԭstring

}

std::map<std::string, std::string> buildMap(std::ifstream &map_file)
{
    std::map<std::string, std::string> trans_map;    //�½�map������ת������
    std::string key;  //Ҫת���ĵ���
    std::string value;  //�滻�������
    while (map_file >> key && getline(map_file, value))   //��ȡ��һ�����ʴ���key�У�����ʣ�����ݴ���value
    {
        if (value.size() > 1)  //value�г��˿ո��⻹�б���ַ��Ļ�����ת��
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
    auto trans_map = buildMap(map_file);       //����ת������

    std::string text;       //���������е�ÿһ��

    while (getline(input, text))   //��ȡһ������
        {
            std::stringstream stream(text);    //����string�����ڶ�ȡÿ������
            std::string word;
            bool firstword = true;     //�����Ƿ��ӡ�ո�
            while (stream >> word)
            {
                if (firstword)          //һ���еĵ�һ������ǰ����ӡ�ո�
                    firstword = false;
                else              //���ʼ��ӡһ���ո�
                    std::cout << " ";

                std::cout << transform(word, trans_map);   //��ӡ���,trans����word������ת�������ʽ
            }
            std::cout << std::endl;    //���һ�е�ת����ӿո�
        }
}


int main(int argc, char *argv[])
{
    std::ifstream in1(argv[1]);
    std::ifstream in2(argv[2]);
    word_transform(in1, in2);

    return 0;
}
