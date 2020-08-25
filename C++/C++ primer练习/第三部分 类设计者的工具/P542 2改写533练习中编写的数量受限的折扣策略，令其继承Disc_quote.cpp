//ʱ�䣺2019��7��9��15:26:52
//��д533��ϰ�б�д���������޵��ۿ۲��ԣ�����̳�Disc_quote

#include <iostream>

class Quote
{
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price) : bookNo(book), price(sales_price) {}
    std::string isbn() const  {return bookNo;}
    //���ظ����������鼮�������ܶ�������д��ʹ�ò�ͬ���ۿۼ��㷽��
    virtual double net_price(std::size_t n) const {return n * price;}
    virtual ~Quote() = default;      //�������������ж�̬��

protected:
    double price = 0.0;   //������ͨ״̬�²����۵ļ۸�

private:
    std::string bookNo;  //�鼮��ISBN���
};

class Disc_quote : public Quote
{
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double price, std::size_t qty, double disc) : Quote(book, price), quantity(qty), discount(disc) {}
    double net_price(std::size_t) const  = 0;

protected:
    std::size_t quantity = 0.0;  //�ۿ�ʹ�õĹ�����
    double discount = 0.0;      //��ʾ�ۿ۵�С��ֵ
};

class Limited_quote : public Disc_quote
{
public:
    Limited_quote(const std::string &book="", double sales_price=0.0, size_t qty=0, double disc_rate=0.0) : Disc_quote(book, sales_price, qty, disc_rate) {}

    double net_price(size_t cnt) const override
    {
        if (cnt <= quantity)
            return cnt * (1-discount) * price;
        else
            return quantity * (1 - discount) * price + (cnt - quantity) * price;
    }
};

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    //���ݴ���item�βεĶ������͵���Quote::net_price����Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << " # sold:" << n << " total due: " << ret << std::endl;

    return ret;
}

int main()
{
    Quote q("123", 100);
    Limited_quote l("456", 50, 90, 0.2);
    print_total(std::cout, q, 100);
    print_total(std::cout, l, 100);
    return 0;
}
