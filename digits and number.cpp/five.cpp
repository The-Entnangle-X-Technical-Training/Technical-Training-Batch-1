//Write a program that takes a 3-digit number as input and calculates the sum of all its digits, then displays
//the result.

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int sumOfDigits = 0;

    cout << "enter a 3-digit number; ";
    cin >> number;

    sumOfDigits = (number / 100) + ((number / 10) % 10) + (number % 10);

    cout << "The sum of the digits is: " << sumOfDigits << endl;
    return 0;
}