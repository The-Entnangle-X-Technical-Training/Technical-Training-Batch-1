//Write a program that checks if a number is a strong number (sum of factorial of digits equals the number).
//Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int sumofFactorials = 0;
    int temp = 0;

    cout << "enter a number";
    cin >> number;

    temp = number;

    while (temp != 0) {
        int lastDigit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= lastDigit; i++ ) {
            factorial *= i;
        
        }
        sumofFactorials += factorial;
        temp /= 10;
    }

    if (sumofFactorials == number) {
        cout << " number is a strong number"<< endl;
    } else {
        cout << "number is not a strong number" << endl;
    }
    }
