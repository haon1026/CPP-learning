//ʱ�䣺2019��7��12��14:50:29
//��ģ��
//��д����ģ���ջ

#include <iostream>
#include <string>

template <class T>
class Stack
{
public:
    Stack(unsigned int size = 100);

    ~Stack();

    void push(T value);    //ѹջ
    T pop();               //��ջ

private:
    unsigned int size;    //��С
    unsigned int sp;      //λ��
    T *data;             //ָ��T���͵�ָ��
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
    data[sp++] = value;    //��ǰλ�ø�һ��ֵ��Ȼ��λ�ü�spһ����ʱsp��һ��δ����ֵ��λ��
}

template <class T>
T Stack<T>::pop()
{
    return data[--sp];   //��ǰλ��sp��һ��Ȼ������λ�õ�Ԫ�����
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
