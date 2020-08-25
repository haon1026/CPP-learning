//ʱ�䣺2019��3��20��19:36:27
//�鷽��

#include <iostream>
#include <string>

class Pet
{
public:
    Pet(std::string theName);

    void eat();
    virtual void play();      //���벻��virtual
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

void Pet::play()
{
    std::cout << name << "����\n";
}

Cat::Cat(std::string theName) : Pet(theName)
{
}

void Cat::play()
{
    Pet::play();
    std::cout << name << "����Ƥ��\n";
}

Dog::Dog(std::string theName) : Pet(theName)
{
}

void Dog::play()
{
    Pet::play();
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
