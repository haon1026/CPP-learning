//时间：2019年7月8日21:24:31
//定义一个类使其实现一种数量受限的折扣策略，具体策略是：当购买书籍的数量不超过一个给定的限量时享受折扣，
//如果购买量一旦超过了限量，则超出的部分将以原价销售

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

class Limited_quote : public Quote
{
public:
    double net_price(size_t cnt) const override
    {
        if (cnt <= min_qty)
            return cnt * (1-discount) * price;
        else
            return min_qty * (1-discount) * price + (cnt-min_qty) * price;
    }

private:
    size_t min_qty;
    double discount;
};



