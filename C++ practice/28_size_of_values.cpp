#include <iostream>


int main(){

//  sizeof() = determines the size  in bytes of a:
//             variable, data type, class, object, etc


    std::string name = "HI BRO"; //No matter how long it is, still 32 bytes. it's size of string
    double GPA = 2.5;
    char grade = 'f';
    bool student = true; // 1 bytes

    char grades[] = {'A', 'B', 'C', 'D', 'F'}; //Because char is 1 bytes and it have 5 char So it have 5 bytes.
    std::string names[] = {"BOb", "GO", "LIL"};


    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " elements\n"; //Find how many it is.
//  by devide it by it data type.

// it's std::string = 32 bytes so string array that have 3 values is 32x3 and if
// we devide it by 32 it equal 3.

    std::cout << sizeof(names)/sizeof(std::string) << " elements\n";


    return 0;
}