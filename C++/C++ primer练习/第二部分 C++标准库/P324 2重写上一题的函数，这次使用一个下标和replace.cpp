//ʱ�䣺2019��6��13��16:07:46
//��д��һ��ĺ��������ʹ��һ���±��replace

#include <iostream>
#include <string>

void replace_string(std::string &s, const std::string &oldVal, const std::string &newVal)
{
    int p = 0;
    while ((p = s.find(oldVal,p)) != std::string::npos)     //��s�в���oldVal
    {
        s.replace(p, oldVal.size(), newVal);     //���ҵ����Ӵ��滻ΪnewVal������
        p += newVal.size();      //�±�������²�������֮��
    }
}

int main()
{
    std::string s = "tho thru tho!";
    replace_string(s, "thru", "through");
    std::cout << s << std::endl;

    replace_string(s, "tho", "though");
    std::cout << s << std::endl;

    replace_string(s, "through", "");
    std::cout << s << std::endl;
}


