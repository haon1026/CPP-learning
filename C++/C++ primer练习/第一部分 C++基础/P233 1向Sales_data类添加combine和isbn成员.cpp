//ʱ�䣺2019��6��1��12:56:55
//��Sales_data�����combine��isbn��Ա

#include <iostream>
#include <string>

class Sales_data
{
private:                        //����˽�����ݳ�Ա
    std::string bookNo;         //�鼮��ţ���ʽ��ʼ��Ϊ�մ�
    unsigned units_sold = 0;    //����������ʽ��ʼ��Ϊ0
    double sellingprice = 0.0;  //ԭʼ�۸���ʽ��ʼ��Ϊ0.0
    double saleprice = 0.0;     //ʵ�ۼ۸���ʽ��ʼ��Ϊ0.0
    double discount = 0.0;      //�ۿۣ���ʽ��ʼ��Ϊ0.0

public:                         //���幫�к�����Ա
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

};
