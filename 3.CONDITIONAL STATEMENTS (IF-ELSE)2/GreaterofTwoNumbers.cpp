#include <iostream>
using namespace std;

int main() {
    int number1, number2;


    cout << "Enter first number: ";
    cin >> number1;

    cout << "Enter second number: ";
    cin >> number2;

    
    if (number1 > number2) {
        cout << number1 << " is greater than " << number2 << endl;
    } else if (number2 > number1) {
        cout << number2 << " is greater than " << number1 << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
