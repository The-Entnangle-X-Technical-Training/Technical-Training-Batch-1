#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> number;
    originalNumber = number;
    for (int i = number; i > 0; i = i / 10) {
        digit = i % 10;

        int factorial = 1;
        for (int j = 1; j <= digit; j++) {
            factorial = factorial * j;
        }
        sum = sum + factorial;
    }

    cout<<"Sum of factorial of digits = " << sum << endl;

    if (sum == originalNumber) {
        cout << originalNumber << " is a Strong Number." << endl;
    } else {
        cout << originalNumber << " is NOT a Strong Number." << endl;
    }

    return 0;
}
