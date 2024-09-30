#include <iostream>
//i want to know the total value of the price. by function




double gettotal(double price[], int size);

int main()
{
    double price[] = {5, 10, 20};
//  you have to have int size because the gettotal function doesnt know the size of the price[]
    int size = sizeof(price)/sizeof(price[0]);
    double total = gettotal(price, size);

    std::cout << "Total bath: " << total;
    


 return 0;   
}
double gettotal(double price[], int size){

    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total = total + price[i];
    }
    
 return total;
}