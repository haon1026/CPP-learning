//ʱ�䣺2019��6��12��20:40:13
//��316ҳ��ɾ��ż��ֵԪ�ز���������ֵԪ�صĳ���������list��forward_list,��Ϊʲô���޸ĳ���ʹ֮Ҳ��������Щ����
//liet��forward_list������������һ����ͬ�ǣ���������֧�ּӼ����㣬����ԭ��������Ԫ�ز������ڴ��������洢������޷�ͨ��
//��ַ�ļӼ���Ԫ�ؼ�Զ�����ƶ�����ˣ�Ӧ��ε���++��ʵ����������ӷ���ͬ��Ч��

#include <iostream>
#include <list>
#include <forward_list>

//list
/*
int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = ilist.begin();

    while (iter != ilist.end())
    {
        if (*iter % 2)          //����
        {
            iter = ilist.insert(iter, *iter);   //���뵽��ǰԪ��֮ǰ
            ++iter;         //�ƶ�����һԪ��
            ++iter;
        }
        else
            iter = ilist.erase(iter);      //ɾ����ָ����һԪ��
    }

    for (auto iter = ilist.begin(); iter != ilist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
*/
//forward_list
int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto prev = flist.before_begin();   //ǰ���ڵ�
    auto curr = flist.begin();          //�׽ڵ�

    while (curr != flist.end())
    {
        if (*curr % 2)
        {
            curr = flist.insert_after(curr, *curr);       //���뵽��ǰԪ��֮��
            prev = curr;                                  //prev�ƶ����²���Ԫ��
            curr++;                                       //curr�ƶ�����һԪ��
            //curr = flist.insert_after(prev, *curr);     //���뵽��ǰԪ��֮ǰ
            //++curr;                                     //curr�ƶ���ԭ��Ԫ��
            //prev = curr;                                //prev�ƶ���ԭ��Ԫ��
            //++curr;                                     //curr�ƶ�����һԪ��
        }
        else
            curr = flist.erase_after(prev);      //ɾ����currָ����һԪ��
    }

    for (auto curr = flist.begin(); curr != flist.end(); ++curr)
        std::cout << *curr << " ";
    std::cout << std::endl;

    return 0;
}

