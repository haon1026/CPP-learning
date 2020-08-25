//ʱ�䣺2019��6��25��11:19:03
//��allocator��д��427ҳ�еĳ���

#include <iostream>
#include <memory>
#include <string>

//new
int main()
{
    int n = 100;
    std::string *const p = new std::string[n];   //����n����string
    std::string s;
    std::string *q = p;                     //qָ���һ��string
    while (std::cin >> s && q != p + n)
    {
        *q++ = s;          //����*qһ����ֵ
    }
    const size_t size = q - p;           //��ס��ȡ�˶��ٸ�string
    //ʹ������
    for (size_t i = 0; i < size; i++)
        std::cout << p[i] << " " << std::endl;

    delete []p;   //pָ��һ�����飬�ǵ���delete[]���ͷ�

    return 0;
}
/*
//allocator
int main()
{
    std::allocator<std::string> alloc;
    //����100��δ��ʼ����string
    auto const p = alloc.allocate(100);
    std::string s;
    std::string *q = p;                     //qָ���һ��string
    while (std::cin >> s && q != p + 100)
    {
        alloc.construct(q++, s);          //��s��ʼ��*q
    }
    const size_t size = q - p;           //��ס��ȡ�˶��ٸ�string

    for (size_t i = 0; i < size; i++)
        std::cout << p[i] << " " << std::endl;

    while (q != p)                      //ʹ����Ϻ��ͷ��ѹ����string
        alloc.destroy(--q);
    alloc.deallocate(p, 100);         //�ͷ��ڴ�

    return 0;
}
*/
