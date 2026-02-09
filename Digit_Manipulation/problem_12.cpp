// Program 12: Palindrome Number Checker (2-digit)
// Write a program that takes a 2-digit number as input and checks if it is a palindrome (reads same forwards
// and backwards). Example: 11 → Yes, 23 → No. Display "Palindrome" or "Not Palindrome"

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter a 2-digit number: ";
    cin >> number;

    int firstDigit = number / 10;
    int lastDigit = number % 10;

    if(firstDigit == lastDigit){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}