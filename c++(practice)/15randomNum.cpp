#include <iostream>
#include <ctime>

int main() {
    srand(time(NULL));

    int num = (rand() % 100) + 1; // 1 ~ 100 까지 숫자 중 랜덤

    std::cout << num;

    return 0;
}