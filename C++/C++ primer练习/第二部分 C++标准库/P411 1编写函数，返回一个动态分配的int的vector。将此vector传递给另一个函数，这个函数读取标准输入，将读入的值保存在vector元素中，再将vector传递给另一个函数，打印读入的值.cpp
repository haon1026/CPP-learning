//ʱ�䣺2019��6��22��13:32:42
//��д����������һ����̬�����int��vector������vector���ݸ���һ�����������������ȡ��׼���룬�������ֵ������vectorԪ���У��ٽ�vector���ݸ���һ����������ӡ�����ֵ

#include <iostream>
#include <vector>
#include <new>

std::vector<int> *new_vector(void)
{
    return new (std::nothrow) std::vector<int>;
}

void read_ints(std::vector<int> *pv)
{
    int i;
    while (std::cin >> i)
        pv->push_back(i);
}

void print_ints(std::vector<int> *pv)
{
    for (const auto &c : *pv)
        std::cout << c << " ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> *pv = new_vector();
    if (!pv)
    {
        std::cout << "�ڴ治�㣡" << std::endl;
        return -1;
    }
    read_ints(pv);
    print_ints(pv);
    delete pv;
    pv = nullptr;

    return 0;
}
