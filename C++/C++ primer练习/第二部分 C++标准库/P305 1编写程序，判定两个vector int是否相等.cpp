//ʱ�䣺2019��6��10��17:05:28
//��д�����ж�����vector<int>�Ƿ����

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> ivec1 = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> ivec2 = {1, 2, 3, 4, 5};
    std::vector<int> ivec3 = {1, 2, 3, 4, 5, 6, 8};
    std::vector<int> ivec4 = {1, 2, 3, 4, 5, 7, 6};

    std::cout << (ivec == ivec1) << std::endl;
    std::cout << (ivec == ivec2) << std::endl;
    std::cout << (ivec == ivec3) << std::endl;
    std::cout << (ivec == ivec4) << std::endl;

    std::cout << ivec1.capacity() << " " << ivec.size() << std::endl;  // 7 7
    ivec1.push_back(8);
    ivec1.pop_back();
    std::cout << ivec1.capacity() << " " << ivec.size() << std::endl;  // 14  7 �������·���ռ������пռ���������з��䣬�Ա�֤vector��Ч��
    std::cout << (ivec == ivec1) << std::endl;

    return 0;
}
