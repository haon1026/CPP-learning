//时间:2019年3月15日21:50:50
//继承机制中的构造器

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
};

class Turtle : public Animal
{
public:
    Turtle(std::string theName);
    void swim();
};

Animal::Animal(std::string theName)
{
    name = theName;
    std::cout << "调用基类构造器\n";
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
    std::cout << "我正在流口水" << std::endl;
}

Pig::Pig(std::string theName) : Animal(theName)
{
    std::cout << "调用Pig子类构造器\n";
}

void Pig::climb()
{
    std::cout << "我会上树" << std::endl;
}

Turtle::Turtle(std::string theName) : Animal(theName)
{
    std::cout << "调用Turtle子类构造器\n";
}

void Turtle::swim()
{
    std::cout << "我会游泳" << std::endl;
}

int main()
{
    Pig pig("小猪");
    Turtle turtle("小乌龟");

    std::cout << "Pig:" << pig.name << std::endl;
    std::cout << "Turtle:" << turtle.name << std::endl;

    pig.eat();
    turtle.eat();
    pig.climb();
    turtle.swim();

    return 0;
}
