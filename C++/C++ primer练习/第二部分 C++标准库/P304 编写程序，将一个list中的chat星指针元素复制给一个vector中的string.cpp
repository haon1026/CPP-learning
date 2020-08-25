//时间：2019年6月10日16:34:42
//编写程序，将一个list中的char *指针（指向C风格字符串）元素赋值给一个vector中的string

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
