//ʱ�䣺2019��5��14��16:26:57
//��������

#include <iostream>
#include <vector>

int main()

{
    int a1[10], a2[10];

    for (int j = 0; j < 10; ++j)
        a1[j] = j;
    for (int i = 0; i < 10; ++i)
    {
        a2[i] = a1[i];
        std::cout << a2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
{
     const int sz = 10;  //����sz��Ϊvectorz������
     std::vector<int> v1, v2;
     //ͨ��forѭ��Ϊvector�����Ԫ�ظ�ֵ
     for (int i = 0; i < sz; i++)
        v1.push_back(i);
     for (int j = 0; j < sz; j++)
        v2.push_back(j);
     //ͨ����Χforѭ�����vector�����ȫ��Ԫ��
     for (auto val : v2)
        std::cout << val << " ";
     std::cout << std::endl;

     return 0;
}
*/
