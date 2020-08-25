//ʱ�䣺2019��7��9��14:09:21
//�������Լ���Disc_quote��Bulk_quote

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
    //���ݴ���item�βεĶ������͵���Quote::net_price����Bulk_quote::net_price
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
