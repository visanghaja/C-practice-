#include <iostream>

int main() {

    int x; // 변수 선언
    x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // (double 로 소수 저장 가능)
    double price = 10.99;
    std::cout << price << '\n';

    // (char 로 한글자 문자 저장 가능)
    char grade = 'A';
    std::cout << grade << '\n';

    // (boolean 으로 true false 저장 가능)
    bool student = false;

    // string 으로 문자 저장 가능 (object)
    std::string name = "Bro"; // std::string 으로 저장!
    std::cout << "Hello " << name <<'\n'; // << 이걸로 이어서 출력 가능

    return 0;
}