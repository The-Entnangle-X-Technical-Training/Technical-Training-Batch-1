#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

   
    if (number >= 0 && number <= 9) {
        cout << number << " is a Single Digit number." << endl;
    } 
    else if (number >= 10 && number <= 99) {
        cout << number << " is a Double Digit number." << endl;
    } 
    else {
        cout << number << " is More than Double Digit number." << endl;
    }

    return 0;
}
