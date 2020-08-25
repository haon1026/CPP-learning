//ʱ�䣺2019��7��8��21:01:16
//�������Լ���Bulk_quote��
//��Quote��Bulk_quote�Ķ��󴫸�print_total��������麯���Ƿ���ȷ
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
    //���ݴ���item�βεĶ������͵���Quote::net_price����Bulk_quote::net_price
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
