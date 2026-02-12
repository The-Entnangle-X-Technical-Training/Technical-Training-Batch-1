#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

   
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    
    if (num1 < num2 && num2 < num3) {
        cout << "Numbers are in strictly ascending order." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Numbers are in strictly descending order." << endl;
    } else {
        cout << "Numbers are neither strictly ascending nor strictly descending." << endl;
    }

    return 0;
}
