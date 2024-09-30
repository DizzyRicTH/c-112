#include <iostream>
#include <ctime>

// Function to get player's choice
char getPlayerChoice() {
    char choice;
    std::cout << "\nROCK PAPER SCISSORS game\n";
    std::cout << "**************************\n";
    std::cout << "Choose your option.\n";
    std::cout << "'r' for rock\n";
    std::cout << "'p' for paper\n";
    std::cout << "'s' for scissors\n";
    std::cout << "'e' for exit\n";
    std::cin >> choice;
    return choice;
}

// Function to get computer's choice
char getComputerChoice() {
    srand(time(NULL));
    int computer = rand() % 3 + 1;
    if (computer == 1)
        return 'r';
    else if (computer == 2)
        return 'p';
    else
        return 's';
}

// Function to determine the winner
void determineWinner(char player, char computer) {
    if (player == computer)
        std::cout << "\nIt's a tie!\n";
    else if ((player == 'r' && computer == 's') || (player == 'p' && computer == 'r') || (player == 's' && computer == 'p'))
        std::cout << "\nYou win!\n";
    else
        std::cout << "\nYou lose!\n";
}

int main() {
    char playerChoice;

    do {
        playerChoice = getPlayerChoice();

        if (playerChoice == 'e') {
            std::cout << "Thank you for playing!\n";
            break;
        }

        if (playerChoice != 'r' && playerChoice != 'p' && playerChoice != 's') {
            std::cout << "Invalid choice! Please choose again.\n";
            continue;
        }

        std::cout << "Your choice is ";
        switch (playerChoice) {
            case 'r':
                std::cout << "rock.\n";
                break;
            case 'p':
                std::cout << "paper.\n";
                break;
            case 's':
                std::cout << "scissors.\n";
                break;
        }

        char computerChoice = getComputerChoice();
        std::cout << "Computer's choice is ";
        switch (computerChoice) {
            case 'r':
                std::cout << "rock.\n";
                break;
            case 'p':
                std::cout << "paper.\n";
                break;
            case 's':
                std::cout << "scissors.\n";
                break;
        }

        determineWinner(playerChoice, computerChoice);

    } while (playerChoice != 'e');

    return 0;
}
