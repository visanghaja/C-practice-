#include <iostream>
#include <ctime>


char user_choice;
char com_choice;

void RPSgame(char user);

int main()
{
    do
    {
        std::cout << "choose r, s, p : ";
        std::cin >> user_choice;
    } while (user_choice != 'r' && user_choice != 's' && user_choice != 'p');
    RPSgame(user_choice);
    std::cout << "com choice is " << com_choice;
        
    return 0;
}

void RPSgame(char user){
    srand(time(NULL));
    int com = rand() % 3 + 1;
    
    switch (com)
    {
    case 1:
        com_choice = 'r';
        if (user_choice == 'r')
        {
            std::cout << "DRAW! ";
        }
        else if(user_choice == 'p'){
            std::cout << "WIN! ";
        }
        else{
            std::cout << "LOSE! ";
        }
        
        break;
    case 2:
        com_choice = 's';
        if (user_choice == 'r')
        {
            std::cout << "WIN! ";
        }
        else if(user_choice == 'p'){
            std::cout << "LOSE! ";
        }
        else{
            std::cout << "DRAW! ";
        }
        break;
    case 3:
        com_choice = 'p';
        if (user_choice == 'r')
        {
            std::cout << "LOSE! ";
        }
        else if(user_choice == 'p'){
            std::cout << "DRAW! ";
        }
        else{
            std::cout << "WIN! ";
        }
        break;
    default:
        break;
    }
    
}