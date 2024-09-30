#include <iostream>

//void
double square(double lenght);
double cube(double lenght);

int main(){

 //     retuern = return the value back to the spot
 //               where you called the encompassing function.

    double lenght = 12;
    double area = square(lenght);
    double volum_cube = cube(lenght);

    std::cout << "Area is: " << area << "cm^2\n";
    std::cout << "volum_cube is: " << volum_cube << "cm^3\n";


    return 0;
} 
//void  change void to what data we using like double because value of square
//      can be double.
double square(double lenght){
    double result = lenght * lenght;
    return result;
//  OR just
//  return lenght * lenght;
}
double cube(double lenght){
    double result = lenght * lenght * lenght;
    return result;
}