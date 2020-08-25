//时间:2019年3月18日21:43:37
//覆盖：在类里重新声明这个方法，然后改写实现代码

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
    void eat();   //同样是吃，不同的吃法
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

void Pig::eat()
{
    Animal::eat();
    std::cout << name << "正在吃肉\n\n";
}

Turtle::Turtle(std::string theName) : Animal(theName)
{
    std::cout << "调用Turtle子类构造器\n";
}

void Turtle::swim()
{
    std::cout << "我会游泳" << std::endl;
}

void Turtle::eat()
{
    Animal::eat();
    std::cout << name << "正在吃鱼\n\n";
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
