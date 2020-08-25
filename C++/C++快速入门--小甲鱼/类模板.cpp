//时间：2019年7月12日14:50:29
//类模板
//编写基于模板的栈

#include <iostream>
#include <string>

template <class T>
class Stack
{
public:
    Stack(unsigned int size = 100);

    ~Stack();

    void push(T value);    //压栈
    T pop();               //出栈

private:
    unsigned int size;    //大小
    unsigned int sp;      //位置
    T *data;             //指向T类型的指针
};

template <class T>
Stack<T>::Stack(unsigned int size)
{
    this->size = size;
    data = new T[size];
    sp = 0;
}

template <class T>
Stack<T>::~Stack()
{
    delete [] data;
}

template <class T>
void Stack<T>::push(T value)
{
    data[sp++] = value;    //当前位置赋一个值，然后位置加sp一，此时sp是一个未被赋值的位置
}

template <class T>
T Stack<T>::pop()
{
    return data[--sp];   //当前位置sp减一，然后所在位置的元素输出
}

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
