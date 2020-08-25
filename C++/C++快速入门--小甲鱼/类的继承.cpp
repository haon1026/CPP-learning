//时间:2019年3月13日23:00:44
//类的继承
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
    std::cout << "我正在流口水" << std::endl;
}

void Pig::climb()
{
    std::cout << "我会上树" << std::endl;
}

void Turtle::swim()
{
    std::cout << "我会游泳" << std::endl;
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
