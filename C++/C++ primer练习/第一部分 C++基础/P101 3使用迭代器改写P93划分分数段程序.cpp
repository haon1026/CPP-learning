//ʱ�䣺2019��5��14��00:26:43
//ʹ�õ�������д���ַ����γ���

#include <iostream>
#include <vector>

int main()
{
    //��vectot�����¼�������ε���������ʼֵ��Ϊ0
    std::vector<unsigned> v(11);
    unsigned grade;
    std::cout << "������һ��ɼ���" << std::endl;
    while(std::cin >> grade)
        if(grade <= 100)
         ++*(v.begin() + grade / 10);             //���õ�������λ����Ӧ��Ԫ�أ���1

    std::cout << "�ܼ��� " << v.size() << " ��������" << std::endl;
    std::cout << "���������ε������ֲ��ǣ��ɼ��ӵ͵��ߣ���" << std::endl;

    //���õ���������v��Ԫ�ز�������
    //for(auto c : v)
    //   std::cout << c << " ";
    for (auto it = v.begin(); it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;


    return 0;
}
