//Write a program that takes base and exponent as input and calculates base^exponent using a loop

#include<iostream>
using namespace std;

int main() {

    int base, exponent;
    long long result = 1;

    cout << "enter base and exponent:";
    cin >> base >> exponent;

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;
}