#include <iostream>


int main()
{

//  break = break out the loop "if" it match the condition.
//  continue = skip that thing.

//normal "for"

    for( int i = 1; i <= 20; i++){

        std::cout << i << '\n'; 
        
    }

        std::cout << "------------------------------------------" << '\n';

//next
//with "break"

    for( int x = 1; x <= 20; x++){

        if(x == 15){         //it will break(stop) when x=15
            break;
        }

        std::cout << x << '\n';   
    }

    std::cout << "------------------------------------------" << '\n';

//next
//with "continue"

    for( int x = 1; x <= 20; x++){

        if(x == 15){         
            continue;        //it will skip at 15
        }

        std::cout << x << '\n';   
    }





    return 0;
}