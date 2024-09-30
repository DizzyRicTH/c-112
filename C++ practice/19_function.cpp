#include <iostream>



//                   this 
void Hi_friend(std::string name, int age){  //you can you delaration in anothe function
//                                   you have to do this 
    std::cout << "hi friend!!! " << name << "you are " << age << '\n';
    std::cout << "hi friend!!!\n";
    std::cout << "hi friend!!!\n";
    std::cout << '\n';
}

void HAHAHA(std::string name);


int main(){

    // function = a block of code that you can use.
    //            it have to be out side of the main code.
    //            it often use function above the main code but 
    //            we can change it!!! 
    //            make some function below that maon code.



    std::string name = "I'm not your KOETSSDFK. ";
    int age =21;

    Hi_friend(name, age);
    HAHAHA(name);






    return 0;
}
//  it just another way that you can write it.

void HAHAHA(std::string name){
    std::cout << "AHHAHAHAHAHAHHA HELPPPPP HELPPPP!!!!!\n" << name;
    std::cout << "AHHAHAHAHAHAHHA HELPPPPP HELPPPP!!!!!\n";
    std::cout << "AHHAHAHAHAHAHHA HELPPPPP HELPPPP!!!!!\n";
    std::cout << "AHHAHAHAHAHAHHA HELPPPPP HELPPPP!!!!!\n";
    std::cout << "I'm going insanE!!!!!!!!!!!!!!!!!!!!!\n";
}

