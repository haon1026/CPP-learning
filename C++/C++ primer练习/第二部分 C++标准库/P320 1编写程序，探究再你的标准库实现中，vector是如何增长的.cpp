//ʱ�䣺2019��6��12��23:33:42
//��д����̽������ı�׼��ʵ���У�vector�����������

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vi;
    int s, c;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "�ռ䣺" << vi.capacity() << "Ԫ������" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "�ռ䣺" << vi.capacity() << "Ԫ������" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "�ռ䣺" << vi.capacity() << "Ԫ������" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "�ռ䣺" << vi.capacity() << "Ԫ������" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "�ռ䣺" << vi.capacity() << "Ԫ������" << vi.size() << std::endl;

    return 0;
}
//���˵���ñ������ǳɱ�����vector�ռ��
