//ʱ�䣺2019��6��24��11:46:06
//��д�������ж���һ�������ļ��������ݴ���һ��StrBlob�У���һ��StrBlobPtr��ӡ��StrBlob�е�ÿ��Ԫ��

#include <iostream>
#include <fstream>
#include "my_StrBlob2.h"

int main(int argc, char *argv[])
{
    ifstream in(argv[1]);
    if (!in)
    {
        std::cout << "�����ļ��򿪴���" << std::endl;
        return -1;
    }

    StrBlob b1;
    std::string s;
    while (getline(in, s))
    {
        b1.push_back(s);
    }

    for (auto iter = b1.begin(); neq(iter, b1.end()); iter.incr())
    {
        std::cout << iter.deref() << std::endl;
    }

    return 0;
}
