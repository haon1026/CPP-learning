//ʱ�䣺2019��6��1��22:25:46
//P233��дһ����Ϊperson���࣬ʹ���ʾ��Ա��������סַ,ʹ��string��������ЩԪ��


#include <iostream>
#include <string>

class Person
{
private:
    std::string strName;        //����
    std::string strAddress;     //��ַ
public:
    std::string getName() const { return strName; }         //��������
    std::string getAddress() const { return strAddress; }   //���ص�ַ
};



