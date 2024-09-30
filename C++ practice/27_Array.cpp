#include <iostream>


int main(){

//  array = a data structure that can hold multiple values
//          value are accessed by index  number 
//          "kind of like variable that holds multiple values"

//          parking spot of values that you can choose.

    std::string cars[] = {"TOYOTA", "SUSUKI", "HONDA"}; //can only contain 1 data type

//    cars[0] = "SUSUKI";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << '\n';

//OR
//                       this
    std::string IceCream[0]; //You have to set the value in the array any.

    IceCream[0]= "chocolate";
    IceCream[1]= "strawberry";
    IceCream[2]= "coconut";

    std::cout << IceCream[0] << '\n';
    std::cout << IceCream[1] << '\n';
    std::cout << IceCream[2] << '\n';
    std::cout << '\n';


//---------------------------------------------------------------------------------------------------------------
//EX.


    double prices[] = {5.90, 50, 42.12, 15};

    std::cout << prices[2];

    return 0;
}