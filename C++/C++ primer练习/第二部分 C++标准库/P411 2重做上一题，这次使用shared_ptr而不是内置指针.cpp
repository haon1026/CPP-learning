//ʱ�䣺2019��6��22��15:53:11
//��д����������һ����̬�����int��vector������vector���ݸ���һ�����������������ȡ��׼���룬�������ֵ������vectorԪ���У��ٽ�vector���ݸ���һ����������ӡ�����ֵ
//������һ�⣬���ʹ��shared_ptr����������ָ��

#include <iostream>
#include <vector>
#include <memory>

std::shared_ptr<std::vector<int>> new_vector(void)
{
    return std::make_shared<std::vector<int>>();
}

void read_ints(std::shared_ptr<std::vector<int>> pv)
{
    int i;
    while (std::cin >> i)
        pv->push_back(i);
}

void print_ints(std::shared_ptr<std::vector<int>> pv)
{
    for (const auto &c : *pv)
        std::cout << c << " ";
    std::cout << std::endl;
}

int main()
{
    std::shared_ptr<std::vector<int>> pv = new_vector();
    read_ints(pv);
    print_ints(pv);

    return 0;
}
