//ʱ�䣺2019��5��29��22:19:55
//Ĭ��ʵ��

#include <iostream>
#include <string>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s")   //������ʽĬ�ϼ�s
{
    return (ctr > 1) ? word + ending : word;
}

int main()
{
    std::cout << "success�ĵ�����ʽ�ǣ�" << make_plural(1, "success", "es") << std::endl;
    std::cout << "success�ĸ�����ʽ�ǣ�" << make_plural(2, "success", "es") << std::endl;

    std::cout << "faliure�ĵ�����ʽ�ǣ�" << make_plural(1, "failure") << std::endl;
    std::cout << "failure�ĵ�����ʽ�ǣ�" << make_plural(2, "failure") << std::endl;

    return 0;
}
