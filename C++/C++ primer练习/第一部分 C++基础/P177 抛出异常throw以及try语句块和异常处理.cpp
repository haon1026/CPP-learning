//ʱ�䣺2019��5��19��22:53:30
//�׳��쳣throw�Լ�try������쳣����

#include <iostream>
#include <stdexcept>

int main()
{
    std::cout << "���������뱻�����ͳ�����" << std::endl;
    int ival1, ival2;

    while (std::cin >> ival1 >> ival2)
    {
        try
        {
            if (ival2 == 0)
            {
                throw std::runtime_error("��������Ϊ0");
            }
            std::cout << "��������Ľ���ǣ�" << ival1 / ival2 << std::endl;
        }catch(std::runtime_error err)
        {
            std::cout << err.what() << std::endl;
            std::cout << "��Ҫ������y or n��?";
            char ch;
            std::cin >> ch;
            if (ch != 'y' && ch != 'Y')
                break;
        }
    }


    return 0;
}
