//ʱ�䣺2019��6��2��10:34:12
//ΪPerson�������ȷ�Ĺ��캯��

#include <iostream>
#include <string>

class Person
{
private:
    std::string strName;    //����
    std::string strAddress;  //��ַ

public:
    Person() = default;
    Person(const std::string &name, const std::string &add)
    {
        strName = name;
        strAddress = add;
    }
    Person(std::istream &is) {is >> (*this).strName >> (*this).strAddress;}

    std::string getName() const {return strName;}
    std::string getAddress() const {return strAddress;}
};

std::ostream &print(std::ostream &os, const Person &per)
{
    os << per.getName() << " " << per.getAddress();
    return os;
}

int main()
{
    Person per1;
    Person per2("xiaoxiao", "China");
    Person per3(std::cin);

    print(std::cout, per1) << std::endl;
    print(std::cout, per2) << std::endl;
    print(std::cout, per3) << std::endl;

    return 0;
}
