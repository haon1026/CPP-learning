//ʱ�䣺2019��5��13��11:43:23
//��һ����Ϊtext���ַ�����������ı��ļ��е����ݣ����е�Ԫ�ػ�����һ�仰������һ������
//��ʾ����ָ����ַ��������text�е�һ�ε�����

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> v = {"Welcome to China", ",", " "};
/*
    //�����һ��
    for (auto it = v.cbegin(); it != v.cend() && !it->empty(); it++)      //it->mem��(*it).mem��˼��ͬ
        std::cout << *it;                                                 //ѭ����ͷ��βֻ���ж�ȡ��������д�룬����ʹ��cbegin��cend
*/
    //��һ��ȫ����Ϊ��д
    //���õ���������ȫ���ַ���,�����մ�ֹͣѭ��
    for (auto it2 = v.begin(); it2 != v.end() && !it2->empty(); ++it2)          //������isspace(*it2)��isspace����Ե����ַ���
    {
        //���õ�����������ǰ�ַ���
        for (auto &it3 : *it2)
            it3 = toupper(it3);
        std::cout << *it2;
    }

    return 0;
}
