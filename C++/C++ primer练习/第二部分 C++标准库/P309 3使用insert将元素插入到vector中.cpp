//ʱ�䣺2019��6��11��00:46:32
//ʹ��insert�ķ���ֵ��vector������һ���ض�λ�÷�������Ԫ��

#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector<std::string> svec;
    auto iter = svec.begin();
    std::string word;
    while (std::cin >> word)
    {
        iter = svec.insert(iter, word);           //����Ԫ�غ󣬻�ʹָ�������ĵ�����ʧЧ��������Ҫ���¸�ֵ
    }

    for (auto beg = svec.cbegin(); beg != svec.cend(); ++beg)    //����������
        std::cout << *beg << " ";
    std::cout << std::endl;

    return 0;
}
