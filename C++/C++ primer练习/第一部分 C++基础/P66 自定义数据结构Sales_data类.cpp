//时间：2019年5月11日11:55:38
//自定义数据结构Sales_data类

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

    std::cout << "请输入书号，销售量以及单价" << std::endl;
    std::cin >> data1.bookNo >> data1.unit_sold >> price;
    data1.revenue = data1.unit_sold * price;

    std::cout << "请输入书号，销售量以及单价" << std::endl;
    std::cin >> data2.bookNo >> data2.unit_sold >> price;
    data2.revenue = data2.unit_sold * price;

    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalCnt = data1.unit_sold + data2.unit_sold;
        double totalRevenue = data1.revenue + data2.revenue;
        std::cout << "书号:" << data1.bookNo << std::endl;
        std::cout << "销售量:" << totalCnt << std::endl;
        std::cout << "总销售额:" << totalRevenue << std::endl;

        if (totalCnt != 0)
            std::cout << "平均价格:" << totalRevenue/totalCnt << std::endl;
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
