// Problem 8: Celsius to Fahrenheit Converter
// Write a program that converts temperature from Celsius to Fahrenheit using the formula: F = (C × 9/5) +
// 32

#include <iostream>
using namespace std;

int main() {
    float celsius =0;
    float fahrenheit =0;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "Temperature in Fahrenheit = " << fahrenheit << endl;

    return 0;

}