#include <iostream>
#include <string>

using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    double temperature;
    char unit;

    // Get temperature and unit from user
    cout << "Enter the temperature followed by 'C' for Celsius or 'F' for Fahrenheit: ";
    cin >> temperature >> unit;

    // Convert temperature based on the unit provided
    switch (unit) {
        case 'C':
        case 'c':
            cout << temperature << "°C is " << celsiusToFahrenheit(temperature) << "°F" << endl;
            break;
        case 'F':
        case 'f':
            cout << temperature << "°F is " << fahrenheitToCelsius(temperature) << "°C" << endl;
            break;
        default:
            cout << "Invalid unit entered." << endl;
            break;
    }

    return 0;
}
