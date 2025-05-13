#include <iostream>

int main()
{
    //포인터는 다른 변수의 주소를 가지고 있는 변수
    std::string name = "bro";
    std::string *pName = &name;

    std::cout << pName << '\n'; //0x9d9a7ff700
    std::cout << *pName << '\n'; //bro

    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    std::string *pFreePizza = freePizza; // arr는 이미 주소로 주기 때문에 & 필요 없음

    //null 포인터는 포인터가 null value 를 가짐 (nullptr)
    //주소가 제대로 할당되었는지 확인할때 사용!
    int *pointer = nullptr;
    int x = 123;
    
    pointer = &x;

    if (pointer == nullptr) 
    {
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned!\n";
    }
    
    return 0;
}