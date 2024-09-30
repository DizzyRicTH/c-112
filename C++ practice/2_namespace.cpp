#include <iostream>
    
    namespace first{
        int x = 5;
                            //you can have same declaration if it in different namespace.
        
    }

    namespace second{
        int x = 112;
        
    }


int main() {
    using namespace std;  //<--- this line make it short for using std. like...*/
    
    //OR


    using std::cout;               //same as above. Buttt maybe??!!
    using std::string;            //it have some event that you cant use it.
 

    //all of this you can just use "using namespace std;

    cout << first::x << '\n'; //but it can be resulf of a 0. because "int x = 0;" is below it.
    
    string HJK = "very big Anu...."; //If you know who she is... you are my friend.


    cout << HJK << '\n';




    /*using namespace first;*/  //<--- if you add this in it will call the x form namespace first.
    int x = 0;             //But you have to delete this line too.

    std::cout << x << '\n'; //but if you want the resulf of the namespace first do this.
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << '\n';
    //but you cant "std::cout << first::x << '\n';" on the "namespace first{  }"
    //and we also can do this.

    
    std::cout << x << '\n';           //to get the result of "namespace first{int x = 5;}"
                                      //you have to back to the first line and read.

    std::cout << second::x << '\n';   //what about this??? it will show the "namespace second"



    // Namespace = provides a solution for preventing name conflicts
    //             in projects. Each entity needs a unique name. 
    //             A namespace allows for identically named entities 
    //             as long as the namespaces are different. 
    



    return 0;
}