#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter number a: ";
    cin >> a;

    cout << "Enter number b: ";
    cin >> b;

    cout << "\nBefore swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    a = a * b;
    b = a / b;
    a = a / b;

    cout << "\nAfter swapping:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
