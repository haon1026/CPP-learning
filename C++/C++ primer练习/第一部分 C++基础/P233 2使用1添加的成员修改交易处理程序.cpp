//ʱ�䣺2019��6��1��22:24:15
//�޸Ľ��״����������ʹ����Щ��Ա           Sales_data���ͷ�ļ�δ���δд�룬����  //�ѵ���OK

#include <iostream>
#include <string>
#include <Sales_data.h>
/*
class Sales_data
{
public:                        //����˽�����ݳ�Ա  //δ�����������ͷ�ļ�����ʱ����Ϊpublic���ſ�ֱ�����������
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
*/
//δ����Sales_data���ͷ�ļ����޷�������������ֻ࣬�ܵ������������ĸ�����Ա    //�ѵ���
int main()
{
    std::cout << "�����뽻�׼�¼��ISBN,��������ԭ�ۣ�ʵ���ۼۣ���" << std::endl;
    Sales_data total;
    if (std::cin >> total)   //Ӧ������ȫ�����׼�¼������ֻ��ISBN���
    {
        Sales_data trans;
        //���벢����ʣ�ཻ�׼�¼
        while (std::cin >> trans)
        {
            //������ڴ�����ͬ����
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                //��ӡǰһ����Ľ��
                std::cout << total;
                total = trans;      //total���ڱ�ʾ��һ��������۶�
            }
        }
        //��ӡ���һ����Ľ��
        std::cout << total;
    }
    else
    {
        //û�����룡�������
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}
