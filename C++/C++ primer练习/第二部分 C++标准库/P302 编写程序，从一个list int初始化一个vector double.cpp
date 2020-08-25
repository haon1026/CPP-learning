//时间：2019年6月10日15:26:24
//编写程序从一个;ist<int>初始化一个vector<double>,从一个vector<int>初始化一个vector<double>

#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::list<int> ilist = {1, 2, 3, 4, 5, 6, 7};
    std::vector<int> ivec = {7, 6, 5, 4, 3, 2, 1};

    //容器类型不同，不能使用拷贝初始化
    //std::vector<double> dvec(ilist);

    //元素类型相容，因此可采用范围初始化
    std::vector<double> devc(ilist.begin(), ilist.end());

    //容器类型不同，不能使用拷贝初始化
    //std::vector<double> devc(ivec);

    //元素类型相容，因此可采用范围初始化
    std::vector<double> devc1(ivec.begin(), ivec.end());

    std::cout << devc.capacity() << " " << devc.size() << " "
              << devc[0] << " " << devc[devc.size() - 1] << std::endl;

    std::cout << devc1.capacity() << " " << devc1.size() << " "
              << devc1[0] << " " << devc1[devc1.size() - 1] << std::endl;

    return 0;
}

//size是指容器当前拥有元素的个数
//apacity是指容器在必须分配新的存储空间之前可以存放的元素总数
//如vector<int> ivec(10),   此时ivec.capacity() = 10, ivec.size() = 10;
//插入元素只要不超过10个。apacity都不变，超过10个，插入11个的话，容器重新分配存储空间capacity = 20，size = 11
//容器重新分配空间的话是按现有空间的2倍进行分配，以保证vector的效率
