//时间：2019年6月23日12:09:37
//定义你自己版本的StrBlobPtr,更新StrBlob类，加入恰当的friend声明及begin和end成员


//主程序
#include <iostream>
#include <my_StrBlob2.h>

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

    for (auto it = b1.begin(); neq(it, b1.end()); it.incr())
        std::cout << it.deref() << std::endl;

    return 0;
}
