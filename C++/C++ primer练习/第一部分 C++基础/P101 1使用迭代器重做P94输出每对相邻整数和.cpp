//ʱ�䣺2019��5��13��17:57:56
//����һ������������������ĺ�

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v;
    std::cout << "������һ������:" << std::endl;
    int n;
    while (std::cin >> n)
        v.push_back(n);

    if(v.cbegin() == v.cend())
    {
        std::cout << "û���κ�Ԫ��" << std::endl;
        return -1;
    }
    else
    {
        std::cout << "���������ֱ���:" << std::endl;
        for (auto c : v)
            std::cout << c << " ";
        std::cout << std::endl;
        std::cout << "������������Լ��ͷֱ��ǣ�" << std::endl;
/*
        auto it = v.cbegin();
        if (v.size() %2 == 0)
            for (;it != v.end(); it+=2)
            {
                std::cout << *it << " + " << *(it+1) << " = " << *it + *(it+1) << std::endl;
            }
        else
        {
            for (;it != v.end() - 1; it+=2)
                std::cout << *it << " + " << *(it+1) << " = " << *it + *(it+1) << std::endl;
            std::cout << v[v.size()-1] << std::endl;      //�����������һ��Ԫ��
        }
*/

        for (auto it = v.cbegin(); it != v.cend() - 1 && it != v.cend(); ++it)      //��׼������ż�����������쳣������&& it!=v.cend()����
        {
            //����������ĺ�
            std::cout << (*it + *(++it)) << " ";
            //ÿ�����5������
            if ((it - v.cbegin() +1) % 10 == 0)
                std::cout << std::endl;
        }
        //���Ԫ�ظ����������������������һ��Ԫ��
        if (v.size() % 2 != 0)
            std::cout << *(v.cend() -1);

        return 0;
    }



}
