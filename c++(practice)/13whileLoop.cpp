#include <iostream>

int main() {
    std::string name;
    
    while(name.empty()){
        std::cout << "Enter your name : ";
        std::getline(std::cin, name);

    }

    std::cout << "Hello" << name << std::endl;

    int number;

    do // do 안에 있는거 한번 실행하고 while 조건에 맞지 않다면 맞을 때 까지 돌기
    {
        std::cout << "Enter number : ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The num is " << number;
    

    return 0;
}