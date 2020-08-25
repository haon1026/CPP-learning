//ʱ�䣺2019��6��12��13:07:47
//��д���򣬲��Ҳ�ɾ��forwardlist<int>�е�����Ԫ��

#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto prev = flist.before_begin();   //ǰ��Ԫ��
    auto curr = flist.begin();          //��ǰԪ��

    while (curr != flist.end())
    {
        if (*curr % 2)                //����
            curr = flist.erase_after(prev);   //ɾ�����ƶ�����һԪ��
        else
        {
            prev = curr;
            ++curr;
        }
    }

    std::cout << "forward_list������ԭ���У�";
    for (auto iter = flist.begin(); iter != flist.end(); ++iter)
        std::cout << *iter << " ";
    std::cout << std::endl;

    return 0;
}
