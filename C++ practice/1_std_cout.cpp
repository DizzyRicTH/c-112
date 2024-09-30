#include <iostream>

int main(){


    //std is standard
    //cout is character output

    /*std::cout << "(1)hello 112.";
    std::cout << "(1)Fuck you.";*/
 

    /*if the code this being like this (above) 
    the result is going to be like is :hello 112.hello 112.*comment*:"I don't know why but it work like this"
    it's same line. if you want it to be another line do this. 
    Oh and you have to delete... the ----> /*...*/ //to run code *dont look at it.*
    

    /*std::cout << "(2)hello 112." << std::endl;      
    std::cout << "(2)Fuck you." << std::endl;*/


    /*OR*/   /*do this instead*/


    /*std::cout << "(3)hello 112." << '\n';
    std::cout << "(3)Fuck you."  << '\n';*/


    /*
    but you will see the output maybe like this

    (1)hello 112.(1)Fuck you.(2)hello 112.
    (2)Fuck you.
    (3)hello 112.
    (3)Fuck you.       
    
    it because this "(1)Fuck you" line(look at the code) dont have the '\n' or std::endl
    and dont forget to add "<<" behind the code. Let try and change it.*/

    //next it is math time.
    /* this is declaration. การประกาศตัวแปล */


    /*
    int x;     
    x = 1;

    std::cout << x;
    */

    //OR

    /*
    int y = 2;

    std::cout << y;
    */


    /*you will see the result is 55 but it is not fifty five but it's five five.
    it's in the same line. So if you want it to be a new line. what you should do??? Try it.
    
    But if it's in the same "main" should i say same file. You can't use the same declaration.*/


    /*
    int z;
    z = 3;
    int v;
    v = 4;
    */

    // you can swap the z = 3 and v = 4 like this 
    /*
    int z;
    int v;
    z = 3; 
    v = 4;
    it work the same.
    */

    /*int sum = z + v;*/

    //OR

    /*
    int sum;
    sum = z + v;
    */


    /*
    std::cout << z << '\n';
    std::cout << v << '\n';
    std::cout << sum << '\n';
    */


    //So now... this is the real deal.


    //integer = (whole number). integer = จำนวนเต็ม

    /*
    int age = 21;
    int year = 2024;
    int days = 28.5; 
    */

    //it you type std::cout << declaration; you already know what is result, right???
    //what about we change the "int day = 28;" to "int day = 28.5" go change it.; 

    /*
    std::cout << days << '\n';
    */
    //see the result? what happen??
    //it's not what you type in right? hope Yes.
    //So, let try this!!!


    //double (include decimal) เป็นตัวเลขรวม ทศนิยม
    

    /*
    double Number = 28.5;
    double GPA1  = 3.83; //it is my first term grade
    double GPA2 = 3.6; //it is my seconde term grade, kinda... good? 
    */

    /*
    std::cout << '\n'; // <--- You can also do this to blank the line.
    std::cout << Number << '\n';
    std::cout << GPA1 << '\n';
    std::cout << GPA2 << '\n';
    */


    //Now you can do simple math with it.
    //Next is...
    //char is for (single character).


    /*
    char grade = 'A';
    char FBI = 'H';
    char Rule34 = '!';

    std::cout << Rule34; //try change the declaration.
    */


    //you'll see the result is just one character.
    //But what if you add more charactr? Try it.  
    //after you try it. Try something more. Maybe try mix char with double and int
    //Or mix it with sum= + - * / some math ... it not gonna work but, Let try. It maybe will.


    //Well well, now do you know True or False? of course Yes, yes?
    //Or maybe somthing call... 
    
    
    //"boolean" !!!! it work like true or fales. What is it make for???

    /*
    bool student = true;
    bool Power = true;
    bool Forsale = true;
    */

    //string (oblect that represents a sequence of text)

    /*
    std::string name = "Bro";
    std::string day = "friday";
    std::string Food = "chicken breast";
    
    std::cout << name;
    */

    //Now this is kinda simple actually. Let use your brain this time.

    /*
    std::string name = "Bro";
    std::string day = "friday";
    std::string Food = "chicken breast 12kg";

    std::cout << "Hello" << name << "." << "I like" << day << "and" << Food << '\n';
    */

    //So now you will see it donnt have space between word right?
    //So Do THIS...       Do you see that space in the " "

    /*
    std::cout << "Hello " << name << "," << " I like " << day << " and " << Food << "." << '\n';
    */


    /*

    So after all we have 
    1.int = (integer) For set the declaration whole number but not include decimal.
    2.double = For set the declaration whole number but include decimal.
    3.char = single character.
    4.bool = (boolean) True or False.
    5.string = the whole word or sentence also include number but.
               it count to be word not number. string treat it differently.   
    */

    //Mark i listen to asmr https://www.youtube.com/watch?v=EiLbSqbrTY8 while making this.
    
    //Now Let go with some const. what is const?
    //const is security. Yes try it.

    /*
    double ip = 3.1416;
    double radius = 20;
    double circumference = 2 * ip * 20;

    std::cout << circumference;
    */

    //You see the result? Let make another ip then.

    /*
    double ip = 3.1416;
    //add here. like "ip = some number;
    double radius = 20;
    double circumference = 2 * ip * 20;

    std::cout << circumference;
    */

    //you will see the value have change!!! so if you dont want it to be change
    //Do this

    /*
    const double ip = 3.1416;
    //ip = 5; <--- try delete the "ip = 5; it will back to work normal."
    double radius = 20;
    double circumference = 2 * ip * 20;

    std::cout << circumference;
    */
    
    //Now when you click run. the program doesn't work. Yes, because of "const"
    //This is data security.

    /*
    double A_train_speed = 180; //this speed can change.
    const double A_train_weight = 80; //Kg.    If this cant be change
    int Human_Durability = 100;

    double If_Human_been_hit_by_A_train = Human_Durability - (A_train_speed * A_train_weight);

    std::cout << If_Human_been_hit_by_A_train;
    */


    //Now you get the result.


    /*
    Now we talking about 
    
    "Namespace". 

    provides a solution for preventing name conflicts
    projects. Each entity needs a unique name. 
    A namespace allows for identically named entities as long as the namespaces are different.
    */
    // I think it hard to understand so let do it.


    int x= 0;
    int x= 0;

    //see this we cant have the same x or declaration. but namespace will make it work.

    std::cout << x;

    //Now go to 2_namespace.cpp





    return 0;
}