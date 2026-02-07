// Problem 5: Swap Two Numbers Using Third Variable
// Write a program that takes two numbers as input, swaps them using a third temporary variable, and
// displays values before and after swapping.

#include <iostream>
using namespace std;

int main() {
    int firstNumber=0;
    int secondNumber=0;
    int temp =0;

    cout << "Enter number a: ";
    cin >> firstNumber;

    cout << "Enter number b: ";
    cin >> secondNumber;

    cout << " Before swapping: ";
    cout << "a = " << firstNumber << ", b = " << secondNumber << endl;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << " After swapping: ";
    cout << "a = " << firstNumber << ", b = " << secondNumber << endl;

    return 0;
}
