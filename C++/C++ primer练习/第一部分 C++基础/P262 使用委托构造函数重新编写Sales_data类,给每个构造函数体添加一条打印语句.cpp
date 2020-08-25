//ʱ�䣺2019��6��4��21:57:54
//ʹ��ί�й��캯�����±�дSales_data��,��ÿ�����캯�������һ����ӡ���

#include <iostream>

class Sales_data
{
public:
    Sales_data(std::string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt * price) {std::cout << "ִ���˹��캯��1" << std::endl;}
    Sales_data() : Sales_data("", 0, 0) {std::cout << "ִ���˹��캯��2" << std::endl;}
    Sales_data(std::string s) : Sales_data(s, 0, 0) {std::cout << "ִ���˹��캯��3" << std::endl;}
    Sales_data(std::istream &is) : Sales_data() {read(is, *this); std::cout << "ִ���˹��캯��4" << std::endl;}

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
