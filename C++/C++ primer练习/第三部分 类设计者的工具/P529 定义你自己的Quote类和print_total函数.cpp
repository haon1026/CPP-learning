//ʱ�䣺2019��7��8��16:05:41
//�������Լ���Quote���print_total����

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

double print_total(std::ostream &os, const Quote &item, size_t n)
{
    //���ݴ���item�βεĶ������͵���Quote::net_price����Bulk_quote::net_price
    double ret = item.net_price(n);
    os << "ISBN:" << item.isbn() << " # sold:" << n << " total due: " << ret << std::endl;

    return ret;
}
