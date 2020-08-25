//ʱ�䣺2019��5��28��22:26:51
//��дһ���ݹ麯�������vector���������

#include <iostream>
#include <vector>

void print(std::vector<int>::iterator beg, std::vector<int>::iterator end)
{
    if(beg != end)
    {
        std::cout << *beg << " ";
        print(++beg,end);
    }

    return;
}

void print1(std::vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
    if (!vInt.empty() && index < sz)
    {
        std::cout << vInt[index] << " ";
        print1(vInt, index + 1);
    }

    return;
}

int main()
{
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6, 10, 15};
    print(v1.begin(), v1.end());
    std::cout << std::endl;
    print1(v1, 0);

    return 0;
}
