#include <iostream>
#include <cmath>



main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) +1;

    std::cout << "number guessinf game\n";

    do{
        std::cout << "guess 1-100: ";
        std::cin >> guess;
        tries++;    //every time it loop add 1 try.


        if(guess < num){

            std::cout << "More than that, try again.\n";

        }
        else if(guess > num ){
            std::cout << "leass than that.\n";

        }
        else{
            std::cout << "correct how it you know that?  tries: " << tries << '\n';
        }


    }while(guess != num);











    

    return 0;
}