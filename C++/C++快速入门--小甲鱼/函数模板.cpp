//ʱ�䣺2019��7��12��14:43:38
//����ģ��


#include <iostream>
#include <string>

template <class T>    //��template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int i1 = 100;
    int i2 = 200;
    std::cout << "����ǰ��i1 = " << i1 << ", i2 = " << i2 << "\n";
    swap(i1, i2);    //����д��swap<int>(i1, i2);  �⽫��ȷ���߱�����Ӧ��ʹ����һ������
    std::cout << "������i1 = " << i1 << ", i2 = " << i2 << "\n";

    std::string s1 = "����";
    std::string s2 = "����";

    std::cout << "����ǰ��s1 = " << s1 << ", s2 = " << s2 << "\n";
    swap(s1, s2);
    std::cout << "������s1 = " << s1 << ", s2 = " << s2 << "\n";

    return 0;
}
