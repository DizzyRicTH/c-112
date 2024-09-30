#include <iostream>

int nnn = 30; //  Gobal 

void nnn1();
void nnn2(int nnn);
void nnn3();


int main(){ //  Local

  //  Local = something in { } like main(){}, void
  //  Gobal = outside the { } not in the main or void just outside the { }

    int nnn = 31;

    std::cout << nnn << '\n';
    nnn1();  
    nnn2(nnn);
    nnn3();



    return 0;
}
void nnn1(){ //  Local
    int nnn = 12; //Try delete this int. it will use the Gobal int.
    std::cout << nnn << '\n';

    //this function cant not see int nnn = 31; because it in another function. except
    // tell them....    
}
void nnn2(int nnn){ //like this
  std::cout << nnn << '\n';
}
// and if you want to use the gobal variable use ::
void nnn3(){
  int nnn = 99;
  std::cout << ::nnn << '\n'; //it will alway use the gobal variable.
}