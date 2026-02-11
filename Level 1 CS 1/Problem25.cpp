#include <iostream>
using namespace std;

int main() {
    float amount, discount = 0, finalAmount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if (amount >= 1000) {
        discount = (amount * 10) / 100; 
        cout << "Discount applied: " << discount << endl;
    } else {
        cout << "No discount applied." << endl;
    }

    finalAmount = amount - discount;

    cout << "Final amount to pay = " << finalAmount << endl;

    return 0;
}
