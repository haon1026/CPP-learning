//ʱ��:2019��3��13��23:00:44
//��ļ̳�
#include <iostream>
#include <string>

class Animal
{
public:
    std::string mouth;

    void sleep();
    void eat();
    void drool();
};

class Pig : public Animal
{
public:
    void climb();
};

class Turtle : public Animal
{
public:
    void swim();
};

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

void Pig::climb()
{
    std::cout << "�һ�����" << std::endl;
}

void Turtle::swim()
{
    std::cout << "�һ���Ӿ" << std::endl;
}

int main()
{
    Pig pig;
    Turtle turtle;

    pig.eat();
    turtle.eat();
    pig.climb();
    turtle.swim();

    return 0;
}
