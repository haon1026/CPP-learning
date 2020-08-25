//ʱ�䣺2019��6��1��14:54:37
//P233��дһ����Ϊperson���࣬ʹ���ʾ��Ա��������סַ,ʹ��string��������ЩԪ��
//P235��Ӷ�ȡ�ʹ�ӡperson����Ĳ���
//P266ȷ��Person���Ƿ���һЩ���캯��Ӧ����explicit

#include <iostream>
#include <string>

class Person
{
private:
    std::string strName;        //����
    std::string strAddress;     //��ַ
public:
    Person() = default;             //���캯����������ʽ
    Person(const std::string &name, const std::string &add)
    {
        strName = name;
        strAddress = add;
    }
     explicit Person(std::istream &is) {read(is, *this);}

/*
    printf(const Person &per)  //const Person &per         //�������������explicit,���ܵ���ʽ������ת��
    {
        std::cout << per.strName << " " << per.strAddress << std::endl;
    }
*/

    std::string getName() const { return strName; }         //��������
    std::string getAddress() const { return strAddress; }   //���ص�ַ

    friend std::istream &read(std::istream &is, Person &per);        //��ķǳ�Ա������������Ԫ�����ſɷ������˽�г�Ա
    friend std::ostream &print(std::ostream &os, const Person &per);
};

std::istream &read(std::istream &is, Person &per)          //����������ַ
{
    is >> per.strName >> per.strAddress;
    return is;
}

std::ostream &print(std::ostream &os, const Person &per)   //���������ַ
{
    os << per.getName() << " " << per.getAddress();
    return os;
}

int main()
{
    Person per1;
    Person per2("����", "�й�");
    Person per3(std::cin);

    print(std::cout, per1) << std::endl;
    print(std::cout, per2) << std::endl;
    print(std::cout, per3) << std::endl;

/*
    std::cout << std::endl;     //�������explicit,���ܵ���ʽ������ת��
    per1.printf(std::cin);
*/

    return 0;
}


