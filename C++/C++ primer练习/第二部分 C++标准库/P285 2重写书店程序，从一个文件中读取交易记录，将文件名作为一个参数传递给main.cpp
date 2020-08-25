//ʱ�䣺2019��6��8��17:13:22
//��д�����򣬴�һ���ļ��ж�ȡ���׼�¼�����ļ�����Ϊһ���������ݸ�main
//����ִ�����ɿ�ִ�е�exe�ļ���Ȼ��ͨ��CMD������ִ�У���ֱ�Ӱ��ļ��Ϲ�ȥ��ʡ���ֶ������ļ�·��

#include <iostream>
#include <fstream>
#include "Sales_data.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "������ļ���" << std::endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in)
    {
        std::cerr << "�޷��������ļ�" << std::endl;
        return -1;
    }

    Sales_data total;
    if (read(in, total))
    {
        Sales_data trans;
        while (read(in, trans))
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
            print(std::cout, total) << std::endl;
        }
    }
    else
    {
        std::cerr << "û������" << std::endl;
    }

    return 0;
}
