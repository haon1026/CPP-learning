//ʱ��:2019��3��18��21:43:37
//���ǣ������������������������Ȼ���дʵ�ִ���

#include <iostream>
#include <string>

class Animal
{
public:
    std::string mouth;
    std::string name;

    Animal(std::string theName);

    void sleep();
    void eat();
    void drool();
};

class Pig : public Animal
{
public:
    Pig(std::string theName);
    void climb();
    void eat();   //ͬ���ǳԣ���ͬ�ĳԷ�
};

class Turtle : public Animal
{
public:
    Turtle(std::string theName);
    void swim();
    void eat();
};

Animal::Animal(std::string theName)
{
    name = theName;
    std::cout << "���û��๹����\n";
}

void Animal::eat()
{
    std::cout << "I'm eatting!" << std::endl;
}

void Animal::sleep()
{
    std::cout << "I'm sleeping!Don't disturb me!" << std::endl;
}

void Animal::drool()
{
    std::cout << "����������ˮ" << std::endl;
}

Pig::Pig(std::string theName) : Animal(theName)
{
    std::cout << "����Pig���๹����\n";
}

void Pig::climb()
{
    std::cout << "�һ�����" << std::endl;
}

void Pig::eat()
{
    Animal::eat();
    std::cout << name << "���ڳ���\n\n";
}

Turtle::Turtle(std::string theName) : Animal(theName)
{
    std::cout << "����Turtle���๹����\n";
}

void Turtle::swim()
{
    std::cout << "�һ���Ӿ" << std::endl;
}

void Turtle::eat()
{
    Animal::eat();
    std::cout << name << "���ڳ���\n\n";
}

int main()
{
    Pig pig("С��");
    Turtle turtle("С�ڹ�");

    std::cout << "Pig:" << pig.name << std::endl;
    std::cout << "Turtle:" << turtle.name << std::endl;

    pig.eat();
    turtle.eat();
    pig.climb();
    turtle.swim();

    return 0;
}
