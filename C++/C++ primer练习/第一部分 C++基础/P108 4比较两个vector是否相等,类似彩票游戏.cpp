//ʱ�䣺2019��5��15��12:20:18
//�Ƚ�����vector�Ƿ����,��Ʊ��Ϸ

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

int main()
{
    const int sz = 5;
    std::vector<int> a, b;
    int i;
    srand( (unsigned)time(NULL) );       //�������������
    for (i = 0; i < sz; i++)
        a.push_back(rand() %10);               //ÿ��ѭ������һ��10���ڵ����������ӵ�a��

    std::cout << "ϵͳ�����Ѿ����ɣ����������²��5�����֣�0-9��,�����ظ�:" << std::endl;
    int uVal;
    //ͨ��forѭ��Ϊ����Ԫ�ظ�ֵ
    for (i = 0; i < sz; i++)
        if (std::cin >> uVal)
           b.push_back(uVal);

    std::cout << "ϵͳ���ɵ������ǣ�";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;
    std::cout << "���²�������ǣ�";
    for (auto val : b)
        std::cout << val << " ";
    std::cout << std::endl;

    auto it1 = begin(a), it2 = std::begin(b);     //��it1��t2�ֱ�ָ��vector����a��b����Ԫ��
    while (it1 != end(a) && it2 != end(b))
    {
        if (*it1 != *it2)
        {
            std::cout << "���Ĳ²������������鲻���" << std::endl;
            return -1;
        }
        it1++;
        it2++;
    }
    std::cout << "��ϲ��ȫ���¶��ˣ�" << std::endl;

    return 0;
}
