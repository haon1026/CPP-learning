//时间：2019年6月29日19:35:06
//定义StrBlob的类值版本，添加拷贝构造函数和拷贝赋值运算符

#include <iostream>

using namespace std;

#include "my_StrBlob4.h"

int main()
{
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << "b2的大小为" << b2.size() << endl;
        cout << "b2首尾元素为" << b2.front() << " " << b2.back() << endl;
    }
    cout << "b1的大小为" << b1.size() << endl;
    cout << "b1首尾元素为" << b1.front() << " " << b1.back() << endl;

    StrBlob b3 = b1;
    b3.push_back("next");
    cout << "b3的大小为" << b3.size() << endl;
    cout << "b3首尾元素为" << b3.front() << " " << b3.back() << endl;

    cout << "b1全部元素：" << endl;
    for (auto it = b1.begin(); neq(it, b1.end()); it.incr())
        cout << it.deref() << endl;

    return 0;
}
