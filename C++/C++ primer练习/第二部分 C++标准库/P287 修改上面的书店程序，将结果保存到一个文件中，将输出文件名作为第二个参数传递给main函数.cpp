//ʱ�䣺2019��6��9��15:02:11
//�޸�����������򣬽�������浽һ���ļ��У�������ļ�����Ϊ�ڶ����������ݸ�main����
//����ִ�����ɿ�ִ�е�exe�ļ���Ȼ��ͨ��CMD������ִ�У���ֱ�Ӱ��ļ��Ϲ�ȥ��ʡ���ֶ������ļ�·��

#include <iostream>
#include <fstream>
#include "Sales_data.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        std::cerr << "��������������ļ���" << std::endl;
        return -1;
    }
    ifstream in(argv[1]);
    if(!in)
    {
        std::cerr << "�޷��������ļ�" << std::endl;
        return -1;
    }

    ofstream out(argv[2]);            //�����Ҫ׷�ӵ������ļ���ĩβ��ֻ������ļ�ģʽapp
    if(!out)
    {
        std::cerr << "�޷�������ļ�" << std::endl;
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
                print(out, total) << std::endl;
                total = trans;
            }
            print(out, total) << std::endl;
        }
    }
    else
    {
        std::cerr << "û������" << std::endl;
    }

    return 0;
}
