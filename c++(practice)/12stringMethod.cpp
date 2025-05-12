#include <iostream>

int main() {
    std::string name;
    std::cout << "Enter your name : ";
    std::getline(std::cin, name);

    if(name.length() > 12) { // .length() 로 길이 볼 수 있음
        std::cout << "your name is too long!";
    }
    else if(name.empty()){ // .empty() true false 로 반환
        std::cout << "plz enter your name!";
    }
    else{
        std::cout << "welcome!";
    }
    name.append("@gmail.com"); // append 는 string 에에 붙일 수 있음
    char first_name = name.at(0); // at 으로 string 인덱스 확인 가능
    name.insert(0, "@"); // insert 하면 원하는 인덱스에 string 넣을 수 잇음
    name.find(' '); // 이렇게 하면 string 안에서 찾고자 하는글자의 인덱스가 어딘지 알 수 잇음
    name.erase(0, 3); // 시작 인덱스와 끝 인덱스 만큼 지워줌
    name.clear(); // clear 하면 name 은 공백이 됨
    
    return 0;
}