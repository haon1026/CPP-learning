//时间：2019年6月12日23:33:42
//编写程序，探究再你的标准库实现中，vector是如何增长的

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vi;
    int s, c;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "空间：" << vi.capacity() << "元素数：" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "空间：" << vi.capacity() << "元素数：" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "空间：" << vi.capacity() << "元素数：" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "空间：" << vi.capacity() << "元素数：" << vi.size() << std::endl;

    for (s = vi.size(), c = vi.capacity(); s <= c; s++)
        vi.push_back(1);
    std::cout << "空间：" << vi.capacity() << "元素数：" << vi.size() << std::endl;

    return 0;
}
//结果说明该编译器是成倍增长vector空间的
