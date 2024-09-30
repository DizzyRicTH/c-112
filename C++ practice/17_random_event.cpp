#include <iostream>
#include <ctime>

main(){

    srand(time(NULL));

    int rannum = (rand() % 5) + 1;

// OR you can write like this.
//  int rannum = rand() % 5 + 1; work same.


    switch (rannum)
    {
        case 1: std::cout << "you got 1 exp.";
        break;
        case 2: std::cout << "you got 2 exp.";
        break;
        case 3: std::cout << "you got 3 exp.";
        break;
        case 4: std::cout << "you got 4 exp.";
        break;
        case 5: std::cout << "you got pegging session with 6'2 goth girl.";
        break;
    
    default: std::cout << "HOW!!!! HOW!!!!";
        break;
    }







    return 0;
}