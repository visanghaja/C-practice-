#include <iostream>

int main()
{
    std::string car[][3] = {{"car1", "car2", "car3"},
                           {"car11", "car22", "car33"},
                           {"car111", "car222", "car333"}};

    std::cout << car[0][0] << " ";

    return 0;

}