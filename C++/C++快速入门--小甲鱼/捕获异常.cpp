//ʱ�䣺2019��7��12��11:02:50
//�����쳣

#include <iostream>
#include <climits>

unsigned long returnFactorial(unsigned short num) throw (const char *);    //�׳���������char *,˵����C����ַ���

int main()
{
    unsigned short num = 0;

    std::cout << "������һ��������";
    while (!(std::cin>>num) || (num<1))
    {
        std::cin.clear();       //���״̬
        std::cin.ignore(100, '\n');  //���������
        std::cout << "������һ������";
    }
    std::cin.ignore(100, '\n');

    try                    //try���ȥ����ĳ�����ܻ�ʧ�ܵ��£�ÿ��try�������Ҫ��һ����Ե�catch���
    {
        unsigned long factorial = returnFactorial(num);    //������������׳�һ���쳣
        std::cout << num << "�Ľ׳��ǣ�" << factorial;     //���ִ�й�throw��䣬�������������䣨���������try����ĩβ������Զ���ᱻִ��
    }
    catch(const char *e)    //�ٰ���һЩ����(catch���)ȥ��������쳣��������Ӧ�Ĵ���
    {
        std::cout << e;   //�����׳����쳣,�˴��쳣��C����ַ�����Ȼ�����
    }
    std::cout << "����" << std::endl;   //����try�׳��쳣�󣬿�֮������᲻��ִ��     //   �����쳣������Ƶĺô��°����ѳ�����������ܺ��߼�
    return 0;                                                                           //  ��������������Ļ��ֿ������������ǻ�����һ��
}

unsigned long returnFactorial(unsigned short num) throw (const char *)       //�����׳��������͵��쳣      //���û��ʹ�������﷨���庯������ζ�ź��������׳��������͵��쳣
{
    unsigned long sum = 1;
    unsigned long max = ULONG_MAX;

    for (int i = 1; i <= num; i++)
    {
        sum *= i;
        max /= i;
    }

    if (max < 1)
    {
        throw "�û���̫���޷��ڸü������������׳�ֵ��\n";
    }
    else
    {
        return sum;
    }
}
