#include <iostream>



main(){
using namespace std;

//  if else statement = do something if.... or else do something else... 
//  If you have enough common sense and iq of average human at 80 you will 
//  understand it easilly. Maybe, show you how it work will be more easy. 


    int age;

    std::cout << "IF you want to enter is site you have to enter your age: ";

    std::cin >> age;
    
    if(age >= 18){

        cout << "wellcom to site.";
        const char* url = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
        #ifdef _WIN32
        system(("start chrome " + std::string(url)).c_str());
    #elif __APPLE__
        system(("open -a 'Google Chrome' " + std::string(url)).c_str());
    #elif __linux__
        system(("google-chrome " + std::string(url)).c_str());
    #else
        // Unsupported platform
        std::cout << "Unsupported platform." << std::endl;
    #endif


    }

    else{
        cout << "Go fuck yourself.";
        const char* url = "https://www.youtube.com/watch?v=dQw4w9WgXcQ";
        #ifdef _WIN32
        system(("start chrome " + std::string(url)).c_str());
    #elif __APPLE__
        system(("open -a 'Google Chrome' " + std::string(url)).c_str());
    #elif __linux__
        system(("google-chrome " + std::string(url)).c_str());
    #else
        // Unsupported platform
        std::cout << "Unsupported platform." << std::endl;
    #endif

    }



    return 0;
}