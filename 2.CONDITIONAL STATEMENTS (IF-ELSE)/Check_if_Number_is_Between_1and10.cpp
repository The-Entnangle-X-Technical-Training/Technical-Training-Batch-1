#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= 1 && number <= 10) {
        cout << "Yes, the number is between 1 and 10.";
    } else {
        cout << "No, the number is not between 1 and 10.";
    }

    return 0;
}
