#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "Positive";
    } else {
        cout << "Not Positive";
    }

    return 0;
}
