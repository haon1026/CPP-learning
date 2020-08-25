//ʱ�䣺2019��6��9��15:54:38
//ʹ��isstringstream
/*
�ٶ���һ���ļ����г���һЩ�˺����ǵĵ绰���롣ĳЩ��ֻ��һ�����룬����һЩ�����ж��-��ͥ�绰�������绰���ƶ��绰�����ǵ������ļ�������������������
organ 201111  131313
drew   31313
lee   630313 312321 132123
�ļ���ÿ����¼����һ��������ʼ���������һ�������绰����
*/

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

struct PersonInfo             //truct����Ĭ���ǹ���
{
    std::string name;
    std::vector<std::string> phones;
};

int main()
{
    std::string line, word;    //�ֱ𱣴����������һ�к͵���
    std::vector<PersonInfo> person;    //����������������м�¼

    while (getline(std::cin,line))    //���д������ȡ���ݣ�ֱ��cin�����ļ�β����������
    {
        PersonInfo info;     //����һ������˼�¼���ݵĶ���
        std::istringstream record(line);   //����¼�󶨵��ն������
        record >> info.name;               //��ȡ����
        while(record >> word)              //��ȡ�绰����
            info.phones.push_back(word);   //����绰����
        person.push_back(info);     //���˼�¼׷�ӵ�personĩβ
    }

    for (auto people : person)               //����vector����person
    {
        std::cout << people.name << " ";      //���������
        for (auto phone : people.phones)      //�ٱ�������绰����
        {
            std::cout << phone << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
