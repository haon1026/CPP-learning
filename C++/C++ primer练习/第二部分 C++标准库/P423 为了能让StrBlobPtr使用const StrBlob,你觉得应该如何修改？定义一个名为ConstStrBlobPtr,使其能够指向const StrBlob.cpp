//时间：2019年6月24日12:55:55
//为了能让StrBlobPtr使用const StrBlob,你觉得应该如何修改？定义一个名为ConstStrBlobPtr,使其能够指向const StrBlob

#include <iostream>
#include "my_StrBlob3.h"

int main()
{
    const StrBlob b = {"Hello", "World", "!"};

    for (auto iter = b.begin(); neq(iter, b.end()); iter.incr())
        std::cout << iter.deref() << std::endl;

    return 0;
}
