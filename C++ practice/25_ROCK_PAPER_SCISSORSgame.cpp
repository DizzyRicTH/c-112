#include <iostream>
#include <ctime>



int main(){

    char player;

    
    
    std::cout << "\nROCK PAPER SCISSORS game\n";
    std::cout << "**************************\n";
    std::cout << "Should your choice.\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cout << "'e' for exit\n";
    std::cin >> player;

    if (player == 'e')
    {
        std::cout << "thanks you for play!!!";
        return 0;
    }
    
    do{
    switch (player)
    {
    case 'r':
        std::cout << "your choice is rock.\n";
        break;
    case 'p':
        std::cout << "your choice is paper.\n";
        break;
    case 's':
    std::cout << "your choice is scissors.\n";
        break;
    }
    } while (player != 'r' && player != 'p' && player != 's');

    srand (time(NULL));
    int computer = rand() % 3 + 1;

    switch (computer)
    {
    case 1:
        std::cout << "\nCumputer choice is rock.";
        break;
    case 2:
        std::cout << "\nCumputer choice is paper.";
        break;
    case 3:
        std::cout << "\nCumputer choice is scissors.";
        break;
    }
    
    if (computer == 1 && player == 'r')
    {
        std::cout << "\nTie!!!\n";
    }
    else if (computer == 1 && player == 'p')
    {
        std::cout << "\nYou win!!!\n";
    }
    else if (computer == 1 && player == 's')
    {
        std::cout << "\nYou lose!!!\n";
    }
    else if (computer == 2 && player == 'p')
    {
        std::cout << "\nTie!!!\n";
    }
    else if (computer == 2 && player == 's')
    {
        std::cout << "\nYou win!!!\n";
    }
    else if (computer == 2 && player == 'r')
    {
        std::cout << "\nYou lose!!!\n";
    }
    if (computer == 3 && player == 's')
    {
        std::cout << "\nTie!!!\n";
    }
    else if (computer == 3 && player == 'r')
    {
        std::cout << "\nYou win!!!\n";
    }
    else if (computer == 3 && player == 'p')
    {
        std::cout << "\nYou lose!!!\n";
    }




    return 0;
}