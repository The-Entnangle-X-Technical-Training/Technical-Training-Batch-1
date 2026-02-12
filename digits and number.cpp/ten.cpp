//Write a program that takes a 4-digit number as input and finds the largest digit in it, then displays that
//digit

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int largestDigit = 0;

    cout << "enter a 3 digit number: ";
    cin >> number;

    int firstDigit = number / 100;
    int middleDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    if (firstDigit > largestDigit) {
        largestDigit = firstDigit;
    }
    if (middleDigit > largestDigit) {
        largestDigit = middleDigit;
    }
    if (lastDigit > largestDigit) {
        largestDigit = lastDigit;
    }

    cout << "The largest digit is: " << largestDigit << endl;
    return 0;
}