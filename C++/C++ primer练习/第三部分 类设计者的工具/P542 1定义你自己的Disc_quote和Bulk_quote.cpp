//时间：2019年7月9日14:09:21
//定义你自己的Disc_quote和Bulk_quote

#include <iostream>

class Quote
{
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const  {return bookNo;}
    //返回给定数量的书籍的销售总额，派生类改写并使用不同的折扣计算方法
    virtual double net_price(std::size_t n) const {return n * price;}
    virtual ~Quote() = default;      //对析构函数进行动态绑定

protected:
    double price = 0.0;   //代表普通状态下不打折的价格

private:
    std::string bookNo;  //书籍的ISBN编号
};

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(std::size_t) const  = 0;

protected:
    std::size_t quantity = 0.0;  //折扣使用的购买量
    double discount = 0.0;      //表示折扣的小数值
};

class Bulk_quote : public Disc_quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double price, size_t qty, double disc) : Disc_quote(book, price, qty, disc) {}

    double net_price(size_t cnt) const override
    {
        if (cnt > quantity)
            return cnt * (1-discount) * price;
        else
            return cnt * price;
    }
};

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    //根据传入item形参的对象类型调用Quote::net_price或者Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << " # sold:" << n << " total due: " << ret << std::endl;

    return ret;
}

int main()
{
    Quote q("123", 100);
    Bulk_quote b("456", 50, 90, 0.2);
    print_total(std::cout, q, 100);
    print_total(std::cout, b, 100);
    return 0;
}
