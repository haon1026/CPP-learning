//ʱ�䣺2019��5��15��11:50:45
//�Ƚ����������Ƿ����,��Ʊ��Ϸ

#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    const int sz = 5;
    int a[sz], b[sz], i;
    srand( (unsigned)time(NULL) );       //�������������
    for (i = 0; i < sz; i++)
        a[i] = rand() %10;               //ÿ��ѭ������һ��10���ڵ����������ӵ�a��

    std::cout << "ϵͳ�����Ѿ����ɣ����������²��5�����֣�0-9��,�����ظ�:" << std::endl;
    int uVal;
    //ͨ��forѭ��Ϊ����Ԫ�ظ�ֵ
    for (i = 0; i < sz; i++)
        if (std::cin >> uVal)
           b[i] = uVal;

    std::cout << "ϵͳ���ɵ������ǣ�";
    for (auto val : a)
        std::cout << val << " ";
    std::cout << std::endl;
    std::cout << "���²�������ǣ�";
    for (auto val : b)
        std::cout << val << " ";
    std::cout << std::endl;

    int *p = std::begin(a), *q = std::begin(b);     //��p��q�ֱ�ָ������a��b����Ԫ��
    while (p != std::end(a) && q != std::end(b))
    {
        if (*p != *q)
        {
            std::cout << "���Ĳ²������������鲻���" << std::endl;
            return -1;
        }
        p++;
        q++;
    }
    std::cout << "��ϲ��ȫ���¶��ˣ�" << std::endl;

    return 0;
}
