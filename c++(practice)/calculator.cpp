#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********************************\n";

    std::cout << "Enter op : ";
    std::cin >> op;
    std::cout << "Enter num1 : ";
    std::cin >> num1;
    std::cout << "Enter num2 : ";
    std::cin >> num2;
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result is : " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result is : " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result is : " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result is : " << result << '\n';
            break;
        default:
            std::cout << "Plz Enter (+ - * /)\n";
    }
    std::cout << "**********************************";
}