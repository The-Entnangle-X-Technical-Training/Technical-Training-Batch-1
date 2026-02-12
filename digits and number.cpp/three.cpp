//Write a program that takes a 3-digit number as input and extracts and displays the first digit.

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int firstDigit = 0;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    firstDigit = number / 100;

    cout << "The first digit of the number is: " << firstDigit << endl;
    return 0;
}