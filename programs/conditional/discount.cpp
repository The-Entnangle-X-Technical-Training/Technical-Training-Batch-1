//Write a program that gives discount based on purchase amount:
//If amount >= 1000:10% discount
//Otherwise: No discount Display final amount after discount.

#include <iostream>
using namespace std;

int main() {
    float amount, discount = 0, finalAmount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if(amount >= 1000) {
        discount = amount * 0.10;
    }

    finalAmount = amount - discount;

    cout << "Discount = " << discount << endl;
    cout << "Final amount to pay = " << finalAmount << endl;

    return 0;
}
