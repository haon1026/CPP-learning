//ʱ�䣺2019��6��1��23:43:19
//ʹ��istream���캯����д������

#include <iostream>

class Sales_data
{
public:            //���캯����4����ʽ
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);

    //isbn����ֻ��һ����䣬����bookNo
    std::string isbn() const { return bookNo; }
    //combine�������ڰ�����ISBN��ͬ�����ۼ�¼�ϲ���һ��
    Sales_data & combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;              //�ۼ��鼮��������
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);   //���¼���ʵ�����ۼ۸�
        if (sellingprice != 0)
            discount = saleprice / sellingprice;   //���¼���ʵ���ۿ�
        return *this;                              //���غϲ���Ľ��
    }


public:
    std::string bookNo;         //�鼮��ţ���ʽ��ʼ��Ϊ�մ�
    unsigned units_sold = 0;    //����������ʽ��ʼ��Ϊ0
    double sellingprice = 0.0;  //ԭʼ�۸���ʽ��ʼ��Ϊ0.0
    double saleprice = 0.0;     //ʵ�ۼ۸���ʽ��ʼ��Ϊ0.0
    double discount = 0.0;      //�ۿۣ���ʽ��ʼ��Ϊ0.0
};

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //����ʵ���ۿ�
}

Sales_data::Sales_data(std::istream &is)
{
    //read(is, *this);
    is >> (*this).bookNo >> (*this).units_sold >> (*this).sellingprice >> (*this).saleprice;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //����ʵ���ۿ�
}

std::istream& read(std::istream& is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if(item.sellingprice != 0)
        item.discount = item.saleprice / item.sellingprice;    //����ʵ���ۿ�
}

std::ostream& print(std::ostream& os, Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

//δ����Saler_dataͷ�ļ����޷���������ֻ࣬�ܰ�������ĸ�����Ա�������
int main()
{
    Sales_data total(std::cin);
    if (std::cin)
    {
        Sales_data trans(std::cin);           //��ʱtrans�Ѿ�����һ��������Ϣ����Ҫ���бȽ�
        do
        {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }while(read(std::cin, trans));
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "No data?!" << std::endl;
    }

    return 0;
}


