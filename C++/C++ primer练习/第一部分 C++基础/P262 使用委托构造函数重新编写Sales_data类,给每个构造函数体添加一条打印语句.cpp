//时间：2019年6月4日21:57:54
//使用委托构造函数重新编写Sales_data类,给每个构造函数体添加一条打印语句

#include <iostream>

class Sales_data
{
public:
    Sales_data(std::string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) {std::cout << "执行了构造函数1" << std::endl;}
    Sales_data() : Sales_data("", 0, 0) {std::cout << "执行了构造函数2" << std::endl;}
    Sales_data(std::string s) : Sales_data(s, 0, 0) {std::cout << "执行了构造函数3" << std::endl;}
    Sales_data(std::istream &is) : Sales_data() {read(is, *this); std::cout << "执行了构造函数4" << std::endl;}

    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os,  const Sales_data &item);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

};

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return is;
}

std::ostream &print(std::ostream &os,  const Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.revenue << std::endl;
    return os;
}

int main()
{
    Sales_data Sales1("NO1", 100, 100);
    print(std::cout, Sales1) << std::endl;

    Sales_data Sales2;
    print(std::cout, Sales2) << std::endl;

    Sales_data Sales3("NO2");
    print(std::cout, Sales3) << std::endl;

    Sales_data Sales4(std::cin);
    print(std::cout, Sales4) << std::endl;

    return 0;
}
