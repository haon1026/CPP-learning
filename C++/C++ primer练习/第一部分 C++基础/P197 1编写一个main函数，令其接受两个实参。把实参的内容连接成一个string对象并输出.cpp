//ʱ�䣺2019��5��28��12:03:54
//��дһ��main�����������������ʵ�Σ���ʵ�ε��������ӳ�һ��string�������

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;
    for (int i = 0; i != argc; ++i)
        str += argv[i];
    std::cout << str << std::endl;

    return 0;
}
