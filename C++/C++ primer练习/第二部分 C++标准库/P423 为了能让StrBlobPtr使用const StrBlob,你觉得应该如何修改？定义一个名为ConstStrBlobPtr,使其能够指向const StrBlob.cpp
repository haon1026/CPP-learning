//ʱ�䣺2019��6��24��12:55:55
//Ϊ������StrBlobPtrʹ��const StrBlob,�����Ӧ������޸ģ�����һ����ΪConstStrBlobPtr,ʹ���ܹ�ָ��const StrBlob

#include <iostream>
#include "my_StrBlob3.h"

int main()
{
    const StrBlob b = {"Hello", "World", "!"};

    for (auto iter = b.begin(); neq(iter, b.end()); iter.incr())
        std::cout << iter.deref() << std::endl;

    return 0;
}
