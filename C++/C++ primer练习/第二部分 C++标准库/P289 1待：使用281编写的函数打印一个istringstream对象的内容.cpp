//ʱ�䣺2019��6��9��18:07:31
//��дһ������������һ��istrean����������ֵ����Ҳ��istream&���˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ���������ʶʱֹͣ
//������ȡ�����ݴ�ӡ�ڱ�׼����ϡ������Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬
//ʹ�ú�����ӡһ��istringsteam���������

#include <iostream>
#include <stdexcept>
#include <sstream>
#include <string>

std::istream &func(std::istream &in)
{
    std::string v;
    while (in >> v, !in.eof())            //���ű��ʽ��ֱ�������ļ���������ֹͣ��ȡ
    {
        if (in.bad())
            throw std::runtime_error("IO������");
        if (in.fail())
        {
            std::cerr << "���ݴ��������ԣ�" << std::endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        std::cout << v << std::endl;
    }
    std::cout << "���ĵ�ǰ״̬Ϊ��" << in.rdstate() << std::endl;
    in.clear();
    std::cout << "ִ��clear�����ĵ�ǰ״̬Ϊ��" << in.rdstate() << std::endl;
    return in;
}

int main()
{
    std::ostringstream msg;
    msg << "C++ primer �����" << std::endl;
    std::istringstream in(msg.str());
    func(in);
/*
    std::string s = "Welcome to China daa ad fs!";    //Ϊʲô���һ���ַ�û�����
    in.str(s);
    func(in);
*/
    return 0;
}
