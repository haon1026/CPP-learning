//时间：2019年6月12日23:52:41
//如果再上一题的程序读入了256个词，在resize之后容器的capacity可能是多少？

#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> svec;
    svec.reserve(1024);
    std::string word;

    //while (std::cin >> word)
        //svec.push_back(word);
    svec.assign(1000, "a");
    svec.resize(svec.size() + svec.size() / 2);

    std::cout << "空间：" << svec.capacity() << "元素：" << svec.size();
    return 0;
}
