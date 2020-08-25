//ʱ�䣺2019��6��18��20:36:21
//����һ��map,�ؼ����Ǽ�ͥ���գ�ֵ��һ��vector,������к����ǵ�������д���룬ʵ������µļ�ͥ�Լ������м�ͥ������µĺ���

#include <iostream>
#include <vector>
#include <map>

void add_family(std::map<std::string, std::vector<std::string>> &families, const std::string &family)
{
    if (families.find(family) == families.end())        //�ȼ���Ƿ����������ͥ
        families[family] = std::vector<std::string>();  //���û�������ͥ������һ���յ�vector<string>����ʾ�����ͥ�ĺ��������б� std::vector<std::string>()�����Բ�д���Ҳ��һ��
}

void add_child(std::map<std::string, std::vector<std::string>> &families, const std::string &family, const std::string &child)
{
    families[family].push_back(child);    //families[family]ȡ���ü�ͥ��vectorȻ�����
}

int main()
{
    std::map<std::string, std::vector<std::string>> families;

    add_family(families, "��");
    add_child(families, "��", "��");
    add_child(families, "��", "ǿ");
    add_child(families, "��", "΢");
    //add_family(families, "��");        //���Բ�������ͥ��������ᵼ�����м�ͥ�ĺ���������գ���Ϊ��������������һ����vector
    //add_family(families, "��");


    for (const auto &f : families)
    {
        std::cout << f.first << "�ҵĺ��ӣ�";
        for (const auto &c : f.second)
        {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

//��������˼·��add_family�ĺ������ڲ�ֻ��Ҫһ��       families[family];
//���ü�ͥ�Ѵ���ʱ�������ֻ�ǻ�ȡ��vector�����ᵼ��vector���κα仯�����ü�ͥ�����ڣ���׼��map��ʵ�ֻ���ʱ��������Ϊ�ùؼ��ִ���һ�����󣬽���Ĭ�ϳ�ʼ����������һ����vector��if�汾��Ч����ȫһ��
//��Ҳ��add_child����Ҫ����ͥ�Ƿ���ڵ�ԭ�򣬵���ͥ����ʱ�������ӵ�����׷�ӵ�����vector��ĩβ������ͥ�����ڣ���׼����ȴ���һ���µ�vecotr��Ȼ�����ǵĳ��򽫺�����ӽ�ȥ
