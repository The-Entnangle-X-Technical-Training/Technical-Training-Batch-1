// Problem 23: Check if Prime Number
// Write a program that takes a number and checks whether it is prime or not.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            cout << number << " is not a prime number." << endl;
            return 0;
        }
    }
    
    cout << number << " is a prime number." << endl;
    return 0;
}