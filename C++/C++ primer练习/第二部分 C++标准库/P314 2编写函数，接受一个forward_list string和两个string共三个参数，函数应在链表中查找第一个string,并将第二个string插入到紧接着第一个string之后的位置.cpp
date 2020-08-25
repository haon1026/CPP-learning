//ʱ�䣺2019��6��12��13:30:29
//��д����������һ��forward_list string������string����������������Ӧ�������в��ҵ�һ��string,�����ڶ���string
//���뵽�����ŵ�һ��string֮���λ�á�����һ��stringδ�������򽫵ڶ���string���뵽����ĩβ

#include <iostream>
#include <forward_list>
#include <string>

void func(std::forward_list<std::string> &flist, const std::string &str1, const std::string &str2)
{
    auto prev = flist.before_begin();        //ǰ��Ԫ��
    auto curr = flist.begin();               //��ǰԪ��
    bool inserted = false;

    while (curr != flist.end())
    {
        if (*curr == str1)                     //�ҵ������ַ���
        {
            curr = flist.insert_after(curr, str2);    //�������ַ�����currָ����
            //break;      //ÿ��һ����ͬ�ַ���str1��Ҫ���str2������Ҫȫ������һ�飬������;�˳�
            inserted = true;
        }

        prev = curr;         //ǰ����������ǰ�ƽ�              //else{prev = curr; ++curr;}Ҳ�ɵõ�ͬ���Ľ����˼��???
        ++curr;              //��ǰ��������ǰ�ƽ�
    }
    if(!inserted)
        flist.insert_after(prev, str2);

    return;
}

int main()
{
    std::forward_list<std::string> flist = {"Welcome", "to", "China", "nice", "to", "meet", "you"};


    func(flist, "Welcome", "���");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    func(flist, "to", "��");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    func(flist, "great", "�ټ�");
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
