//时间：2019年7月8日16:05:41
//定义你自己的Quote类和print_total函数

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

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    //根据传入item形参的对象类型调用Quote::net_price或者Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << " # sold:" << n << " total due: " << ret << std::endl;

    return ret;
}
