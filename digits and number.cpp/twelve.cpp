//Write a program that takes a 4-digit number ABCD and checks if it contains the digit 0 anywhere except
//the first position. Example: 4012 → Duck Number, 0123 → Not Duck, 1234 → Not Duck. Display
//"Duck Number" or "Not Duck Number"

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    bool isDuckNumber = false;

    cout << "enter a 4 digit number: ";
    cin >> number;

    int firstDigit = number / 1000;
    int secondDigit = (number / 100) % 10;
    int thirdDigit = (number / 10) % 10;
    int fourthDigit = number % 10;

    if (secondDigit == 0 || thirdDigit == 0 || fourthDigit == 0) {
        isDuckNumber = true;
    }

    if (isDuckNumber) {
        cout << "Duck Number" << endl;
    } else {
        cout << "Not Duck Number" << endl;
    }
}