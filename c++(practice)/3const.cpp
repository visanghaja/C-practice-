#include <iostream>

int main() {
    const double pi = 3.141592; // const 로 변수 변경 못하게 하기! (상수)
    double r = 10;
    double cir = 2 * pi * r;

    std::cout << cir << "cm";

    return 0;
}