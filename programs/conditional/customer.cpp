//Write a program that calculates discount based on: Purchase amount > ₹10000: 20% discount, > ₹5000:
//15%, > ₹2000: 10%, else no discount. If customer is a member, add 5% extra discount. Display final price
//after discount.

#include <iostream>
using namespace std;

int main() {
    float amount, discount = 0, finalPrice;
    char member;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Is customer a member? (Y/N): ";
    cin >> member;

    if(amount > 10000) {
        discount = 0.20;
    }
    else if(amount > 5000) {
        discount = 0.15;
    }
    else if(amount > 2000) {
        discount = 0.10;
    }

    if(member == 'Y' || member == 'y') {
        discount += 0.05;
    }

    float discountAmount = amount * discount;
    finalPrice = amount - discountAmount;

    cout << "Final price after discount = ₹" << finalPrice;

    return 0;
}
