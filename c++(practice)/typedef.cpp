#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef 사용해서 복잡한 데이터 형식을 줄여셔 사용가능함! _t 붙이는건 관례
//typedef std::string text_t;
using text_t = std::string;
// using 으로 typedef 대체 가능!

int main() {

    pairlist_t pairlist;
    
    text_t firstName = "Bro";

    std::cout << firstName << '\n';

    return 0;
}