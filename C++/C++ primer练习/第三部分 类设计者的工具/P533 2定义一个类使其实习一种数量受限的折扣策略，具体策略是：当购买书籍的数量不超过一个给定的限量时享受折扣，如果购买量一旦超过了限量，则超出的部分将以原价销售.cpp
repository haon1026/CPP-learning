//ʱ�䣺2019��7��8��21:24:31
//����һ����ʹ��ʵ��һ���������޵��ۿ۲��ԣ���������ǣ��������鼮������������һ������������ʱ�����ۿۣ�
//���������һ���������������򳬳��Ĳ��ֽ���ԭ������

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



