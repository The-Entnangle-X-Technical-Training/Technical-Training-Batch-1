#include <iostream>
using namespace std;

int main() {
    double amount, finalAmount;

    cout << "Enter purchase amount: ";
    cin >> amount;

    
    if (amount >= 1000) {
        finalAmount = amount - (amount * 0.10); // 10% discount
    } else {
        finalAmount = amount; // No discount
    }


    cout << "Final amount after discount: " << finalAmount << endl;

    return 0;
}
