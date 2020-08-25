//时间：2019年6月12日23:05:20
//vector对象是如何增长的

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec;
    //size应该为0；capacity的值依赖于具体实现
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //向ivec添加24个元素
    for (std::vector<int>::size_type ix = 0; ix != 24; ++ix)
        ivec.push_back(ix);
    //size应该为24；capacity应该大于等于24，具体值依赖于标准库实现
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //预分配一些额外空间
    ivec.reserve(50);     //将capacity至少设定为50，可能会更大
    //size应该为24；capacity应该大于等于50，具体值依赖于标准库实现
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //添加元素用光这些预留空间
    while (ivec.size() != ivec.capacity())
        ivec.push_back(0);
    //capacity应该未改变，size和capacity相等
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    ivec.push_back(42);  //再添加一个元素
    //size应该为51；capacity应该大于等于51，具体值依赖于标准库实现
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    ivec.shrink_to_fit();  //要求归还内存            //shrink_to_fit只是一个请求，标准库并不保证退还内存
    //size应该未改变；capacity的值依赖于具体实现
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;

    //9.40测试
    std::cout << std::endl;
    ivec.reserve(1024);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;
    ivec.assign(256, 1);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;
    ivec.resize(256);
    std::cout << " ivec:size: " << ivec.size()
              << " capacity: " << ivec.capacity() << std::endl;


    return 0;
}
