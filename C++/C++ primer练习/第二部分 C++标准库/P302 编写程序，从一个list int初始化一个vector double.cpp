//ʱ�䣺2019��6��10��15:26:24
//��д�����һ��;ist<int>��ʼ��һ��vector<double>,��һ��vector<int>��ʼ��һ��vector<double>

#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> ivec = {7, 6, 5, 4, 3, 2, 1};

    //�������Ͳ�ͬ������ʹ�ÿ�����ʼ��
    //std::vector<double> dvec(ilist);

    //Ԫ���������ݣ���˿ɲ��÷�Χ��ʼ��
    std::vector<double> devc(ilist.begin(), ilist.end());

    //�������Ͳ�ͬ������ʹ�ÿ�����ʼ��
    //std::vector<double> devc(ivec);

    //Ԫ���������ݣ���˿ɲ��÷�Χ��ʼ��
    std::vector<double> devc1(ivec.begin(), ivec.end());

    std::cout << devc.capacity() << " " << devc.size() << " "
              << devc[0] << " " << devc[devc.size() - 1] << std::endl;

    std::cout << devc1.capacity() << " " << devc1.size() << " "
              << devc1[0] << " " << devc1[devc1.size() - 1] << std::endl;

    return 0;
}

//size��ָ������ǰӵ��Ԫ�صĸ���
//apacity��ָ�����ڱ�������µĴ洢�ռ�֮ǰ���Դ�ŵ�Ԫ������
//��vector<int> ivec(10),   ��ʱivec.capacity() = 10, ivec.size() = 10;
//����Ԫ��ֻҪ������10����apacity�����䣬����10��������11���Ļ����������·���洢�ռ�capacity = 20��size = 11
//�������·���ռ�Ļ��ǰ����пռ��2�����з��䣬�Ա�֤vector��Ч��
