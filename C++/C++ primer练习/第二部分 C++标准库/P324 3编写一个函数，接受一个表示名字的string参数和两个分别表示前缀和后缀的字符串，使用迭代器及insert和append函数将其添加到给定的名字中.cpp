//ʱ�䣺2019��6��13��16:22:45
//��дһ������������һ����ʾ���ֵ�string�����������ֱ��ʾǰ׺���硰Mr.����Ms.�����ͺ�׺����Jr.����III�������ַ�����
//ʹ�õ�������insert��append������ǰ׺�ͺ�׺��ӵ������������У������ɵ���string����

#include <iostream>
#include <string>

std::string func(std::string &s, const std::string &bf, const std::string &af)
{
/*
    auto iter1 = s.begin();
    auto iter2 = bf.end()-1;
    while(iter2 >= bf.begin())
    {
        iter1 = s.insert(iter1, *iter2);
        iter2--;
    }
*/
    s.insert(s.begin(), 1, ' ');
    s.insert(s.begin(), bf.begin(), bf.end());     //����ǰ׺
    s.append(" ");
    s.append(af);    //s.append(af.begin(), af.end());    //�����׺
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
