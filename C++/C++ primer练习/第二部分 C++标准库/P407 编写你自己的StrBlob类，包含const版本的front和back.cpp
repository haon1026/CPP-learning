//ʱ�䣺2019��6��21��10:55:44
//��д���Լ���StrBlob�࣬����const�汾��front��back
//StrBlobʹ�ó���

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
    //b3.push_back("about");   //����StrBlob�����ǲ�Ӧ�������޸Ĺ���vector�������ݵ�

    return 0;
}
