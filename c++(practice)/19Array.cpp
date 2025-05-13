#include <iostream>

double getTotal(double prices[], int size);
int searchArray(int array[], int size, int element);

int main()
{
    std::string car[] = {"car1", "car2", "car3"};
    car[1] = "AUDI";

    double price[3];
    price[0] = 3.4;
    price[1] = 2.2;
    price[2] = 12.2;

    std::cout << car[1] << "\n";
    std::cout << price[1] << "\n";

    std::string student[] = {"hi", "hii", "hiii"};
    for (int i = 0; i < sizeof(student)/sizeof(std::string); i++)
    {
        std::cout << student[i] << '\n';
    }

    for(std::string student : student){
        std::cout << student << '\n';
    }

    double prices[] = {3.1, 3.2, 2.1, 4.2, 22.3};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); // 포인터 때문에 size도 같인 넘겨줘야함
    std::cout << total << "\n";

    int num[] = {1,2,3,4,5,6,7,8,9};
    int num_size = sizeof(num)/sizeof(num[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for : " << "\n";
    std::cin >> myNum;

    index = searchArray(num, num_size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index << "\n";
    }
    else{
        std::cout << "cant find " << myNum << "\n";
    }
    
    
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
} 

int searchArray(int array[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
           return i;
        }
        
    }
    return -1;
    
}