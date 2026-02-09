#include <iostream>
using namespace std;

int main() {
    int firstNumber=0;
    int secondNumber=0;
    int temp =0;

    cout << "Enter number a: ";
    cin >> firstNumber;

    cout << "Enter number b: ";
    cin >> secondNumber;

    cout << " Before swapping: ";
    cout << "a = " << firstNumber << ", b = " << secondNumber << endl;

    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

    cout << " After swapping: ";
    cout << "a = " << firstNumber << ", b = " << secondNumber << endl;

    return 0;
}
