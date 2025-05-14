#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
        int num;

    Student(){} // parameter 안주고 생성하기

    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    Student(std::string name, int age, double gpa, int num){ // 원래 있던거에서 num 추가
        this->name = name;
        this->age = age;
        this->gpa = gpa;
        this->num = num;
    }
};

int main()
{
    Student student1("Spongebob", 25, 3.2);
    return 0;
}