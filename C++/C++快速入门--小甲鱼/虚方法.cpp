//时间：2019年3月20日19:36:27
//虚方法

#include <iostream>
#include <string>

class Pet
{
public:
    Pet(std::string theName);

    void eat();
    virtual void play();      //加与不加virtual
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
    std::cout << name << "在吃东西\n";
}

void Pet::play()
{
    std::cout << name << "在玩\n";
}

Cat::Cat(std::string theName) : Pet(theName)
{
}

void Cat::play()
{
    Pet::play();
    std::cout << name << "在玩皮球\n";
}

Dog::Dog(std::string theName) : Pet(theName)
{
}

void Dog::play()
{
    Pet::play();
    std::cout << name << "在追猫\n";
}

int main()
{
    Pet * cat = new Cat("小猫");     //不加virtual的话默认以类的play函数运行，new是在实际运行中才分配内存的。
    Pet * dog = new Dog("小狗");

    cat->eat();
    cat->play();
    dog->eat();
    dog->play();
    delete cat;
    delete dog;

    return 0;
}
