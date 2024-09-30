#include <iostream>
#include <iomanip> //For floating point number.


void showBalace(double balance);
double deposit(double balance); //change of void to double for calculate.
double withdraw(); //change of void to double for calculate.


int main(){
    
    double balance = 6969.69;
    int choice;

    do{
    std::cout << '\n' << "**************************" << '\n';
    std::cout << "welcom, choese the choice.";
    std::cout << '\n' << "**************************" << '\n';
    std::cout << "1. showBalace" << '\n';
    std::cout << "2. deposit" << '\n';
    std::cout << "3. withdraw" << '\n';
    std::cout << "4. exit" << '\n';
    std::cout << '\n' << "choice:";
    std::cin >> choice;


    std::cin.clear(); //reset any input
    std::cin.ignore(); //fix the loop code.


    switch (choice){
    case 1: showBalace(balance);
        break;
    case 2: balance = balance - deposit(balance); //This, balance is double both of it.
            std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance;
        break;
    case 3: balance = balance + withdraw(); //This, balance is double both of it.
            std::cout << "Your balance is: " << std::setprecision(2) << std::fixed << balance;
        break;
    case 4: std::cout << "Thanks for using Bye!\n";
        break;
    default: std::cout << "VALID SHIT!!!!\n";
        break;
    }

    }while(choice != 4);

    return 0;
}

void showBalace(double balance){//    |This is make my balance have "." 2 digit| <iomanip>
    std::cout << '\n' << "You have:  " << std::setprecision(2) << std::fixed << balance << " THB" << '\n' << '\n';

    return ;
}

double deposit(double balance){

    double deposit;
    std::cout << "Enter your deposit: ";
    std::cin >> deposit;

    
    if(deposit > balance){
        std::cout << '\n' << "VALID VALUE.";
        return 0;
    }
    else if(deposit > 0){
        return deposit;
    }
    else{
        std::cout << '\n' << "VALID VALUE.";
        return 0;
    }    
}

double withdraw(){// use double balance for variable.

    double withdraw;
    std::cout << "enter your withdraw: ";
    std::cin >> withdraw;

    if(withdraw > 0){
        return withdraw;
    }
    else{
        std::cout << '\n' << "VALID VALUE.";
        return 0;
    }
}