#include <iostream>


int main(){

    double prices[] = {19.5, 18, 15, 999};

  
    std::cout << sizeof(prices)/sizeof(prices[0]) << '\n';
   
    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        std::cout << prices[i] << " " << '\n';
    }

    double total = 0;

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        total = total + prices[i];
    }
    
    std::cout << total << " Bath";
    
    

    return 0;
}