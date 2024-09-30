#include <iostream>

main(){

    using namespace std;
    
    double temp;
    char CORF;
    char CF;

    cout << "You want to change it to C or F?: ";
    cin >> CF;

    if (CF == 'C' || CF == 'c'){
        cout<< "enter the F temp: ";
        cin >> temp;
        cout << (temp - 32) * 5/9 << " C \n";
    }
    else if(CF == 'F' || CF == 'f'){
        cout<< "enter the C temp: ";
        cin >> temp;
        cout << (9/5 * temp) + 32 << " F \n";
    }
    else{
        cout<< "112. LOL.";
    }

      
    


    
//------------------------------------------------------------------------------------------------





    return 0;
}