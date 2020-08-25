//时间：2019年7月11日14:44:57
//多继承

#include <iostream>

class Person
{
public:
    Person(std::string theName) : name(theName) {}

    void introduce() {std::cout << "大家好，我是" << name << ",";}

protected:
    std::string name;
};

class Teacher : public Person
{
public:
    Teacher(std::string theName, std::string teachclass) : Person(theName), classes(teachclass) {}

    void teach() {std::cout << name << "教" << classes << std::endl;}
    void introduce() {std::cout << "大家好，我是" << name << "，我教" << classes << std::endl;}

protected:
    std::string classes;
};

class Student : public Person
{
public:
    Student(std::string theName, std::string attendclass) : Person(theName), classes(attendclass) {}

    void attend() {std::cout << name << "加入" << classes << "学习" << std::endl;}
    void introduce() {std::cout << "大家好，我是" << name << "，我在" << classes  << "学习"<< std::endl;}

protected:
    std::string classes;
};

class TeachingStudent : public Teacher, public Student
{
public:
    TeachingStudent(std::string theName, std::string teachclass, std::string attendclass) : Teacher(theName, teachclass), Student(theName, attendclass) {}

    void introduce();
};

void TeachingStudent::introduce()
{
    std::cout << "大家好，我是" << Student::name << ",我教" << Teacher::classes << ",同时我在" << Student::classes << "学习" << std::endl;
}


int main()
{
    Teacher T("张三", "基础班");
    Student S("小王", "基础班");
    TeachingStudent TS("王五", "基础班", "提高班");

    T.introduce();
    T.teach();
    S.introduce();
    S.attend();
    TS.introduce();
    TS.teach();
    TS.attend();


    return 0;
}
