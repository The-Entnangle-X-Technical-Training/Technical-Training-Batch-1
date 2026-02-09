// Program 10: Product of All Digits
// Write a program that takes a 3-digit number as input and calculates the product of all its digits, then
// displays the result.

#include <iostream>
using namespace std;

int main() {
    int number =0;
    int ProductOfDigit =0;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    ProductOfDigit = (number /100) * (number % 10)* ((number/10)%10);
    cout << " Product of all digit :"<<ProductOfDigit;
    return 0;
}