//ʱ�䣺2019��6��12��21:29:23
//�ڱ������һ�������У��������insert�Ľ������begin,���ᷢ��ʲô����д����ȥ����ֵ��䣬����

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto begin = iv.begin();

    while (begin != iv.end())
    {
        if(*begin % 2)
        {
            ++begin;
            begin = iv.insert(begin, 42);   //����insert()���صĵ���������begin,��ʹbeginʧЧ������ʹ��begin�ᵼ�³������
            ++begin;
        }
        else
            ++begin;
    }

    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
