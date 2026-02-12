//Write a program that takes a 3-digit number as input and checks if it is a palindrome. Example: 121 →
//Yes, 123 → No. Display "Palindrome" or "Not Palindrome".

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 3 digit number";
    cin >> num;

    int firstDigit = num / 100;
    int middleDigit = (num / 10) % 10;
    int lastDigit = num % 10;

    if (firstDigit == lastDigit) {
        cout << "palindrome";
    } else {
        cout<<"not palindrome";
    }

    return 0;

}