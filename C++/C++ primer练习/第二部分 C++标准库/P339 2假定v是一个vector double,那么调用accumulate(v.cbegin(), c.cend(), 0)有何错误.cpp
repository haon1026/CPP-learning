//ʱ�䣺2019��6��15��13:10:23
//�ٶ�v��һ��vector double,��ô����accumulate(v.cbegin(), c.cend(), 0)�кδ���
//accumulate�ĵ����������Ǻ͵ĳ�ֵ�����������˺����ķ������ͣ��Լ�������ʹ���ĸ��ӷ������

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

int main(int argc, char *argv[])
{
    std::ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "���ļ�ʧ�ܣ�" << std::endl;
        exit(1);
    }
    std::vector<double> dv;
    double val;
    while (in >> val)
        dv.push_back(val);

    std::cout << "�����и�����֮��Ϊ" << accumulate(dv.cbegin(), dv.cend(), 0.0) << std::endl;   //������������int���͵Ļ�����Ե�Ԫ���е�С������


    return 0;
}
