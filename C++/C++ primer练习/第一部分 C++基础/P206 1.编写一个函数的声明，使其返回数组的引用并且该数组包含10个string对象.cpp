//ʱ�䣺2019��5��29��11:27:53
//��дһ��������������ʹ�䷵����������ò��Ҹ��������10��string����

#include <iostream>
#include <string>

std::string (&fun(std::string (&arry)[10]))[10]       //1.ֱ�ӱ�д�����������õĺ��� string (&fun())[10];
{                                                     //2.ʹ�����ͱ��� typedef string arr[10];  arr& fun();
    return arry;                                      //3.ʹ��β�÷������� auto fun() -> string(&)[10]
}                                                     //4.ʹ��decltype�ؼ��� string str[10]; decltype(str) &func();

int main()
{
    std::string a[10] = {"0","1","2","3","4","5","6","7","8","9"};
    for(auto c : fun(a))
        std::cout << c << std::endl;
    return 0;
}
