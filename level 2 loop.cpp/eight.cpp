//Write a program that checks if a number is a palindrome (reads same forwards and backwards).
//Example: 121, 12321, 1331 are palindromes

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int reverse = 0;

    cout << "enter a number";
    cin >> number;

    while (number != 0) {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number /= 10;
    }
    if (reverse == number) {
        cout << "number is a palindrome" << endl;
    } else {
        cout << "number is not a palindrome" << endl;
    }
    }
