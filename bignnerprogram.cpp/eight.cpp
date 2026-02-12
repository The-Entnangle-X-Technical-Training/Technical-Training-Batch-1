#include <iostream>
using namespace std;

int main() {
    
    double temperatureCelsius = 0.0;
    double temperatureFahrenheit = 0.0;

    cout << "Enter temperature in Celsius: ";
    cin >> temperatureCelsius;

    temperatureFahrenheit = (temperatureCelsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit: " << temperatureFahrenheit << endl;


    return 0;
}