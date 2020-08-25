//时间：2019年7月12日15:20:18
//类模板
//内联模板改善上题基于模板的栈

#include <iostream>
#include <string>

template <class T>
class Stack
{
public:
    Stack(unsigned int size = 100)
    {
        this->size = size;
        data = new T[size];
        sp = 0;
    }
    ~Stack()
    {
        delete [] data;
    }

    void push(T value)    //压栈
    {
        data[sp++] = value;    //没有考虑栈满的情况
    }

    T pop()             //出栈
    {
        return data[--sp];   //没有考虑栈空的情况
    }

private:
    unsigned int size;    //大小
    unsigned int sp;      //位置
    T *data;             //指向T类型的指针
};

int main()
{
    Stack<int> intStack(100);

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << intStack.pop() << "\n";
    std::cout << intStack.pop() << "\n";
    std::cout << intStack.pop() << "\n";
}


/*
如果模板需要一种以上的类型，根据具体情况多使用几个占位符即可
template <class T, class U>
class MyClass
{
   ....
}

实例化：MyClass<int, float> myClass;

*/
