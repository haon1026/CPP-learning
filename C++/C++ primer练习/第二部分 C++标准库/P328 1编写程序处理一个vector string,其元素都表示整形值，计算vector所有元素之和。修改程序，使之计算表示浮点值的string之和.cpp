//ʱ�䣺2019��6��13��23:41:06
//��д������һ��vector string,��Ԫ�ض���ʾ����ֵ������vector����Ԫ��֮�͡�
//�޸ĳ���ʹ֮�����ʾ����ֵ��string֮��

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>


int main()
{
    std::vector<std::string> svec = {"123", "+456", "-789"};
    int sum = 0;
    for(auto iter = svec.begin(); iter != svec.end(); iter++)
    {
        sum += stoi(*iter);
    }
    std::cout << "vector����Ԫ��֮�ͣ�" << sum << std::endl;

    return 0;
}
