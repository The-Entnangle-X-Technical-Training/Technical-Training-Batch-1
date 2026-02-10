// Problem 22: Reverse a Number
// Write a program that takes a number and prints it in reverse. Example: 1234 → 4321.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int reversedNumber = 0;

    cout << "Enter a number: ";
    cin >> number;
    for(int i = number; i > 0; i /= 10) {
        int lastDigit = i % 10; 
        reversedNumber = (reversedNumber * 10) + lastDigit;
    }
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}