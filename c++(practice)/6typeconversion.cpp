#include <iostream>

int main() {
    
    int x = 3.14; // 3

    double y = (int) 3.14; // 3

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";
    
    return 0;
}