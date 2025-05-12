#include <iostream>

int main() {
    int month;

    std::cout << "Enter month : ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "1월";
            break;
        case 2:
            std::cout << "2월";
            break;
        case 3:
            std::cout << "3월";
            break;
        case 4:
            std::cout << "4월";
            break;
        case 5:
            std::cout << "5월";
            break;
        case 6:
            std::cout << "6월";
            break;
        case 7:
            std::cout << "7월";
            break;
        case 8:
            std::cout << "8월";
            break;
        case 9:
            std::cout << "9월";
            break;
        case 10:
            std::cout << "10월";
            break;
        case 11:
            std::cout << "11월";
            break;
        case 12:
            std::cout << "12월";
            break;
        default:
            std::cout << "1~12 사이의 숫자만 입력해주세요";
    }

    return 0;
}