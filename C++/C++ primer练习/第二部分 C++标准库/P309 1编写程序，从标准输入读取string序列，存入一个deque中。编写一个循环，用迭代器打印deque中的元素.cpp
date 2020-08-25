//时间：2019年6月10日22:20:15
//编写程序，从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素

#include <iostream>
#include <string>
#include <deque>

int main()
{
    std::deque<std::string> sdeque;
    std::string s;
    while (std::cin >> s)
    {
        //sdeque.push_back(s);
        sdeque.push_front(s);       //把元素添加到首位置也行，性能不变，但顺序与输入顺序相反
    }

    auto sbeg = sdeque.begin();
    auto send = sdeque.end();

    while(sbeg != send)
    {
        std::cout << *sbeg << " ";
        ++sbeg;
    }
    std::cout << std::endl;

    return 0;
}

