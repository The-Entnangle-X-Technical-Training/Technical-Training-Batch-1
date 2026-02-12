#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "Zero";
    } else {
        cout << "Not Zero";
    }

    return 0;
}
