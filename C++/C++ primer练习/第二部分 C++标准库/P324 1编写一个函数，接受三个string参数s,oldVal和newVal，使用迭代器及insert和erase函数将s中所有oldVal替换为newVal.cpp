//ʱ�䣺2019��6��13��13:37:52
//��дһ����������������string����s,oldVal��newVal��ʹ�õ�������insert��erase������s������oldVal�滻ΪnewVal��
//������ĳ��������滻ͨ�õļ�д��ʽ���磬����tho���滻Ϊ��though��������thru���滻Ϊ��through��

#include <iostream>
#include <string>

void func(std::string &s, const std::string &oldVal, const std::string &newVal)
{
    auto l = oldVal.size();
    if (!l)                     //Ҫ���ҵ��ַ���Ϊ��
        return;

    auto iter = s.begin();
    while (iter <= s.end()-1)    //ĩβ����oldVal���ȵĲ���������
    {
        auto iter1 = iter;
        auto iter2 = oldVal.begin();
        //s��iter��ʼ���Ӵ�����ÿ���ַ�����oldVal��ͬ
        while (iter2 != oldVal.end() && *iter1 == *iter2)
        {
            iter1++;
            iter2++;
        }
        if (iter2 == oldVal.end())     //oldVal�ľ�---�ַ������
        {
            iter = s.erase(iter, iter1);  //ɾ��s����oldVal��Ȳ���
            if (newVal.size())         //�滻�Ӵ��Ƿ�Ϊ��
            {
                iter2 = newVal.end();  //�ɺ���ǰ�������newVal�е��ַ�
                do
                {
                    iter2--;
                    iter = s.insert(iter, *iter2);
                }while (iter2 > newVal.begin());
            }
            iter += newVal.size();      //�������ƶ����²�������֮��
        }
        else
            iter++;
    }
}

int main()
{
    std::string s = {"tho thru tho��"};
    func(s, "thru", "through");
    std::cout << s << std::endl;

    func(s, "tho", "though");
    std::cout << s << std::endl;

    func(s, "through", "");
    std::cout << s << std::endl;

    return 0;
}
