//ʱ�䣺2019��5��12��16:56:39
//��ȡ�ʴ���vector�У�Ȼ���д�ɴ�д��ʽ

#include <iostream>
#include <string>
#include <vector>

int main()
/*
{
    //string��ת��Ϊ��д�������vector
    std::vector<std::string> v;
    std::cout << "������һ���" << std::endl;
    std::string word;

    while (std::cin >> word)
    {
        for (auto &c : word)                     //��Χforѭ������������ַ���
            c = toupper(c);                      //���ַ���ÿ���ַ��ĳɴ�д
        v.push_back(word);                       //�Ѹĳɴ�д����ַ�����ӵ�vector
    }

    for (auto c : v)
        std::cout << c << std::endl;


    return 0;
}
*/
{
    //string�������vector��ת��Ϊ��д
    std::vector<std::string> vString;
    std::string s;
    char cont = 'y';

    std::cout << "�������һ���ʣ�" << std::endl;
    while (std::cin >> s)
    {
        vString.push_back(s);                              //������ַ�����ӵ�vector
        std::cout << "��Ҫ������y or n����" << std::endl;
        std::cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
        std::cout << "��������һ���ʣ�" << std::endl;
    }

    std::cout << "ת����Ľ���ǣ�" << std::endl;
    for (auto &mem : vString)                              //��Χforѭ������vector�е�ÿһ��Ԫ��
    {
        for (auto &c : mem)                                //��Χforѭ������Ԫ���е�ÿ���ַ�
            c = toupper(c);                                //��дΪ��д��ĸ��ʽ
        std::cout << mem << std::endl;
    }
    return 0;
}

