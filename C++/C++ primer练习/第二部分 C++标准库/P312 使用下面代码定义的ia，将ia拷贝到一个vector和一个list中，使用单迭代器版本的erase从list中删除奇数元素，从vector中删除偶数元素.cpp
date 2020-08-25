//ʱ�䣺2019��6��12��11:45:08
//ʹ��������붨���ia����ia������һ��vector��һ��list�У�ʹ�õ��������汾��erase��list��ɾ������Ԫ�أ���vector��ɾ��ż��Ԫ��
// int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

#include <iostream>
#include <vector>
#include <list>

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> ivec;
    std::list<int> ilist;

    for (auto ele : ia)             //ivec.assign(ia, ia + 11);   //�����ݿ�����vector
    {                               //ilist.assign(ia, ia + 11);  //������Դ������list
        ivec.push_back(ele);
        ilist.push_back(ele);
    }
    std::cout << "vector��Ԫ���У�";
    for (auto ele : ivec)
        std::cout << ele << " ";
    std::cout << std::endl;

    std::cout << "list��Ԫ���У�";
    for (auto ele : ilist)
        std::cout << ele << " ";
    std::cout << std::endl;

    //ʹ��while(iter != ivec,end()))
    for (auto iter = ivec.begin(); iter != ivec.end();)
    {
        if (*iter % 2 == 0)  //if(!(*iter & 1))   //ż��Ԫ��
            iter = ivec.erase(iter);              //ɾ��ż��Ԫ�أ�������һλ�õ�����
        else
            ++iter;                               //�ƽ�����һλ��
    }


    for (auto iter1 = ilist.begin(); iter1 != ilist.end();)
    {
        if (*iter1 % 2 == 1)                      //����
            iter1 = ilist.erase(iter1);           //ɾ������Ԫ�أ�������һλ�õ�����
        else
            ++iter1;                              //�ƽ�����һλ��
    }
    std::cout << "vector������Ԫ���У�";
    for (auto ele : ivec)
        std::cout << ele << " ";
    std::cout << std::endl;

    std::cout << "list��ż��Ԫ���У�";
    for (auto ele : ilist)
        std::cout << ele << " ";
    std::cout << std::endl;

    return 0;
}
