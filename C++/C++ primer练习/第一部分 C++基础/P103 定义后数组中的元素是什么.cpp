//ʱ�䣺2019��5��14��15:58:33
//�����е�Ԫ�ص�ֵ��ʲô

#include <iostream>
#include <string>

//������ȫ���������е�����
std::string sa[10];      //�մ�
int ia[10];              //10��0

int main()
{
    //�����ھֲ��������е�����
    std::string sa2[10];       //�մ�
    int ia2[10];               //10��δ֪��

    for (auto c : sa)
        std::cout << c << " ";
    std::cout << std::endl;

    for (auto c : ia)
        std::cout << c << " ";
    std::cout << std::endl;

    for (auto c : sa2)
        std::cout << c << " ";
    std::cout << std::endl;

    return 0;
}
