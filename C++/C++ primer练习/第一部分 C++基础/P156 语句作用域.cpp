//ʱ�䣺2019��5��18��11:03:53
//���������

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {0,1,2,3,4,5,6};
    //Ѱ�ҵ�һ����ֵԪ��
    auto beg = v.cbegin();

    while (beg != v.cend() && *beg >= 0)
        ++beg;
    if (beg == v.cend())
        //��ʱ��֪v�����е�Ԫ�ض����ڵ���0

    return 0;
}
