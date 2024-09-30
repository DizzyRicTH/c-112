#include <iostream>

//I not going to help you with anything.

main(){

    using namespace std;

    char op;
    double num1;
    double num2;
    double result;

    cout << "enter num1: ";
    cin >> num1;

    cout << "enter the (+ - * /): ";    // this is single character.
    cin >> op;

    cout << "enter num2: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << num1 << " + " << num2 << " = " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        cout << num1 << " - " << num2 << " = " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        cout << num1 << " * " << num2 << " = " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << '\n';
        break;

    default:
        cout << "dont you listen to what i said?!!!";
        break;
    }

//----------------------------------------------------------------------------------------------------


//  by the way i have some tip for you.
//  you are already know if else, switch ,right?
//  So, it still have something more that work like if else.
//  it is "?" Yes this is. let me show you how it work.



//  BUT it can use only 2 scenario. If more than that use "if, else" or "switch"
//  Use anything you think you can do it good.  

//---------------------- Start with if else first ----------------------

int grade;

cout << "enter your grade: ";
cin >> grade;

if( grade >= 70){
    cout << "you are doing great! \n";
}
else{
    cout << "Fucking loser!!! \n";
}


//---------------------- Now let start with "?" ----------------------

int grade1;

cout << "enter your grade1: ";
cin >> grade1;

grade1 >= 70 ? cout << "you are doing great! \n" : cout << "Fucking loser!!! \n";


//---------------------- MOre example ----------------------


int number = 12; 
number % 2 == 1 ? cout << "ODD \n" : cout << "EVEN \n"; 

//  % = seperate the value to a group. like it have 2 per group. So 12 is even
//      because 12 can seperate into a group by 2 fit in and no remain.
//      If it have so it odd.          


//---------------------- MOre example ----------------------


bool death;
cout << "Are you dead?(true or false): ";

cin >> death;

death == true ? cout << "So, how the fuck can you type this?" :
                cout << "If you death? how the fuck can you answer this?";


//-------------------------------------------------------------------------------------------------------

//  But if you want to have something more advance.
//  Use your brain and do this. 


string death1;
cout << "Are you dead?(true or false)1: ";

cin >> death1;
if( death1 == "true" ){
    cout << "1So, how the fuck can you type this?";
}
else if( death1 == "false" ){
    cout << "1If you death? how the fuck can you answer this?";
}
else{
    cout << "1Do you have eyes? Oh, nevermind you are death.";
}


//---------------------- Use what you Good at it. ----------------------------------------------------------------




    return 0;


}