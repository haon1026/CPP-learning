//ʱ�䣺2019��5��12��11:45:31
//����ͳ�ʼ��vector����

#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    std::cout << "v7��Ԫ�ظ����ǣ�" << v7.size() <<std::endl;
    for(decltype(v7.size()) i = 0; i < v7.size(); ++i)    //v1-v7���и��Ĳ���
    {
        std::cout << v7[i] << std::endl;
    }


    return 0;
}
