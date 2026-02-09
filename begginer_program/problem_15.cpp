// Problem 15: Swap Two Numbers Without Third Variable
// Write a program that takes two numbers as input, swaps them without using any third variable (use
// arithmetic operations), and displays values before and after swapping.
#include <iostream>
using namespace std;

int main(){
    int firstNumber =0;
    int secondNumber =0;
    cout << "enter first number ";
    cin >> firstNumber;
    cout << "enter second number ";
    cin >> secondNumber;

    cout << "before swapping: "<<endl;
    cout << "first number = " << firstNumber << ", second number = " << secondNumber << endl;

    firstNumber = firstNumber - secondNumber;
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;

    cout << "after swapping: "<<endl;
    cout << "first number = " << firstNumber << ", second number = " << secondNumber << endl;
    return 0;
    
}