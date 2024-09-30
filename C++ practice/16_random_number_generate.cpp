#include  <iostream>
#include  <ctime>



main(){

//  ramdom number actually it pseudo random number(but close).


    srand(time(NULL));

    int num1 = (rand());

    std::cout << num1 << '\n';

//  So this is random number.

    srand(time(NULL));  //leave it just normal

    int num11 = (rand() % 10); //Now if you want to set the limit of it add %.
    int num111 = (rand() % 10) + 1; //if we dont want it to have 0 just plus 1.

    std::cout << num11 << " num11";
    std::cout << num111 << " num111";






    return 0;
}