#include <iostream>
#include <cmath> // 이걸로 수학 함수 사용 가능
int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); // std::max 로 max 사용 가능 4
    z = std::min(x, y); // std::min 로 min 사용 가능 3

    z = pow(2, 3); // 8
    z = sqrt(9); // 3
    z = abs(-3); // 3
    z = round(x); // 3
    z = ceil(x); // 4
    z = floor(x); // 3

    std::cout << z << std::endl;

    double a;
    double b;
    double c;

    std::cout << "What's a? : ";
    std::cin >> a;
    std::cout << "What's b? : ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "c is : " << c;
    return 0;
}