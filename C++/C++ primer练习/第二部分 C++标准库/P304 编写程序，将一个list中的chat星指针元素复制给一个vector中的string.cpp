//ʱ�䣺2019��6��10��16:34:42
//��д���򣬽�һ��list�е�char *ָ�루ָ��C����ַ�����Ԫ�ظ�ֵ��һ��vector�е�string

#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::list<char *> slist = {"hello", "world", "!"};
    std::vector<std::string> svec;

    svec.assign(slist.begin(), slist.end());

    std::cout << svec.capacity() << " " << svec.size() << " "
              << svec[0] << " " << svec[svec.size() - 1] << std::endl;

    return 0;
}
