//Write a program that takes a number and prints it in reverse using a loop.
//Hint: Extract digits one by one and build reversed number

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int reversedNumber = 0;

    cout << "enter a number";
    cin >> number;

    while (number != 0) {
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number /= 10;
    }
    cout << "reversed number is: " << reversedNumber << endl;
}