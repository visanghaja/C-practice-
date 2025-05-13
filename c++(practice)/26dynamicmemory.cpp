#include <iostream>

int main()
{
    int *pNum = NULL;

    pNum = new int; // new 로 address

    *pNum = 21;

    std::cout << "Addresss : " << pNum << '\n';
    std::cout << "value : " << *pNum << '\n';

    delete pNum; // 이걸로 안에 값 clear

    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in ? ";
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter element #" << i + 1 << " : "; 
        std::cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++){
        std::cout << pGrades[i] << " ";
    }
    



    return 0;
}