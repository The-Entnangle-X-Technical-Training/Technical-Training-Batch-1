#include <iostream>
using namespace std;

int main() {
    int numberOne, numberTwo, numberThree;

    // Input three numbers
    cout << "Enter first number: ";
    cin >> numberOne;
    cout << "Enter second number: ";
    cin >> numberTwo;
    cout << "Enter third number: ";
    cin >> numberThree;

    // Find the greatest number
    if (numberOne >= numberTwo && numberOne >= numberThree) {
        cout << "The greatest number is: " << numberOne << endl;
    } 
    else if (numberTwo >= numberOne && numberTwo >= numberThree) {
        cout << "The greatest number is: " << numberTwo << endl;
    } 
    else {
        cout << "The greatest number is: " << numberThree << endl;
    }

    return 0;
}

