// Program 19: Harshad/Niven Number Checker (3-digit)
// Write a program that takes a 3-digit number, calculates the sum of its digits, and checks if the number is
// divisible by this sum. Example: 153 → 1+5+3=9, 153÷9=17 → Harshad Number. Display "Harshad
// Number" or "Not Harshad Number"

#include <iostream>
using namespace std;

int main() {
    int number =0;
    int sumOfDigits = 0;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    int firstDigit = number / 100;
    int secondDigit = (number / 10) % 10;
    int thirdDigit = number % 10;

    sumOfDigits = firstDigit + secondDigit + thirdDigit;

    if (number % sumOfDigits == 0) {
        cout << number << " is a Harshad Number." << endl;
    } else {
        cout << number << " is not a Harshad Number." << endl;
    }

    return 0;

}
