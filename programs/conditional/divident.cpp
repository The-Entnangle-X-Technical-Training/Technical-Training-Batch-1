// Write a program that takes two numbers (dividend and divisor) and checks if the dividend is divisible by
// the divisor. Display "Divisible" or "Not Divisible".

#include <iostream>
using namespace std;

int main() {
    int number1 = 0;
    int number2 = 0;

    cout << "enter the first number as divident: ";
    cin >> number1;

    cout <<"enter the second number as divisor" ;
    cin >> number2;

    if (number1 % number2 == 0){
        cout << "divisible" << endl;
    } else {
        cout << "not divisible" << endl;
    }

    return 0;
}