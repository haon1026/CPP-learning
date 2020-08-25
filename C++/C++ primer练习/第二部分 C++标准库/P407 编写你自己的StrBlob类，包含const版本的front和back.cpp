//时间：2019年6月21日10:55:44
//编写你自己的StrBlob类，包含const版本的front和back
//StrBlob使用程序

#include <iostream>
#include <my_StrBlob.h>

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        std::cout << b2.size() << std::endl;
    }
    std::cout << b1.size() << std::endl;
    std::cout << b1.front() << " " << b1.back() << std::endl;

    const StrBlob b3 = b1;
    std::cout << b3.front() << " " << b3.back() << std::endl;
    //b3.push_back("about");   //常量StrBlob对象是不应被允许修改共享vector对象内容的

    return 0;
}
