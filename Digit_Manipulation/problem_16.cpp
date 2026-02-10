// Program 16: Check Divisibility by 3 Using Digit Sum
// Write a program that takes a number as input, calculates the sum of its digits, and checks if the number is
// divisible by 3 using the digit sum rule.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    int sumOfDigits = 0;
    int tempNumber = number;

    while (tempNumber > 0) {
        sumOfDigits += tempNumber % 10;
        tempNumber /= 10; 
    }

    if (sumOfDigits % 3 == 0) {
        cout << number << " is divisible by 3." << endl;
    } else {
        cout << number << " is not divisible by 3." << endl;
    }

    return 0;

}