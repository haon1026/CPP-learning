//ʱ�䣺2019��5��30��12:40:00
//ʹ��NDEBUG��д�������Դ���

#include <iostream>
#include <vector>
//#define NDEBUG

//�ݹ麯�����vector<int>������
void print(std::vector<int> vInt, unsigned index)
{
    unsigned sz = vInt.size();
    //�����ڴ˴����������Ϣ
    #ifndef NDEBUG
    std::cout << "vector����Ĵ�С�ǣ�" << sz << std::endl;
    #endif      //NDEBUG
    if (!vInt.empty() && index < sz)
    {
        std::cout << vInt[index] << std::endl;
        print(vInt, index + 1);
    }
}

int main()
{
    std::vector<int> v = {1,3,5,7,9,11,13,15};
    print(v, 0);

    return 0;
}
