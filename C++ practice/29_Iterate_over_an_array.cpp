#include <iostream>


int main(){

    std::string studentsds[] = {"Tom ", "jane ", "Hund"};

    std::cout << studentsds[0] << '\n';

    //THis is for just one out put and if you want all the name you have to repeat it.
    //So we have better method
    //We use loop.


    for (int i = 0; i <=3; i++)
    {
        std::cout << studentsds[i] << '\n';
    }

    //Or use sizeof() So you dont have to mess with the arry quantity.

    for (int i = 0; i < sizeof(studentsds)/sizeof(std::string); i++){
        std::cout << studentsds[i] << '\n';
    }


    //it get same resault trust me.
    //another example.

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for ( int i = 0; i < sizeof(grades)/sizeof(grades[0]); i++)
    {
        std::cout << grades[i] << '\n';
    }


    return 0;
}