// Program 4: Extract Middle Digit of 3-Digit Number
// Write a program that takes a 3-digit number as input and extracts and displays the middle digit

#include <iostream>
using namespace std;

int main() {
    int number =0;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    int middleDigit = (number / 10) % 10;
    cout << "The middle digit of the number is: " << middleDigit << endl;
    return 0;
}