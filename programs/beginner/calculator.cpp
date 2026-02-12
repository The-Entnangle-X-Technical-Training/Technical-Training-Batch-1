// Problem 3: Simple Calculator

#include <iostream>
using namespace std;

int main() {
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int subtract = 0;
    int multiply = 0;
    int divide = 0;
    int modulus = 0;

    cout << "enter number 1: ";
    cin >> number1;

    cout << "enter number 2:";
    cin >> number2;

    sum = number1 + number2;
    subtract = number1 - number2;
    multiply = number1 * number2;
    divide = number1 / number2;
    modulus = number1 % number2;

    cout << "sum is : " << sum << endl;
    cout << "subtraction is: " << subtract << endl;
    cout << "multiplication is: " << multiply << endl;
    cout << "division is: " << divide << endl;
    cout << "modulus is: " << modulus << endl;

    return 0;
}