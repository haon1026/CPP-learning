//ʱ�䣺2019��5��29��11:58:25
//��дarrPtr������ʹ�䷵�����������

#include <iostream>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
                                            //���Ҫ����ָ����5�������������ָ�뺯����ǰ��&��*��return odd��even��ȡ��ַ��&
decltype(odd) &arrPtr(int i)       //����һ�����ã������������Ķ�����һ������5������������
{
    return (i % 2) ? odd : even;   //�������������
}

int main()
{
    for (auto c : arrPtr(10))
        std::cout << c << " ";
    std::cout << std::endl;
    return 0;
}


