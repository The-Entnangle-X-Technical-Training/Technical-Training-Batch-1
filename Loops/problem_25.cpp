// Problem 25: Power Calculator
// Write a program that takes base and exponent as input and calculates base^exponent using a loop

#include <iostream>
using namespace std;

int main() {
    double base = 0.0;
    int exponent = 0;
    double result = 1.0;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++) {
        result *= base; 
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}