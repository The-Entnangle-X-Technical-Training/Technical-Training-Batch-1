//Write a program that takes a 3-digit number as input and swaps its first and last digits, then displays the
//result (e.g., 456 becomes 654)

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int swappedNumber = 0;

    cout << "enter a 3 digit number: ";
    cin >> number;

    int firstDigit = number / 100;

    int middleDigit = (number / 10) % 10;

    int lastDigit = number % 10;

    swappedNumber = lastDigit * 100 + middleDigit * 10 + firstDigit;
    cout << "The swapped number is: " << swappedNumber << endl;
    return 0;
    
}