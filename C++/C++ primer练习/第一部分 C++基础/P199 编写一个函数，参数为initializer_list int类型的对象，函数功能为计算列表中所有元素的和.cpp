//ʱ�䣺2019��5��28��13:32:54
//��дһ������������Ϊinitializer_list int���͵Ķ��󣬺�������Ϊ�����б�������Ԫ�صĺ�

#include <iostream>

int mySum(std::initializer_list<int> li)
{
    int sum = 0;
    for (auto beg = li.begin(); beg != li.end(); ++beg)
        sum += *beg;

    return sum;
}

int main()
{
    std::cout << "2,1,3,4,5�ĺ��ǣ�" << mySum({2,1,3,4,5}) << std::endl;
    std::cout << "7,6,3�ĺ��ǣ�" << mySum({7,6,3}) << std::endl;
    std::cout << "1,2,9,10�ĺ��ǣ�" << mySum({1,2,9,10}) << std::endl;

    return 0;
}
