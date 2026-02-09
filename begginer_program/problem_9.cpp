// Problem 9: Fahrenheit to Celsius Converter
// Write a program that converts temperature from Fahrenheit to Celsius using the formula: C = (F - 32) ×
// 5/9

#include <iostream>
using namespace std;

int main(){
    float celsius =0;
    float fahrenheit =0;
    cout <<"enter temperature in fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit -32) *5/9;
    cout <<"temperature in celius = " << celsius << endl;
    return 0;
}