#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age : ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to the site!";
    }
    else if (age < 0){
        std::cout << "Error!";
    }
    else {
        std::cout << "You are not old enough to enter!";
    }

    bool hungry = false;
    hungry ? std::cout << "You are hungry!" : std::cout <<"You are full";
    // std::cout << (hungry ? "You are hungry" : "you are full");
    return 0;
}