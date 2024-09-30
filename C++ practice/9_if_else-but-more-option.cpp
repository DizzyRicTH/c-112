#include <iostream>


main(){

    using namespace std;

//  You already hoe "if" "else" work right? So this is will make it more use full.

//  && = check are the 2 condition are true? ( x and y )
//  || = check are the 1 condition are true? ( x or y )

//  !  = This is reverses that ture or false. example more understanding.

    int temp;
    cout << "What is temperature?: ";
    cin >> temp;

//  Try understand this in human language. it make more sense... No it not.
//  But if the code work, it work. Try change "| |" to "&&" and type 99.

    if( temp >= 0 && temp < 35){
        cout << "The temperature is good."; 
    }
    else if(temp > 35 || temp < 0){    // <------ This line to "&&"
        cout << "I'm in danger!!!";    //  if you look at this closely.  
    }                                  //  And try understand this in human language.
    else {                             
        cout << "Only number dumb fuck.";
    }
    

    bool sunny = false; 
    
    if(!sunny){   // ! infront of the declaration. this program will run id it False
        cout << " it sunny outside."; 
        //But you can also use your brain to not use it as well. 
    }
    else{
        cout << " something weird???";
    }
    
    
//-------------------------------------------------------------------------------------------------------------





    return 0;
}