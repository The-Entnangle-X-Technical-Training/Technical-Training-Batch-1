#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << number << " is a Single Digit." << endl;
    } else if (number <= 0 && number >= -9) {
        cout << number << " is a Single Digit." << endl;
    } else {
        cout << number << " is Not a Single Digit." << endl;
    }

    return 0;
}
