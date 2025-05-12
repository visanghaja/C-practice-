#include <iostream>

// namespace 는 한 변수가 여래개의 값을 가질 수 있도록 해줌
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main() {
    using namespace first; // 이러면 first::x 안해도 됨

    // using namespace std; // 이렇게 하면 std::cout 안하고 cout 으로 바로 해도 됨 std::string 도 그냥 string 으로 
    
    using std::cout; 
    using std::string;
    string name = "bro";


    int x = 0;

    std::cout << x; // (0)
    std::cout << first::x; // (1)
    std::cout << second::x; // (2)

    return 0;
}