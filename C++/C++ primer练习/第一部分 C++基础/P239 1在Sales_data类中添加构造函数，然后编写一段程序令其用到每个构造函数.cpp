//时间：2019年6月1日22:36:37
//在Sales_data类中添加构造函数，然后编写一段程序令其用到每个构造函数

#include <iostream>

class Sales_data
{
public:            //构造函数的4种形式
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);

public:
    std::string bookNo;         //书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    //销售量，显式初始化为0
    double sellingprice = 0.0;  //原始价格，显式初始化为0.0
    double saleprice = 0.0;     //实售价格，显式初始化为0.0
    double discount = 0.0;      //折扣，显式初始化为0.0
};

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //计算实际折扣
}

Sales_data::Sales_data(std::istream &is)
{
    read(is, *this);

}

std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //计算实际折扣
}

std::ostream &print(std::ostream &os, Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

//未导入Saler_data头文件，无法输出整个类，只能把类里面的各个成员单独输出或者调用print函数
int main()
{
    Sales_data data1;
    Sales_data data2("NO123");
    Sales_data data3("NO321", 100, 50, 30);
    Sales_data data4(std::cin);

    std::cout << "书籍的销售情况是：" << std::endl;
    std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.sellingprice << " " << data1.saleprice << " " << data1.discount << std::endl;
    std::cout << data2.bookNo << " " << data2.units_sold << " " << data2.sellingprice << " " << data2.saleprice << " " << data2.discount << std::endl;
    std::cout << data3.bookNo << " " << data3.units_sold << " " << data3.sellingprice << " " << data3.saleprice << " " << data3.discount << std::endl;
    std::cout << data4.bookNo << " " << data4.units_sold << " " << data4.sellingprice << " " << data4.saleprice << " " << data4.discount << std::endl;
    std::cout << std::endl;
    print(std::cout, data1) << std::endl;
    print(std::cout, data2) << std::endl;
    print(std::cout, data3) << std::endl;
    print(std::cout, data4) << std::endl;

    return 0;
}


