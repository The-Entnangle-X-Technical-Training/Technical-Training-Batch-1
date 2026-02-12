#include <iostream>
using namespace std;

int main() {
    int number;

    // Input
    cout << "Enter a number: ";
    cin >> number;

    // Check divisibility
    if (number % 2 == 0) {
        cout << number << " is divisible by 2" << endl;
    } 
    if (number % 3 == 0) {
        cout << number << " is divisible by 3" << endl;
    } 
    if (number % 5 == 0) {
        cout << number << " is divisible by 5" << endl;
    }
    if (number % 2 != 0 && number % 3 != 0 && number % 5 != 0) {
        cout << number << " is not divisible by 2, 3, or 5" << endl;
    }

    return 0;
}
