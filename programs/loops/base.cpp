//Write a program that takes two numbers base and exponent, and calculates base^exponent using a loop
//(without using pow function).

#include <iostream>
using namespace std;

int main() {
    int base, exponent, i;
    int result = 1;

    cout << "enter base:";
    cin >> base;

    cout << "enter exponent";
    cin >> exponent;

    for (int i=1; i<=exponent; i++){
       result = result * base; 
    }
    cout << base << "^" << exponent << result << endl;

    return 0;

}