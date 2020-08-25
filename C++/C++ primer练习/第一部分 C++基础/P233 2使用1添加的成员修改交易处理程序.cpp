//时间：2019年6月1日22:24:15
//修改交易处理程序，令其使用这些成员           Sales_data类的头文件未理解未写入，有误  //已导入OK

#include <iostream>
#include <string>
#include <Sales_data.h>
/*
class Sales_data
{
public:                        //定义私有数据成员  //未导入完整类的头文件，暂时定义为public，才可直接输入输出，
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
*/
//未导入Sales_data类的头文件，无法整体输入输出类，只能单独输入输出类的各个成员    //已导入
int main()
{
    std::cout << "请输入交易记录（ISBN,销售量，原价，实际售价）：" << std::endl;
    Sales_data total;
    if (std::cin >> total)   //应该输入全部交易记录，而不只是ISBN书号
    {
        Sales_data trans;
        //读入并处理剩余交易记录
        while (std::cin >> trans)
        {
            //如果仍在处理相同的书
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                //打印前一本书的结果
                std::cout << total;
                total = trans;      //total现在表示下一本书的销售额
            }
        }
        //打印最后一本书的结果
        std::cout << total;
    }
    else
    {
        //没有输入！警告读者
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
