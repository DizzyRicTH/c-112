#include <iostream>

main(){
    using namespace std;
    
//  Something more sbout string!!!
//  you should know.



    string name;

    cout << "Enter your name: ";
    getline(cin, name);  //don't forget "getline" if your input contains space.

    //name.clear();  //this will clear your input even you type it in. make the 
//                   line 25 to /* commend */ because it will cout it output.
 


    if(name.length() > 12){
        cout << "your name are too long. >12 char.";
    }

    /*else if(name.empty()){   //.empty is = if the name is empty it will ... something
        cout << "you didnt enter the name.";
    }*/

    else if (name == "2100")
    {
        //name.append("@gmail.com");  //.append is that word that in ( ) OR

     cout << name.append("@gmail.com") << '\n'; 

//          You can also do this in stead it more shorter.                     
//          But you have to make line 29, 37 to commend.                                                      

        //cout << name << "} this is now your name.";

    }
    else if(name == "123")
    {
        cout << name.at(0);    //show you what is "position" of that char.
    }                          // 0 is the first number of the character.
    else if (name == "3310")
    {
        cout << name.insert(0, "Fuck you ") << "."; //insert the word(string)
    }                                            //in to some paet of the char.         
//                                           work like "".at" but can add word there.       
    else if (name == "Bro code")
    {
        cout << name.find(' ');         //it will find space in the input(string)
    }                               //But it can find only one spcace. Try at another
//                                                   space in it.
    else if(name == "123456789")
    {

        cout << name.erase(0, 3);    //it will delete the char(string) but but 
//                                     Try to change the number in it.
//                                     0 = where start del
//                                     3 = how far we do? 
//                                     So, 0 = first char. it mean 1 2 3 OR try yourself
    }
    else
    {
        cout << "wellcome " << name << ".";
    }
    


//  So after all we have:

//  1. if(name.length() > *number*){ *Do something* }

//  2. cout << name.append("@gmail.com") << '\n'; /add the word follow by your name.

//  3. cout << name.at(0); /show the position of the char 0=1, 1=2.

//  4. cout << name.insert(0, "Fuck you "); /insert the word where you set it.

//  5. cout << name.find(' '); /show what you want it to show. also in ' ' char. 

//  6. cout << name.erase(0, 3); /delete 0=frist to third char. I still (*_*)?







// if you think this is, isnt enough. here the webside you can play with
//          https://cplusplus.com/reference/string/string/
 

//------------------------------------------------------------------------------------------------------------






    return 0;
}