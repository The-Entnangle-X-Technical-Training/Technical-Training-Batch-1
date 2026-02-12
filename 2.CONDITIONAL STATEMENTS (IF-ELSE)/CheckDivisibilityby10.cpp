#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 10 == 0) {
        cout << "Divisible";
    } else {
        cout << "Not Divisible";
    }

    return 0;
}
