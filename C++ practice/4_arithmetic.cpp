#include <iostream>

main(){

//  Nowww... It is math time.!!!
//  Arithmetic ( + - * / )

int students = 20;

//students = students + 2;

//Or

//students += 1;

//Or if you only want to add 1.

//students ++;

//SO now we have more like - * / it work the same.

//students -= 1;

//Or

//students --;


//students *= 2;

//students /= 2;

//but what if we / it with 3?

//students /= 3;

//the result is 6. It not but because we use "int" go change it ot double.

//Oh o almost forgot % = separate the number into a group and if it have Remnant. it will show

int remainder = students % 2; // 2 per group. so result is 0. try change it. ODD or EVEN finder.

std::cout << students << '\n';   //try to delete "//" and it will get new result.

std::cout << remainder << '\n'; 

//-------------------------------------------------------------------------------------------------------


double y= 5 + 8 - 8 * 4 / 5; //it will do 8 * 4 first, -32 / 5 secod, 8 - 32/5 third, and 5... like is


std::cout << y << '\n';

//---------------------------------------------------------------------------------------------------------------

//  type convertion = is to move to data to the what ever we set.

    double x = (int) 3.14;

// more example.

    char j = 100;


    std::cout << x << '\n';
    std::cout << (int) j << '\n'; //the 100 is equal "d" what if we add "(int)" in this code?

    //it will equal 'd'
    //it using for somthing like this.

    int correct = 8;
    int questions = 10;
    double sccore = ((double)correct/questions) * 100;

    std::cout << sccore << '\n';   //BOOM "0" it because it's int. int not work with decimal.
//      So what we should do is add "(double)" to "double sccore = correct/questions * 100;"
//      Try change the location of (double).

//--------------------------------------------------------------------------------------------------------------


//    Now we have work with cout for too long. Greeting the "cin"
//                                             input

    std::string name;
    int age;

    std::cout << "what's your name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "." << '\n' << "You are " << age << " years old.";

//  what about your full name? try type your full name in it. That contains space.
//  The result is shit. that because this program not containt space.
//  but we can fix it with getline function. back to the code. On 90 line
//  it shoild be like this "std::getline(std::cin, name);" 

//  BUt it have somr problem if you move the second above the first code that have getline,
//  it will bug again. So we do this... we add "">> std::ws" in should look like this
//  "std::getline(std::cin >> std::ws, name);" it not actually fix it but it just look go.
//  but you have to answer "How old are you?: " 2 times. So, just dont do it,s OK.

//-----------------------------------------------------------------------------------------------------------------








 return 0 ;
}