#include <iostream>
#include <cmath>

int main(){
    


    int num;

    std::cout << "Try your LUCK!!!\n";

    srand(time(NULL));
    num = (rand() % 20) +1;

    std::cout << "Your number is: " << num << '\n';
    

    switch (num)
    {
    case 1: std::cout << "You just fucking die.";
        break;
    case 2: std::cout << "Almost die but not yet.";
        break;
    case 3: std::cout << "Got very injured.";
        break;
    case 4: std::cout << "Got injured.";
        break;
    case 5: std::cout << "Got a little injured.";
        break;
    case 6: std::cout << "30% succesed(Some event).";
            std::cout << num +  6;
        break;
    case 7: std::cout << "35% succesed(Some event).";
        break;
    case 8: std::cout << "40% succesed(Some event).";
        break;
    case 9: std::cout << "45% succesed(Some event).";
        break;
    case 10: std::cout << "50% succesed(Some event).";
        break;
    case 11: std::cout << "55% succesed(Some event).";
        break;
    case 12: std::cout << "60% succesed(Some event).";
        break;
    case 13: std::cout << "65% succesed(Some event).";
        break;
    case 14: std::cout << "70% succesed(Some event).";
        break;
    case 15: std::cout << "75% succesed(Some event).";
        break;
    case 16: std::cout << "80% succesed(Some event).";
        break;
    case 17: std::cout << "85% succesed(Some event).";
        break;
    case 18: std::cout << "90% succesed(Some event).";
        break;
    case 19: std::cout << "95% succesed(Some event).";
        break;
    case 20: std::cout << "100% succesed(Some event).";
        break;
    
    default:
        break;
    }
 

    return 0;
}