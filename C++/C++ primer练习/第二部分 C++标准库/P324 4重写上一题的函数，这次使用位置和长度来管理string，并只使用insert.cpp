//ʱ�䣺2019��6��13��16:49:05
//��д��һ��ĺ��������ʹ��λ�úͳ���������string����ֻʹ��insert

#include <iostream>
#include <string>

std::string func(std::string &s, const std::string &bf, const std::string &af)
{
    s.insert(0, " ");
    s.insert(0, bf);     //����ǰ׺
    s.insert(s.size(), " ");
    s.insert(s.size(), af);  //�����׺
    return s;
}

int main()
{
    std::string s("Chen");
    func(s, "Mr.", "II");
    std::cout << s << std::endl;

    s = "M";
    func(s, "Mrs.", "III");
    std::cout << s << std::endl;
    return 0;
}
