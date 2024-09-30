#include <iostream>


int main(){

    //foreach loop = loop that eases the traversal over an
    //               iterable data set.


    std::string GUNS[] = {"MP5 ", "P90 ", "AK47 "};

    std::cout << GUNS[0] << '\n'; //can only show 1 resulf.


                      //96      /      32   =  3
    for (int i = 0; i < sizeof(GUNS)/sizeof(GUNS[0]); i++){
        std::cout << GUNS[i];       
    }

    std::cout << '\n';
    //You can do this but it also have another way. it easiler but less flexible

    for (std::string GUNs : GUNS){
        std::cout << GUNs;
    }



    return 0;
}