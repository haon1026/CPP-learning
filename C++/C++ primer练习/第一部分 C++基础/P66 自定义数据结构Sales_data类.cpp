//ʱ�䣺2019��5��11��11:55:38
//�Զ������ݽṹSales_data��

#include <iostream>
#include <string>

struct Sales_data
{
    std::string bookNo;
    unsigned unit_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data data1, data2;
    double price = 0;

    std::cout << "��������ţ��������Լ�����" << std::endl;
    std::cin >> data1.bookNo >> data1.unit_sold >> price;
    data1.revenue = data1.unit_sold * price;

    std::cout << "��������ţ��������Լ�����" << std::endl;
    std::cin >> data2.bookNo >> data2.unit_sold >> price;
    data2.revenue = data2.unit_sold * price;

    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.unit_sold + data2.unit_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << "���:" << data1.bookNo << std::endl;
        std::cout << "������:" << totalCnt << std::endl;
        std::cout << "�����۶�:" << totalRevenue << std::endl;

        if (totalCnt != 0)
            std::cout << "ƽ���۸�:" << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;

        return 0;
    }
    else
    {
        std::cerr << "Data must refer to the same ISBN" << std::endl;
        return -1;
    }


}
