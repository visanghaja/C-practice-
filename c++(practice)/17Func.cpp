#include <iostream>

void happy(std::string name); // 이렇게 하면 main 함수 위에 써도 인식됨
double square(double length);
double cube(double length);

int main()
{
    std::string name = "Bro";
    happy(name);

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);
    std::cout << "Area : " << area << "\n";
    std::cout << "Volume : " << volume;
    return 0;
} 

void happy(std::string name){
    std::cout << "Happy birthday to you! " << name << "\n";
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}