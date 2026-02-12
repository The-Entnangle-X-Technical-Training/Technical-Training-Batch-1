//Write a program that takes a 2-digit number as input and displays it in reverse order (e.g., 45 becomes
// 54).

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int reversedNumber = 0;

    cout << "Enter a 2 digit number: ";
    cin >> number;

    reversedNumber = (number % 10) * 10 + (number / 10);
    cout << "The reversed number is: " << reversedNumber << endl;
    return 0;
}