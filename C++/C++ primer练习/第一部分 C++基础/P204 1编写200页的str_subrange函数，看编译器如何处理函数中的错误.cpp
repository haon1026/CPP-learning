//ʱ�䣺2019��5��28��21:43:44
//��д200ҳ��str_subrange����������������δ������еĴ���

#include <iostream>

bool str_subrange(const std::string &str1, const std::string &str2)
{
    //��С��ͬ����ʱ����ͨ��������жϽ����Ϊ����ֵ
    if (str1.size() == str2.size())
        return str1 == str2;         //��ȷ��==��������ز���ֵ
    //�õ��϶�string����Ĵ�С
    auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
    //�������string����Ķ�Ӧ�ַ��Ƿ���ȣ��Խ϶̵��ַ�������Ϊ��
    for (decltype(size) i = 0; i != size; ++i)
    {
        if (str1[i] == str2[i])
            return;                  //����#1��û�з���ֵ��������������   #2��������������δ�����κ�ֵ�ͽ����˺�����ִ�У����������ܼ�鲻����һ����
    }
}
