#include <iostream>


main(){

    using namespace std;

/*
   //Now Let try Do while loop. It just a "while" but at the end

   int number;  //1

   while(number < 0){  //2      //it work different than "if()" 

//  it take int "number"; first(1) and number is no value because
//  we didnt add any value to it. what if we add? try it.


    cout << "enter the positive number: ";
    cin >> number; 


   }

// next, go down.
//------------------------------------------------------------------
//--------------------------


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


//------------------------------------------------------------------
//--------------------------


//  So we have to do this instead

/*
    do{   //put the "do" infront            //1   //It mean "do" this code 
//                                                  before check the condition.
    cout << "enter the positive number: ";  //2
    cin >> number;                          //3
    
    }while(number < 0);  //check condition  //4    //"while" in the back.
*/


//------------------------------------------------------------------
//--------------------------


//  We can also do this but it longer and still... confused?
/*
    cout << "enter the positive number: ";
    cin >> number;

    while(number < 0){ 

    cout << "enter the positive number: ";
    cin >> number;
    
    }
*/

//  cout << "number is " << number;


//------------------------------------------------------------------------------------------------------------


//  Now you know "while" it time to know "for"
//  it similar to while but it will loop follow by what amount set it, 


//       (1)delaration;  
//       (2)do it untill it mactch the condition;  
//       (3)like the divisor; 

    for( int i = 1; i < 10; i+=5 ){
//           (1)      (2)     (3)

//  (3)if you change i+=2 it will get you 5 loop. it like is the divisor.
//  it will easiler if it a number

        cout << "Your life this nothing!!!\n";

    }

//  Number "for" --------------------------------------------------------------------------------
/*
    int index;

    cout << "enter index: ";
    cin >> index;
*/
    for( int index112 = 1; index112 <= 10; index112++){
        cout << index112 << '\n';
    }

        cout << "Your life this nothing!!!\n";


//------------------------------------------------------------------------------------------------------------


//  So we have "while" and "for"
//  "while" is loop the code if the condition is true
//  "for" repeat something amount of time we set and have 3 settings.



    return 0;
}