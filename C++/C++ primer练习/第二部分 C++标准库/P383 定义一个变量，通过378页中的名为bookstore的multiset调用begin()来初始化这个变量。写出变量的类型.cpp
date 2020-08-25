//时间：2019年6月19日13:05:32
//定义一个变量，通过378页中的名为bookstore的multiset调用begin()来初始化这个变量。写出变量的类型

typedef bool (*pf)(const Sales_data &, const Sales_data &);
//定义了一个函数指针类型的别名， 函数指针指向一个返回值为bool类型的并且接受两个const Sales_item&类型的量作为参数的函数
//  pf pa； 等价于 bool(*pa)(const Sales_data &, const Sales_data &)

multiset<Sales_data, pf> bookstore(compareIsbn);
....
pair<const Sales_data, pf>::iterator it = bookstore.begin();
