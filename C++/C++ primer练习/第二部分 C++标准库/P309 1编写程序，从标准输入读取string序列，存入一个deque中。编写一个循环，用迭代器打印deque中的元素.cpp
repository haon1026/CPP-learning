//ʱ�䣺2019��6��10��22:20:15
//��д���򣬴ӱ�׼�����ȡstring���У�����һ��deque�С���дһ��ѭ�����õ�������ӡdeque�е�Ԫ��

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
        sdeque.push_front(s);       //��Ԫ����ӵ���λ��Ҳ�У����ܲ��䣬��˳��������˳���෴
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

