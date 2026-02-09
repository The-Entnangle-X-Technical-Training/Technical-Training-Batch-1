// Problem 3: Simple Calculator
// Write a program that takes two numbers from the user and performs addition, subtraction, multiplication,
// division, and modulus on them, displaying all five results.

#include <iostream>
using namespace std;

int main() {
    int numberOne=0;
    int numberTwo =0;
    cout << "Enter first number: ";
    cin >> numberOne;
    cout << "Enter second number: ";
    cin >> numberTwo;
    cout << "addition: " <<numberOne + numberTwo << endl;
    cout << "subtraction: " <<numberOne - numberTwo << endl;
    cout << "multiplication: " <<numberOne * numberTwo << endl;
    cout << "division: " <<numberOne / numberTwo << endl;
    cout << "modulus: " <<numberOne % numberTwo << endl;
    return 0;
}