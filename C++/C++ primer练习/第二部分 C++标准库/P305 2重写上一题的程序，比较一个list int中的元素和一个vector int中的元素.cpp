//ʱ�䣺2019��6��10��17:29:54
//��д��һ��ĳ��򣬱Ƚ�һ��list<int>�е�Ԫ�غ�һ��vector<int>�е�Ԫ��

#include <iostream>
#include <list>
#include <vector>

bool l_v_equal(std::vector<int> &ivec, std::list<int> &ilist)
{
    if (ivec.size() != ilist.size())    //�Ƚ�list��vectorԪ�ظ���
        return false;

    auto lb = ilist.begin();        //list��Ԫ��
    auto le = ilist.end();          //listβ��Ԫ��
    auto vb = ivec.begin();         //vector��Ԫ��

    for (; lb != le; ++lb, ++vb)
        if(*lb != *vb)
              return false;        //Ԫ�ز��ȣ���������
    return true;          //�������
}

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::list<int> ilist1 = {1, 2, 3, 4, 5};
    std::list<int> ilist2 = {1, 2, 3, 4, 5, 6, 8};
    std::list<int> ilist3 = {1, 2, 3, 4, 5, 7, 6};

    std::cout << l_v_equal(ivec, ilist) << std::endl;
    std::cout << l_v_equal(ivec, ilist1) << std::endl;
    std::cout << l_v_equal(ivec, ilist2) << std::endl;
    std::cout << l_v_equal(ivec, ilist3) << std::endl;

    return 0;
}

//��������˼·��ͨ����Χ��ʼ������һ����list<int>������ͬ��vector<int>��Ȼ����==������Ƚ�
//�ŵ㣺ֱ�����ñ�׼��Ĺ���ʵ�֣��Ƚϼ򵥣��Ҳ���β��ͬ��������ʵ�ֲ�ͬ�İ汾����������������ʱ������
//ռ�ö�����ڴ棬����Ҫ����ʱ�俽������
