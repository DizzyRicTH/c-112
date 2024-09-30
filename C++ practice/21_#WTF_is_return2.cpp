#include <iostream>

//void                  delaration1        delaration2
std::string FullNameS(std::string name1, std::string name2);



int main(){

    std::string FirstName = "GG";
    std::string LastName = "easy";
//                                   delaration1   delaration2
    std::string FullName = FullNameS(FirstName, LastName);

    std::cout << FullName;




    return 0;
}
//void
std::string FullNameS(std::string name1, std::string name2){

    std::string FullNameS1 = name1 + " " + name2;
    return FullNameS1; //return this value to std::string FullNameS(std::string name1, std::string name2)
//  OR
//  return name1 + " " + name2;

}