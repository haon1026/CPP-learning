//ʱ�䣺2019��6��12��21:52:46
//����vi��һ������int��������������ż��ֵҲ������ֵ����������ѭ������Ϊ.cpp

/*
iter = vi.begin();
while (iter != vi.end())
    if (*iter % 2)
       iter = vi.insert(iter, *iter)  //�����һ��Ԫ��Ϊż��,bool���ʽ����ִ�У���ѭ�������Ϊ������iterһֱָ������Ԫ�أ���ѭ��
++iter;                               //����ʹ�û����ţ����ǳ���Ϊ�գ��������������ѭ��
*/

#include <iostream>
#include <vector>
/*
//��ѭ��
int main()
{
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    std::string tmp;
    while (iter != vi.end())
    {
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
        for (auto begin =vi.begin(); begin != vi.end(); begin++)
            std::cout << *begin << " ";
        std::cout << std::endl;
        std::cin >> tmp;
    }
    ++iter;

    return 0;
}
*/

int main()
{
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    std::string tmp;
    while (iter != vi.end())
    {
        if (*iter % 2)
        {
            iter = vi.insert(iter, *iter);
            ++iter;                     //�������iterʹ��ָ��ԭ��Ԫ�أ������ⲿiter�ƽ�ѭ���壬���ǻ������ѭ������������Ϊ�ջ���ȫ��ż��
        }
        ++iter;
        for (auto begin =vi.begin(); begin != vi.end(); begin++)
            std::cout << *begin << " ";
        std::cout << std::endl;
        std::cin >> tmp;
    }
    ++iter;

    return 0;
}
