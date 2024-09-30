#include <iostream>


main(){

//  loop in loop is like i want to do same thing multiplr time.
//  like...
/*
    loop( something ){
        loop( something ){

            do something

        }
    }



*/
//normal loop

    for( int i = 1; i <=10; i++){

        std::cout << i << ' ';

    }

    std::cout << '\n';

//loop in loop: i want to do it 5 time

    for( int l = 1; l <=3; l++){         //do it for 3 time
        for( int i = 1; i <=10; i++){    

        std::cout << i << ' ';

    }  

    std::cout << " loop in loop"  << '\n';

    }

//  So ok now Let make rectangle out of this symbol.

int rows; //8
int columns; //20    it will make a square.
char symbol; // "."

std::cout << "how many rows?: ";
std::cin >> rows;

std::cout << "how many columns?: ";
std::cin >> columns;

std::cout << "enter a symbol to use?: ";
std::cin >> symbol;

//                 /do it for rows times. 
    for( int r = 1; r <=rows; r++){ 
        for( int v = 1; v <=columns; v++){

        std::cout << symbol;

    }  
    std::cout<< '\n';
    }


    return 0;
}