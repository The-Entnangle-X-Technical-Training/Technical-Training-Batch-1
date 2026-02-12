#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation." << endl;
        return 0;
    }

    double D = b * b - 4 * a * c;

    
    if (D > 0) {
        cout << "Roots are real and distinct." << endl;
    } else if (D == 0) {
        cout << "Roots are real and equal." << endl;
    } else {
        cout << "Roots are imaginary." << endl;
    }

    return 0;
}
