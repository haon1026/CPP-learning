//ʱ�䣺2019��7��11��14:44:57
//��̳�

#include <iostream>

class Person
{
public:
    Person(std::string theName) : name(theName) {}

    void introduce() {std::cout << "��Һã�����" << name << ",";}

protected:
    std::string name;
};

class Teacher : public Person
{
public:
    Teacher(std::string theName, std::string teachclass) : Person(theName), classes(teachclass) {}

    void teach() {std::cout << name << "��" << classes << std::endl;}
    void introduce() {std::cout << "��Һã�����" << name << "���ҽ�" << classes << std::endl;}

protected:
    std::string classes;
};

class Student : public Person
{
public:
    Student(std::string theName, std::string attendclass) : Person(theName), classes(attendclass) {}

    void attend() {std::cout << name << "����" << classes << "ѧϰ" << std::endl;}
    void introduce() {std::cout << "��Һã�����" << name << "������" << classes  << "ѧϰ"<< std::endl;}

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
    std::cout << "��Һã�����" << Student::name << ",�ҽ�" << Teacher::classes << ",ͬʱ����" << Student::classes << "ѧϰ" << std::endl;
}


int main()
{
    Teacher T("����", "������");
    Student S("С��", "������");
    TeachingStudent TS("����", "������", "��߰�");

    T.introduce();
    T.teach();
    S.introduce();
    S.attend();
    TS.introduce();
    TS.teach();
    TS.attend();


    return 0;
}
