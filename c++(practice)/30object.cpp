#include <iostream>

class Human{
    public: // public access
        std::string name;
        std::string occuaption;
        int age;

        void eat(){
            std::cout << "This person is eating\n";
        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "This person is sleeping\n";
        }
};

int main()
{
    Human human1;
    human1.name = "Rick";
    human1.occuaption = "gamer";
    human1.age = 70;
    human1.eat();

    return 0;
}