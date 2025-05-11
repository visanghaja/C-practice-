#include <iostream> // header file
// iostream 은 I/O 관리해주는 함수 있는곳

int main(){
    std::cout << "I like pizza!" << '\n'; // std 는 standard 의미 cout 은 char output 이라는 의미 << 은 output 의미
    // << std::endl은 다음줄로 넘어가기 (endline) '\n' 으로 대체 가능 
    std::cout << "hi" << '\n';
    
    return 0; // 0은 오류 없이 잘 실행되었다는 의미
    // 1이 return 되면 오류 발생했다는 뜻
}