//ʱ�䣺2019��5��19��21:04:27
//�ж��������ȳ���vector�����Ƿ���ǰ׺��ϵ

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {0, 1, 1, 2};
    std::vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};
    std::vector<int> v3 = {3, 5, 8};
    std::vector<int> v4 = {3, 5, 0, 9, 2, 7};

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();
    auto it3 = v3.cbegin();
    auto it4 = v4.cbegin();
    //�趨ѭ��������v1��v2����δ�����
    while (it1 != v1.cend() && it2 != v2.cend())
    {
        //�����ǰλ�õ�����Ԫ�ز���ȣ���϶�û��ǰ׺��ϵ���˳�ѭ��
        if (*it1 != *it2)
        {
            std::cout << "v1��v2֮�䲻����ǰ׺��ϵ" << std::endl;
            break;
        }
        ++it1;          //�������ƶ�����һ��Ԫ��
        ++it2;          //�������ƶ�����һ��Ԫ��
    }
    if (it1 == v1.cend())                          //���v1�϶�
        std::cout << "v1��v2��ǰ׺" << std::endl;
    if (it2 == v2.cend())                          //���v2�϶�
        std::cout << "v2��v1��ǰ׺" << std::endl;


    return 0;
}
