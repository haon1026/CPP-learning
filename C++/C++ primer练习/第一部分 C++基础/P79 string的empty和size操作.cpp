//ʱ�䣺2019��5��11��12:30:58
//string��empty��size�Ĳ���

#include <iostream>
#include <string>

int main()
{
    std::string line;

/*  //����ǿյ���
    while (getline(std::cin, line))
        if (!line.empty())
            std::cout << line << std::endl;
*/
    //�������10���ַ�����
    while (getline(std::cin, line))
        if (line.size() > 10)
            std::cout << line << std::endl;

    // auto len = line.size();      //len��������string::size_type
    return 0;
}
