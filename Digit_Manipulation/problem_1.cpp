// Program 1: Extract Last Digit
// Write a program that takes any number as input and extracts and displays the last digit of that number.

#include <iostream>
using namespace std;

int main() {
    int number =0;
    cout << "Enter a number: ";
    cin >> number;

    int lastDigit = number %10;
    cout << "The last digit of the number is: " << lastDigit << endl;
    return 0;
}
