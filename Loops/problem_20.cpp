// Problem 20: Count Digits in a Number
// Write a program that takes a number and counts how many digits it has

#include <iostream>
using namespace std;

int main() {
    int number=0;
    cout << "Enter a number: ";
    cin >> number;

    int count = 0;
    
    for (int i = number; i > 0; i /= 10) {
        count++;
    }

    cout << "Number of digits in " << number << " is: " << count << endl;
}    