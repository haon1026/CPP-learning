//时间：2019年6月3日14:06:47
//定义一对类X和Y，其中X包含一个指向Y的指针，而Y包含一个类型为X的对象

class Y;

class X
{
    Y *p;
};

class Y
{
    X obj;
};
