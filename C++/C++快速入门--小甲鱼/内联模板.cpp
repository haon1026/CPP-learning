//ʱ�䣺2019��7��12��15:20:18
//��ģ��
//����ģ������������ģ���ջ

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

    void push(T value)    //ѹջ
    {
        data[sp++] = value;    //û�п���ջ�������
    }

    T pop()             //��ջ
    {
        return data[--sp];   //û�п���ջ�յ����
    }

private:
    unsigned int size;    //��С
    unsigned int sp;      //λ��
    T *data;             //ָ��T���͵�ָ��
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
���ģ����Ҫһ�����ϵ����ͣ����ݾ��������ʹ�ü���ռλ������
template <class T, class U>
class MyClass
{
   ....
}

ʵ������MyClass<int, float> myClass;

*/
