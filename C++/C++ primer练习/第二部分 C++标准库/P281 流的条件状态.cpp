//ʱ�䣺2019��6��7��14:08:27
//��дһ������������һ��istrean����������ֵ����Ҳ��istream&���˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ���������ʶʱֹͣ
//������ȡ�����ݴ�ӡ�ڱ�׼����ϡ������Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬

#include <iostream>
#include <stdexcept>

std::istream& func(std::istream & is)
{
    int v;
    while (is >> v, !is.eof())            //���ű��ʽ��ֱ�������ļ���������ֹͣ��ȡ
    {
        if (is.bad())
            throw std::runtime_error("IO������");
        if (is.fail())
        {
            std::cerr << "���ݴ��������ԣ�" << std::endl;
            is.clear();
            is.ignore(100, '\n');
            continue;
        }
        std::cout << v << std::endl;
    }
    std::cout << "���ĵ�ǰ״̬Ϊ��" << is.rdstate() << std::endl;
    is.clear();
    std::cout << "ִ��clear�����ĵ�ǰ״̬Ϊ��" << is.rdstate() << std::endl;
    return is;
}

int main()
{
    std::cout << "������һЩ��������Ctrl+Z����" << std::endl;
    func(std::cin);

    return 0;
}
