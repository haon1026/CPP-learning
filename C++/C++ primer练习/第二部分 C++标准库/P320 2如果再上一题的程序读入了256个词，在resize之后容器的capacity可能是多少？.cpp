//ʱ�䣺2019��6��12��23:52:41
//�������һ��ĳ��������256���ʣ���resize֮��������capacity�����Ƕ��٣�

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> svec;
    svec.reserve(1024);
    std::string word;

    //while (std::cin >> word)
        //svec.push_back(word);
    svec.assign(1000, "a");
    svec.resize(svec.size() + svec.size() / 2);

    std::cout << "�ռ䣺" << svec.capacity() << "Ԫ�أ�" << svec.size();
    return 0;
}
