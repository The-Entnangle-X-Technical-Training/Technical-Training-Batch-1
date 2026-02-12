//Write a program that takes two numbers as input and displays which one is greater, or if they are equal.

#include <iostream>
using namespace std;

int main() {
    int number1 = 0;
    int number2 = 0;

    cout << "enter the first number:";
    cin >> number1;

    cout <<"enter the second number";
    cin >> number2;

    if (number1 > number2) {
        cout << "first number is greater one" << number1 << endl;
    } else {
        cout << "second number is greater one" << number2 << endl;
    }

    return 0;
}