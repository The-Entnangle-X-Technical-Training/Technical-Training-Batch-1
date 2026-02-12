#include<iostream>
using namespace std;

int main() {
    int numberOne = 0;
    int numberTwo = 0;

    cout << "enter the first number:";
    cin >> numberOne;
    cout << "enter the second number:";
    cin >> numberTwo;

    if (numberOne > numberTwo) {
        cout << "the first number is greater than the second number" << endl;
    }
    else if (numberOne < numberTwo) {
        cout << "the second number is greater than the first number" << endl;
    }
    else {
        cout << "both numbers are equal" << endl;
    }

}