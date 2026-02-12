//Write a program that takes a number and calculates the product of all its digits using a loop.

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int product = 1;

    cout << "enter a number";
    cin >> number;

    while (number != 0) {
        int lastDigit = number % 10;
        product *= lastDigit;
        number /= 10;
    }
    cout << "product of digits is: " << product << endl;
}