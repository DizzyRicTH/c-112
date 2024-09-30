#include <iostream>


main(){
    using namespace std;
    
    string name;

//first part    //normal
/*   cout << "enter your name: ";           
    getline(cin, name);         */     
    


//second part
    if(name.empty()){         //3 if name is empty... have nothing to do with it.
                                      
        cout << "enter your name: ";  
        //1 it not have condition up there so this show out first.  

        getline(cin, name);
        //2 cin normal cin with getline.
    }

    cout << "Hello " << name << '\n'; 
    //4 = output 




    //But we want to do with a loop. change if() to while()


    while(name.empty()){       //3 if name is empty loop this code. 
                                      
        cout << "enter your name: ";  
        //1 it not have condition up there so this show out first.  

        getline(cin, name);
        //2 cin normal cin with getline.
    }

    cout << "Hello " << name; 
    //4 = output  


    //Let try another

    /*
    while( 1==1 ){               //if(1==1) loop cout << "HELP!!!";
        cout << "HELP!!!";
    }
    */


                  






    return 0;       
}