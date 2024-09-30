#include <iostream>



main(){
using namespace std;

//  if else statement = do something if.... or else do something else... 
//  If you have enough common sense and iq of average human at 80 you will 
//  understand it easilly. Maybe, show you how it work will be more easy. 

    /*
    int age;

    std::cout << "IF you want to enter is site you have to enter your age: ";

    std::cin >> age;
    
    
    if(age >= 18){

        cout << "wellcom to site.";

    }
    else if(age >=100){                      //see that this use your common sense
        cout << "you are too old.";     //but look at this closely. you have to move this to above.
    }                               //because it complete with first conditional. "if age >= 18"
    else if(age < 0){           //You can also use "if" and "if" If you want 2 conditional that if the answer is match, it will show the 2 result 
        cout << "You havent been born yet.";
    }
    else{

        cout << "Go fuck yourself.";  //if not have any thing match the above condition
                                      //it will show this reult.
    }
    */                            
//                                         i recommend you to read it.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------


//   switch = alternative to use "else if" statements.
//            compare value against matching case.


int month;
cout << "enter the number of month: ";
cin >> month;

/*
if(month == 1){
    cout << "it january";          //you see this shit??? you dont want to 
}                                  //do something like this dont you?
else if(month == 2){            //also this is the way yandare simulator been create
    cout << "it fabuary";          //but we have "switch" !!!!
}
else if(month == 3){
    cout << "it march";
}
else if(month == 4){
    cout << "it april";
}
else if(month == 5){
    cout << "it may";
}
else if(month == 6){
    cout << "it june";
}
else if(month == 7){
    cout << "it july";
}   
else if(month == 8){
    cout << "it august";
}
else if(month == 9){
    cout << "it september";
}
else if(month == 10){
    cout << "it october";
}
else if(month == 11){
    cout << "it november";
}
else if(month == 12){
    cout << "it december";
}
else{
    cout << "wrong house fool!!!"; 
}
*/

//Now we gonna start "switch" here.



switch (month)
{
    case 1:
    cout << "it is january";
    break;
    case 2:
    cout << "it is fabuary";
    break;
    case 3:
    cout << "it is march";
    break;
    case 4:
    cout << "it is april";
    break;
    case 5:
    cout << "it is may";
    break;
    case 6:
    cout << "it is june";
    break;
    case 7:
    cout << "it is july";
    break;
    case 8:
    cout << "it is august";
    break;
    case 9:
    cout << "it is september";
    break;
    case 10:
    cout << "it is october";
    break;
    case 11:
    cout << "it is november";
    break;
    case 12:
    cout << "it is december";   
    break;                      //it also work the same but this read easiler
    default:
    cout << " read the context!!!";
    break;
}                    

//Maybe another example.


char grade;

cout<< '\n' << "enter your grade: ";

cin >> grade;

switch (grade)
{
case 'A':           //if it's single character use ' ' to
    cout << "you doing great.";
    break;

default:
    cout<< "what the fuck?";
    break;
}



//-------------------------------------------------------------------------------------------------------------------



    return 0;
}