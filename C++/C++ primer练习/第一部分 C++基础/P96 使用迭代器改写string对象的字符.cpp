//ʱ�䣺2019��5��13��10:27:40
//ʹ�õ�������дstring������ַ�

#include <iostream>
#include <string>

int main()
{
    std::string s = "apple welcome";
    //��string�����еĵ�һ���ַ��ĳɴ�д��ʽ
    if (s.begin() != s.end())          //ȷ��s�ǿ�
    {
        auto it = s.begin();            //it��ʾs�ĵ�һ���ַ�                it����if������涨��ģ���if����ⲻ��ʹ��
        *it = toupper(*it);              //����ǰ�ַ��ĳɴ�д��ʽ
    }
    std::cout << s << std::endl;

    //��string�����еĵ�һ�����ʸ�д�ɴ�д��ʽ
    for (auto it2 = s.begin(); it2 != s.end() && !isspace(*it2); ++it2)       //���������ص��������е�λ����Ϣ����λ����Ϣ�����ÿɵõ�λ���ϵ�Ԫ�أ�����ָ��
        *it2 = toupper(*it2);
    std::cout << s << std::endl;

    return 0;
}
