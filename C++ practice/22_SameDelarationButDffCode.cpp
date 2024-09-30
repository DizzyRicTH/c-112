#include <iostream>
void gun();
void gun(std::string name);
void gun(std::string name, std::string bullet);

int main(){
 //     it's like same name but can be different result

    gun("112", "5.56");
 





    return 0;
}
void gun(){
    std::cout << "This is your gun(Default).";
}
void gun(std::string name){
    std::cout << "This is your gun: " << name << " gun.";
}
void gun(std::string name, std::string bullet){
    std::cout << "This is your gun: " << name << "gun. Use " << bullet << "bullet.";
}