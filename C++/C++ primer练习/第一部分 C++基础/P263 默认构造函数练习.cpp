//ʱ�䣺2019��6��5��15:13:02
//Ĭ�Ϲ��캯����ϰ���ٶ���һ����ΪNodefault���࣬����һ������int�Ĺ��캯��������û��
//Ĭ�Ϲ��캯��������C��C��һ��Nodafault���͵ĳ�Ա������C��Ĭ�Ϲ��캯��

//��ΪNodefault���е�һ�����캯��������Ĭ�Ϲ��캯������������C�У�����ʹ���޲�����Ĭ�Ϲ��캯����
//�����Ļ�����C��Nodefault��Ա�޷���ȷ��ʼ��

#include <iostream>

class Nodefault
{
public:
    Nodefault(int i) {val = i;}
    int val;
};

class C
{
public:
    Nodefault nd;
    //������ʽ����Nodefault�Ĵ��ι��캯����ʼ��nd
    C(int i = 0) : nd(i) {}      //Ĭ��ʵ�Σ�����ɲ���������Ĭ��Ϊ0��Ҳ�ɴ�һ���û����õĲ���
};

int main()
{
    C c1;    //ʹ��������C��Ĭ�Ϲ��캯��
    C c2(3);
    std::cout << c1.nd.val << " " << c2.nd.val << std::endl;
    return 0;
}
