//ʱ�䣺2019��5��11��16:35:10
//ʹ���±�������͵������������ַ�

#include <iostream>
#include <string>

int main()
{
    std::string s("hello World");

    //�ַ����ǿ���������ַ�
    if (!s.empty())                             //����ʱ�̶�ָ���ַ����ʣ����ȼ���Ƿ�Ϊ��
        std::cout << s[0] << std::endl;         //�±�����[]���ܵ����������string::size_type���͵�ֵ������Ǵ��������͵�ֵ�����Զ�ת��������͵��޷�������

    //�ַ����ǿ������ַ���ɴ�д
    if (!s.empty())
        s[0] = toupper(s[0]);                   //s[0]���ص��Ǹ�λ�����ַ������ã��±������ڵ���0��С��s.size()
    std::cout << s << std::endl;

    //�ַ����ĵ�һ���ʸ�д�ɴ�д��ʽ
    for (decltype(s.size()) index = 0; index != s.size() && !isspace(s[index]); ++index)     //�±������ڵ���0��С��s.size()�������±�����Ϊstring::size_type������޷�������
        s[index] = toupper(s[index]);                                                        //����ȷ��С�겻��С��0��ֻ�豣֤�±�С��size()��ֵ�Ϳ�����
    std::cout << s << std::endl;

    return 0;
}
