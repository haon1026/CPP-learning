//ʱ�䣺2019��6��15��11:36:13
//��accumulate��һ��vector<int>�е�Ԫ��֮��

#include <iostream>
#include <vector>
#include <numeric>

int main()
{   //���Ǵ��ļ��е����ݣ����뵽vector��
    std::vector<int> iv = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << accumulate(iv.cbegin(), iv.cend(), 0) << std::endl;

    return 0;
}
