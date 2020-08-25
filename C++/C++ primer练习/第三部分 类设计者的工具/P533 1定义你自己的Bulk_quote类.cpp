//时间：2019年7月8日21:01:16
//定义你自己的Bulk_quote类
//将Quote和Bulk_quote的对象传给print_total函数，检查函数是否正确
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

class Bulk_quote : public Quote
{
public:
    Bulk_quote(const std::string &book = "", double sales_price = 0, size_t qty = 0, double dis_rate = 0) : Quote(book, sales_price), min_qty(qty), discount(dis_rate) {}
    double net_price(size_t cnt) const override
    {
        if (cnt >= min_qty)
            return cnt * (1-discount) * price;
        else
            return cnt * price;
    }

private:
    size_t min_qty;
    double discount;
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
    Quote q1("123321", 100);
    Bulk_quote b2("1301", 50, 50, 0.2);

    print_total(std::cout, q1, 100);
    print_total(std::cout, b2, 100);

    return 0;
}
