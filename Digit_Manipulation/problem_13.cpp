// Program 13: Palindrome Number Checker (3-digit)
// Write a program that takes a 3-digit number as input and checks if it is a palindrome. Example: 121 →
// Yes, 123 → No. Display "Palindrome" or "Not Palindrome"

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter a 3-digit number: ";
    cin >> number;

    int firstDigit = number / 100;
    int middleDigit = (number / 10) % 10;
    int lastDigit = number % 10;

    if(firstDigit == lastDigit){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }
    return 0;
}