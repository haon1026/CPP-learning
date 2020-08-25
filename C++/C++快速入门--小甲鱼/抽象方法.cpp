//ʱ�䣺2019��3��21��22:33:27
//���󷽷�/���麯��

#include <iostream>
#include <string>

class Pet
{
public:
    Pet(std::string theName);

    void eat();
    virtual void play() = 0;    //������û�о���ʵ�֣�ֻ�ڼ̳е������ʵ��
protected:
    std::string name;
};

class Cat : public Pet
{
public:
    Cat(std::string theName);
    void play();
};

class Dog : public Pet
{
public:
    Dog(std::string theName);
    void play();
};

Pet::Pet(std::string theName)
{
    name = theName;
}

void Pet::eat()
{
    std::cout << name << "�ڳԶ���\n";
}

Cat::Cat(std::string theName) : Pet(theName)
{
}

void Cat::play()
{
    std::cout << name << "����Ƥ��\n";
}

Dog::Dog(std::string theName) : Pet(theName)
{
}

void Dog::play()
{
    std::cout << name << "��׷è\n";
}

int main()
{
    Pet * cat = new Cat("Сè");     //����virtual�Ļ�Ĭ�������play�������У�new����ʵ�������вŷ����ڴ�ġ�
    Pet * dog = new Dog("С��");

    cat->eat();
    cat->play();
    dog->eat();
    dog->play();
    delete cat;
    delete dog;

    return 0;
}
