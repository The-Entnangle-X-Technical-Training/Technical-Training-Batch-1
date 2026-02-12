#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;

    cout << "Enter your annual income (in ₹): ";
    cin >> income;

    if (income <= 250000) {
        tax = 0;
    } else if (income <= 500000) {
        tax = 0.05 * (income - 250000);
    } else if (income <= 1000000) {
        tax = 0.05 * 250000 + 0.20 * (income - 500000);
    } else {
        tax = 0.05 * 250000 + 0.20 * 500000 + 0.30 * (income - 1000000);
    }

    cout << "Income Tax: ₹" << tax << endl;

    return 0;
}
