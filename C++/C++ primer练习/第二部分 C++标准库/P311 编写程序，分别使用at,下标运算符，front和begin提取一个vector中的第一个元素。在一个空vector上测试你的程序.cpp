//ʱ�䣺2019��6��12��09:48:25
//��д���򣬷ֱ�ʹ��at,�±��������front��begin��ȡһ��vector�еĵ�һ��Ԫ�ء���һ����vector�ϲ�����ĳ���

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;

    std::cout << vec.at(0) << std::endl;           //ִ�����������׳�һ��out_of_range�쳣�����˳���δ�����쳣����˻����쳣�˳�    //��ȷ�ı�̷�ʽ�ǲ�����ܵ�out_of_range�쳣������Ӧ�Ĵ���
    //std::cout << vec[0] << std::endl;            //�������ֻ�ȡ������Ԫ�صķ�����������Ϊ��ʱ�����׳��쳣�����ǵ��³���ֱ���˳�    //��ȷ�ı�̷�ʽ���ȼ���±�ĺϷ��ԣ������Ƿ�Ϊ�գ�Ȼ���ٻ�ȡԪ��
    //std::cout << vec.front() << std::endl;
    //std::cout << *vec.begin() << std::endl;

    return 0;
}
