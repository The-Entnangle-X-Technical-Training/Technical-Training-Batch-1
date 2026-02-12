//Write a program that calculates water bill: 0-5000L: ₹2/L, 5001-10000L: ₹3/L, above 10000L: ₹5/L. If
//usage < 3000L, give 15% discount (conservation reward). Display total bill.

#include <iostream>
using namespace std;

int main() {
    int usage;
    float rate, bill, discount = 0;

    cout << "Enter water usage in litres: ";
    cin >> usage;

    if(usage <= 5000) {
        rate = 2;
    }
    else if(usage <= 10000) {
        rate = 3;
    }
    else {
        rate = 5;
    }

    bill = usage * rate;

    if(usage < 3000) {
        discount = bill * 0.15;
        bill = bill - discount;
    }

    cout << "Total water bill = ₹" << bill;

    return 0;
}
