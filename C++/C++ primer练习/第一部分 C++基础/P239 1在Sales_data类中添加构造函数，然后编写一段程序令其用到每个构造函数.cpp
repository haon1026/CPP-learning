//ʱ�䣺2019��6��1��22:36:37
//��Sales_data������ӹ��캯����Ȼ���дһ�γ��������õ�ÿ�����캯��

#include <iostream>

class Sales_data
{
public:            //���캯����4����ʽ
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);

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
    read(is, *this);

}

std::istream &read(std::istream &is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //����ʵ���ۿ�
}

std::ostream &print(std::ostream &os, Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

//δ����Saler_dataͷ�ļ����޷���������ֻ࣬�ܰ�������ĸ�����Ա����������ߵ���print����
int main()
{
    Sales_data data1;
    Sales_data data2("NO123");
    Sales_data data3("NO321", 100, 50, 30);
    Sales_data data4(std::cin);

    std::cout << "�鼮����������ǣ�" << std::endl;
    std::cout << data1.bookNo << " " << data1.units_sold << " " << data1.sellingprice << " " << data1.saleprice << " " << data1.discount << std::endl;
    std::cout << data2.bookNo << " " << data2.units_sold << " " << data2.sellingprice << " " << data2.saleprice << " " << data2.discount << std::endl;
    std::cout << data3.bookNo << " " << data3.units_sold << " " << data3.sellingprice << " " << data3.saleprice << " " << data3.discount << std::endl;
    std::cout << data4.bookNo << " " << data4.units_sold << " " << data4.sellingprice << " " << data4.saleprice << " " << data4.discount << std::endl;
    std::cout << std::endl;
    print(std::cout, data1) << std::endl;
    print(std::cout, data2) << std::endl;
    print(std::cout, data3) << std::endl;
    print(std::cout, data4) << std::endl;

    return 0;
}


