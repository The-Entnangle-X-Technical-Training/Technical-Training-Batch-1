#include <iostream>
using namespace std;

int main() {
    double amount, discountPercent = 0;
    char isMember;

    cout << "Enter purchase amount: ₹";
    cin >> amount;

    cout << "Is the customer a member? (y/n): ";
    cin >> isMember;

    if (amount > 10000) {
        discountPercent = 20;
    } else if (amount > 5000) {
        discountPercent = 15;
    } else if (amount > 2000) {
        discountPercent = 10;
    } else {
        discountPercent = 0;
    }

    
    if (isMember == 'y' || isMember == 'Y') {
        discountPercent += 5;
    }

    double discountAmount = (amount * discountPercent) / 100;
    double finalPrice = amount - discountAmount;

    
    cout << "Total Discount: " << discountPercent << "%" << endl;
    cout << "Final Price after discount: ₹" << finalPrice << endl;

    return 0;
}
