#include <iostream>
#include <vector>


//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string Hello112_t;

//OR you can use somthing that much more easier is "using"

using AK47 = int;


main(){
    
// typedef = reserved keyword used to create an additional nane
//           (alias) for ansther data type.
//           Now lotifier for an existing type
//           Helps with readability and reduces typos.
//           OR nickname

    //   std::vector<std::pair<std::string, int>> pairlist;
     
    //but you have it nickname now. you can instead type this.

    //    pairlist_t pairlist; 

    //but maybe this is too hard for now let try somrthing easier

    std::string WHAT_ARE_YOU1 = "I am human1.";

    //Now you can type.

    Hello112_t WHAT_ARE_YOU2 = "I am human2.";

    std::cout << WHAT_ARE_YOU2 << '\n';

    AK47 x = 47;

    std::cout << x;



    return 0;
}


