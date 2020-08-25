//时间：2019年6月1日23:43:19
//使用istream构造函数重写书店程序

#include <iostream>

class Sales_data
{
public:            //构造函数的4种形式
    Sales_data() = default;
    Sales_data(const std::string &book) : bookNo(book) {}
    Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep);
    Sales_data(std::istream &is);

    //isbn函数只有一条语句，返回bookNo
    std::string isbn() const { return bookNo; }
    //combine函数用于把两个ISBN相同的销售记录合并在一起
    Sales_data & combine(const Sales_data &rhs)
    {
        units_sold += rhs.units_sold;              //累加书籍的销售量
        saleprice = (rhs.saleprice * rhs.units_sold + saleprice * units_sold) / (rhs.units_sold + units_sold);   //重新计算实际销售价格
        if (sellingprice != 0)
            discount = saleprice / sellingprice;   //重新计算实际折扣
        return *this;                              //返回合并后的结果
    }


public:
    std::string bookNo;         //书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    //销售量，显式初始化为0
    double sellingprice = 0.0;  //原始价格，显式初始化为0.0
    double saleprice = 0.0;     //实售价格，显式初始化为0.0
    double discount = 0.0;      //折扣，显式初始化为0.0
};

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep)
{
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //计算实际折扣
}

Sales_data::Sales_data(std::istream &is)
{
    //read(is, *this);
    is >> (*this).bookNo >> (*this).units_sold >> (*this).sellingprice >> (*this).saleprice;
    if(sellingprice != 0)
        discount = saleprice / sellingprice;    //计算实际折扣
}

std::istream& read(std::istream& is, Sales_data &item)
{
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    if(item.sellingprice != 0)
        item.discount = item.saleprice / item.sellingprice;    //计算实际折扣
}

std::ostream& print(std::ostream& os, Sales_data &item)
{
    os << item.bookNo << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

//未导入Saler_data头文件，无法输出整个类，只能把类里面的各个成员单独输出
int main()
{
    Sales_data total(std::cin);
    if (std::cin)
    {
        Sales_data trans(std::cin);           //此时trans已经读入一个书类信息，需要进行比较
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


