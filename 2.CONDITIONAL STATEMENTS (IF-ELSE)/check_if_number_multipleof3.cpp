#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 3 == 0) {
        cout << "Multiple of 3";
    } else {
        cout << "Not Multiple of 3";
    }

    return 0;
}
