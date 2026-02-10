// Problem 21: Sum of Digits
// Write a program that takes a number and calculates the sum of its digits

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sumOfDigits = 0;
    cout << "Enter a number: ";
    cin >> number;
    for(int i = number; i > 0; i /= 10) {
        sumOfDigits += i % 10; 
        
    }
    cout << "Sum of digits: " << sumOfDigits << endl;
    
}  