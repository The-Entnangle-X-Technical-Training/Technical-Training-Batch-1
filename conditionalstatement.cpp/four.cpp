#include<iostream>
using namespace std;

int main() {
    int numberOne = 0;
    int numberTwo = 0;

    cout << "enter the first number: ";
    cin >> numberOne;

    cout << "enter the second number: ";
    cin >> numberTwo;

    if (numberOne % numberTwo == 0) {
        cout << "the first number is divisible by the second number" << endl;
    }
    else {
        cout << "the first number is not divisible by the second number" << endl;
    }
    return 0;
}