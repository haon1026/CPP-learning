//ʱ�䣺2019��5��23��11:42:56
//ʹ�������βη��ض�����Ϣ�����庯��ʹ�����ܹ�������λ��Ҳ���س��ִ���

#include <iostream>
#include <string>

//����s��c��һ�γ��ֵ�λ������
//�����β�occurs����ͳ��c���ֵ��ܴ���
std::string::size_type find_char(const std::string &s, char c, std::string::size_type &occurs)
{
    auto ret = s.size();                         //��һ�γ��ֵ�λ�ã�����еĻ����������ʼֵ,���ֵ�λ�����Ϊs.size()-1
    occurs = 0;                                  //���ñ�ʾ���ִ������βε�ֵ
    for(decltype(ret) i = 0; i != s.size(); ++i)
    {
        if (s[i] == c)
        {
            if(ret == s.size())                  //��¼c��һ�γ��ֵ�λ�ã� ���c�����趨�ĳ�ʼֵ˵���ǵ�һ�γ��֣���ֵ֮�󲻻��ٵ��ڳ�ʼֵ
                ret = i;
            ++occurs;                            //�����ֵĴ�����1
        }

    }
    std::cout << occurs << std::endl;
    return ret;                                  //���ִ���ͨ��occurs��ʽ�ķ���
}

int main()
{
    std::string::size_type  n = 0;
    char c = 'o';
    std::string str("hello world");
    auto index = find_char(str, c, n);
    std::cout << "�ַ���" << str << "�У���һ�γ���" << c << "��λ����" << index    //���ȥ��index���������壬�������find_char(str, c, n)��n�������ǰ��������ʽ���������
              << ", һ��������" << n << "��" << std::endl;

    return 0;
}
