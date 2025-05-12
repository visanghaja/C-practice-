#include <iostream>
#include <ctime>   

int main()
{
    srand(time(NULL));

    int ran = rand() % 10 + 1;
    int cnt = 0;
    int num;

    do
    {
        std::cout << "Enter num : ";
        std::cin >> num;
        cnt++;
        if(ran != num){
            std::cout << (ran > num ? "upper\n" : "lower\n");
            
        }
        else{
            std::cout << "Random num is " << ran << "\n";
            std::cout << "tried " << cnt;
            break;
        }
    } while (num != ran);

    return 0;
}
