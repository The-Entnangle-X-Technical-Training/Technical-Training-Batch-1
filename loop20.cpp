#include <iostream>
using namespace std;

int main() {
    int number, original, digit;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    original = number;

    while (number != 0) {
        digit = number % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        number = number / 10;
    }

    if (sum == original) {
        cout << "The number is a Strong number";
    } else {
        cout << "The number is NOT a Strong number";
    }

    return 0;
}
