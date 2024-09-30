#include <iostream>
#include <cmath>



main(){
    using namespace std;
    //We going to make triangle

    double a;
    double b;
    double c;

    cout << "side a: ";
    cin >> a;

    cout << "side b: ";
    cin >> b;

    /*cout << "side c: ";
    cin >> c;*/

    //double circumference = a + b + c;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "side C equal = " << c;




    return 0;
}