//Write a program that takes a 3-digit number, calculates the sum of its digits, and checks if the number is
//divisible by this sum. Example: 153 → 1+5+3=9, 153÷9=17 → Harshad Number. Display "Harshad
//Number" or "Not Harshad Number".

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int sumOfDigits = 0;

    cout << "enter a 3 digit number: ";
    cin >> number;

    int firstDigit = number / 100;
    int middleDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    sumOfDigits = firstDigit + middleDigit + lastDigit;

    if (number % sumOfDigits == 0) {
        cout << "Harshad Number" << endl;
    } else {
        cout << "Not Harshad Number" << endl;
    }
}