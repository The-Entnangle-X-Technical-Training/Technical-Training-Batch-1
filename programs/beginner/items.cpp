//Write a program that calculates total cost of items: input price, quantity, and tax percentage, then calculate
//and display subtotal, tax amount, and final total amount.

#include <iostream>
using namespace std;

int main() {
    float price, quantity, taxPercentage;
    float subtotal, taxAmount, finalTotal;

    cout << "enter price of one item: " ;
    cin >> price;

    cout << "enter quantity: ";
    cin >> quantity;

    cout << "enter tax: ";
    cin >> taxPercentage;

    subtotal = price * quantity;
    taxAmount = (subtotal * taxPercentage) / 100;
    finalTotal = subtotal + taxAmount;

    cout << "sub total: " << subtotal << endl;
    cout << "Tax Amount: " << taxAmount << endl;
    cout << "final Total amount: " << finalTotal << endl;

    return 0;
}

