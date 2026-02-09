// Program 5: Sum of Digits (3-digit number)
// Write a program that takes a 3-digit number as input and calculates the sum of all its digits, then displays
// the result.

#include <iostream>
using namespace std;

int main() {
    int number =0;
    int SumOfDigit;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    SumOfDigit = (number /100) + (number % 10)+ ((number/10)%10);
    cout << " Sum of all digit :"<<SumOfDigit;
    return 0;
}

