#include <iostream>

int main()
{
    std::string car[] = {"car1", "car2", "car3"};
    car[1] = "AUDI";

    double price[3];
    price[0] = 3.4;
    price[1] = 2.2;
    price[2] = 12.2;

    std::cout << car[1] << "\n";
    std::cout << price[1];
    return 0;
}