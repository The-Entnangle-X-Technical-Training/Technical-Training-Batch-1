// Program 15: Find Smallest Digit in a Number
// Write a program that takes a 4-digit number as input and finds the smallest digit in it, then displays that
// digit

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "Enter a 4-digit number: ";
    cin >> number;
    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;
    int smallestDigit = firstDigit;

    if (secondDigit < smallestDigit) {
        smallestDigit = secondDigit;
    }
    if (thirdDigit < smallestDigit) {
        smallestDigit = thirdDigit;
    }
    if (fourthDigit < smallestDigit) {
        smallestDigit = fourthDigit;
    }

    cout << "The smallest digit is: " << smallestDigit << endl;

    return 0;
}