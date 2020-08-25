//ʱ�䣺2019��6��11��11:26:35
//����iv��һ��int��vector,����ĳ������ʲô���󣿽�����޸�

/*
    vector<int>::iterator iter = iv.begin(),
                          mid  = iv.begin() + iv.size() / 2;     //ָ������Ԫ�صĵ�����

    while (iter != mid)               //
        if (*iter == some_val)
           iv.insert(iter, 2 * some_val);       //�����������ʹ���е�����ʧЧ��iter��mid����ʧЧ
                                                //δ��iter���е�����iter�޷����е��ƽ�
                                                //���������һ��Ԫ�أ����������iter++���ܽ�iter�ƽ���ԭ��Ԫ��֮���λ��
                                                //���Ԫ�غ�ԭ�ȵ�����Ԫ��λ�ñ��ˣ���������
*/

#include <iostream>
#include <vector>
/*
int main()
{
    std::vector<int> iv = {1, 1, 2, 1};    //int��vector
    int some_val = 1;

    std::vector<int>::iterator iter = iv.begin();
    int org_size = iv.size() / 2, new_ele = 0;    //��¼ԭ��С������Ԫ�ص�λ�ú���Ԫ�ظ���

    //ÿ��ѭ���������¼���"mid"����֤��ȷָ��ivԭ����Ԫ��
    while (iter != iv.begin() + org_size + new_ele)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);   //iterָ����Ԫ��
            new_ele++;
            ++iter; ++iter;     //iter += 2;      //��iter�ƽ�����Ԫ�ص���һ��λ��
        }
        else
            ++iter;     //���ƽ�iter
    }

    //��begin()��ȡvector��Ԫ�ص�����������vector�е�����Ԫ��
    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
*/
//���ڳ������ͼʹ���ivԭ����ǰһ��Ԫ�أ�Ҳ����˵��ѭ������ʹԤ�ȿ�֪�ġ���ˣ�����ͨ�����ѭ������������ѭ��ִ�д�������Ҫ��
//�Ƚϡ���ǰ���������͡�������������ķ�ʽ��һЩ

int main()
{
    std::vector<int> iv = {1, 1, 1, 1, 1};    //int��vector
    int some_val = 1;

    std::vector<int>::iterator iter = iv.begin();
    int org_size = iv.size(), i = 0;          //ԭ��С

    //��ѭ����������ѭ������
    while (i <= org_size / 2)
    {
        if (*iter == some_val)
        {
            iter = iv.insert(iter, 2 * some_val);     //iterָ����Ԫ��
            ++iter;++iter;         //��iter�ƽ�����Ԫ�ص���һ��λ��
        }
        else
           ++iter;        //���ƽ�iter
        ++i;
    }

    //��begin()��ȡvector��Ԫ�ص�����������vector�е�����Ԫ��
    for (auto iter = iv.begin(); iter != iv.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
