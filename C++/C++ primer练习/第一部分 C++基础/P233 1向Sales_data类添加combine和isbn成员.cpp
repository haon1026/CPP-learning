//时间：2019年6月1日12:56:55
//向Sales_data类添加combine和isbn成员

#include <iostream>
#include <string>

class Sales_data
{
private:                        //定义私有数据成员
    std::string bookNo;         //书籍编号，隐式初始化为空串
    unsigned units_sold = 0;    //销售量，显式初始化为0
    double sellingprice = 0.0;  //原始价格，显式初始化为0.0
    double saleprice = 0.0;     //实售价格，显式初始化为0.0
    double discount = 0.0;      //折扣，显式初始化为0.0

public:                         //定义公有函数成员
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

};
