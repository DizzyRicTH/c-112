#include <iostream>


main(){
    using namespace std;

   //Now Let try Do while loop. It just a "while" but at the end

   int number;  //1

   while(number <= 0){  //2      //it work different than "if()" 

//  it take int "number"; first and number is no value because
//  we didnt add any value to it


    cout << "enter the positive number: ";
    cin >> number; 


   }

    // example "if"
/*
    cout << "enter: ";
    cin >> number;

    if(number >= 0){

        cout << "something " << number;
    }
    else{
        cout << "000FUCK";
    }
*/


    cout << "number is " << number;


    return 0;
}