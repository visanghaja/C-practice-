#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating!\n";
    }

};

class Dog : public Animal{ // : 로 상속
    public:
    void bark(){
        std::cout << "The dog goes woof!\n";
    }
};

int main()
{
    Dog dog;
    dog.eat();

    return 0;
}