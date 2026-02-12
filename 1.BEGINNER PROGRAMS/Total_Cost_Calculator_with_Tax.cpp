#include <iostream>
using namespace std;

int main() {
    float price, taxPercent;
    int quantity;

    cout << "Enter price of one item: ";
    cin >> price;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter tax percentage: ";
    cin >> taxPercent;

    float subtotal = price * quantity;
    float taxAmount = (subtotal * taxPercent) / 100;
    float total = subtotal + taxAmount;

    cout << "\nSubtotal: " << subtotal;
    cout << "\nTax Amount: " << taxAmount;
    cout << "\nFinal Total Amount: " << total << endl;

    return 0;
}
