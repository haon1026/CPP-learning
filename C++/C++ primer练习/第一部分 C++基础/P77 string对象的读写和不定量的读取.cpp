//ʱ�䣺2019��5��11��12:13:33
//string����Ķ�д�Ͳ������Ķ�ȡ

#include <iostream>
#include <string>

int main()
{
    //��дstring���󣬻��Զ����Կ�ͷ�Ŀհ�
    std::string s1, s2;
    std::cin >> s1 >> s2;
    std::cout << s1 << " " << s2 << std::endl;
/*
    //��ȡδ֪������string����
    std::string word;
    while (std::cin >> word)
        std::cout << word << std::endl;
*/
    //ʹ��getline��ȡһ���У��ɱ�������ʱ�Ŀո�
    std::string line;
    while (getline(std::cin, line))             //���з�Ҳ�������������ǲ���滻�з���ʵ���ϱ���������
        std::cout << line << std::endl;         //�ֶ����ϻ��з�

    return 0;
}
