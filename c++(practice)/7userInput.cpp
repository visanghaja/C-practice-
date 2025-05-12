#include <iostream>

// cout << (출력)
// cin >> (입력)

int main() {
    std::string name;
    int age;

    std::cout << "What's your age? : ";
    std::cin >> age;

    std::cout << "What's your full name? : ";
    std::getline(std::cin >> std::ws, name); // getline 으로 하면 글자 중간에 공백 있어도 입력가능!
    // std::ws 로 그 전에 있던거 지우고 입력 받을 수 있음

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}