#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5;  // Rate ₹5 per unit
    } else {
        bill = units * 7;  // Rate ₹7 per unit
    }

    cout << "Total electricity bill: ₹" << bill << endl;

    return 0;
}
