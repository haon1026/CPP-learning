//ʱ�䣺2019��6��9��23:06:07
//��д�绰������򣬴�һ�������ļ�����cin��ȡ����

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
    //�����֤�绰���뽫�ڵ�17�½��ܣ����ڼ򵥷���true��
    return true;
}

int main(int argc, char *argv[])
{
    std::vector<Personinfo> people;
    std::string line, word;              //�ֱ𱣴����������һ�к͵���
    std::istringstream record;           //����������������м�¼

    if (argc != 2)
    {
        std::cerr << "������ļ���" << std::endl;
        return -1;
    }
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cerr << "������ļ���" << std::endl;
        return -1;
    }

    while (getline(in, line))
    {
        Personinfo info;              //����һ������˼�¼���ݵĶ���
        record.clear();               //�ظ�ʹ���ַ�����ʱ��ÿ�ζ�Ҫ����clear
        record.str(line);             //����¼�󶨵���������
        record >> info.name;          //��ȡ����
        while (record >> word)        //��ȡ�绰����
        {
            info.phones.push_back(word);  //����
        }
        people.push_back(info);       //���˼�¼׷�ӵ�peopleĩβ
    }

    std::stringstream os;
    for (const auto &entry : people)            //��people��ÿһ��
    {
        std::ostringstream formatted, badNums;   //ÿ��ѭ���������Ķ���
        for (const auto &nums : entry.phones)    //��ÿ����
        {
            if (!valid(nums))
            {
                badNums << " " << nums;      //�������ַ�����ʽ����badNums
            }
            else
            {
                formatted << " " << format(nums);  //����ʽ�����ַ�����д�롰formatted
            }
        }
    if (badNums.str().empty())     //û�д������
        std::cout << entry.name << " " << formatted.str() << std::endl;   //��ӡ���ֺ͸�ʽ������
    else
        std::cerr << "input error:" << entry.name << " invalid number(s) " << badNums.str() << std::endl;  //�����ӡ���ֺʹ������
    }

    std::cout << os.str() << std::endl;

    return 0;
}
